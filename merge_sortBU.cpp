#include <iostream>
#include <algorithm>
using namespace std;

//自底向上的归并排序

void __merge(int arr[], int l, int mid, int r){
	//min_max 
	int aux[r-l+1];
	//复制一份 
	for (int i=l;i<=r;i++){
		aux[i-l] = arr[i];
	} 
	
	int i=l, j=mid+1; 
	for (int k=l;k<=r;k++){
		//k索引arr, i,j 索引aux 
		
		if (i>mid){
			arr[k] = aux[j-l];
			j++;
		}
		else if (j>r){
			arr[k] = aux[i-l];
			i++;
		}
		else if (aux[i-l]>aux[j-l]){
			arr[k] = aux[j-l];
			j++;
		}
		
		else{
			arr[k] = aux[i-l];
			i++;
		}
	}
	
}

void mergeSortBU(int arr[], int n){
	
	for (int size=1; size<n; size += size){
		for (int i=0; i+size<n; i += size+size){
			__merge(arr, i, i+size-1, min(i+size+size-1, n-1));
		}
	}	
} 



void mergeSortBU2(int arr[], int n){
	for (int size=1; size<n; size += size ){
		for (int i=0; i<n-size; i += size+size ){
			__merge(arr, i, i+size-1, min(i+size+size-1, n-1));
		}
	}
}


int main(){
	int arr[11] = {52,6,4,12,3,5,2,7,98,1,66};
	mergeSortBU2(arr, 11);
	for(int i=0;i<11;i++){
		cout<<arr[i]<<endl;
	}
    return 0;
}



