#include <iostream>
#include <algorithm>
using namespace std;

void selection_sort(int arr[], int n){
	//min_max
	for(int i; i<n;i++){
		int minIndex = i;
		for(int j=i+1; j<n; j++){
			if (arr[j]<arr[minIndex]){
				minIndex = j;
			}
		}
		swap(arr[i], arr[minIndex]);
	}
}

void selection_sort2(int arr[], int n){
	//max_min
	for(int i; i<n;i++){
		int maxIndex = i;
		for(int j=i+1; j<n; j++){
			if (arr[j]>arr[maxIndex]){
				maxIndex = j;
			}
		}
		swap(arr[i], arr[maxIndex]);
	}
}

void selection_sort3(int arr[], int n){
	for(int i=0;i<n;i++){
		int maxInd = i;
		for(int j=i+1;j<n;j++){
			if(arr[j]>arr[maxInd]){
				maxInd = j;
				
			}
		}
		swap(arr[maxInd], arr[i]);
	}
}

void selection_sort4(int arr[], int n){
	for(int i=0;i<n;i++){
		int minInd = i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[minInd]){
				minInd = j;
			}
		}
		swap(arr[i],arr[minInd]);
	}
}

int main(){
	int arr[10] = {52,6,4,12,1,5,2,7,98,1};
	selection_sort4(arr, 10);
	for(int i=0;i<10;i++){
		cout<<arr[i]<<endl;
	}
    return 0;
}
