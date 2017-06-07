#include <iostream>

using namespace std;



int main(void){
	int arr[] = {1, 2, 3, 4, 6, 7, 9, 22, 67};
	int i, j, tmp;
	
	for(i = 0; i < 9; i++){
		j = i;
		tmp = arr[j];
		while(j > 0 && arr[j-1] > tmp){
			arr[j] = arr[j-1];
			j--;
		}
		arr[j] = tmp;
	}
	
	for(i = 0; i < 9; i++)
		cout << arr[i] << endl;
	
	return 0;
}