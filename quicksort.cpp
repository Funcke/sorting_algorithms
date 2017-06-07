#include <iostream>

using namespace std;

template<typename T>
void quicksort(T* arr, int left, int right){
	int i = left, j = right, pivot = arr[(left+right)/2];
	T tmp;
	while( i <= j){
		while(arr[i] < pivot){
			i++;
		}
		while(arr[j] > pivot){
			j--;
		}
		if(i <= j){
			tmp = arr[j];
			arr[j] = arr[i];
			arr[i] = tmp;
			i++;
			j--;
		}
	}
	if(left < j) return quicksort<T>(arr, left, j);
	if(right < i) return quicksort<T>(arr, i, right);
}

int main(void){
	int arr[] = {23, 9, 34, 77, 99, 2, 0};
	quicksort<int>(arr, 0, 7);
	for(int i = 0; i < 7; i++)
		cout << arr[i] << endl;
	return 0;
}
