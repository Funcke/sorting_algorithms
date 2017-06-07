#include <iostream>

using namespace std;

template <typename T>
void bubblesort(T *arr, int len){
	T tmp;
	for(int i = 0; i < len; i++){
		for(int j = 0; j < len; j++){
			if(arr[j] > arr[j+1]){
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}

int main(void){
	int arr[] = {23, 0, 66, 98, 45, 78, 2};
	bubblesort<int>(arr, 7);
	
	for(int i = 0; i < 7; i++)
		cout << arr[i] << endl;
	return 0;
}