#include <iostream>
#include <algorithm>
using namespace std;

//自顶向下的归并排序 
//时间复杂度nlogn 
//[l, mid], [mid+1,r] 两个有序数组进行归并 

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


void __mergeSort(int arr[], int l, int r){
	
	if (l >= r){
		return;
	}
	
	int mid = (l + r) / 2;//溢出未考虑 
	__mergeSort(arr, l, mid);
	__mergeSort(arr, mid+1, r);
	if (arr[mid] > arr[mid+1])//归并排序的第一种优化 
		__merge(arr, l, mid, r);
	
}


void mergeSort(int arr[], int n){
	
	__mergeSort(arr, 0, n-1);//0, n-1
	
} 

int main(){
	int arr[10] = {52,6,4,12,1,5,2,7,98,3};
	mergeSort(arr, 10);
	for(int i=0;i<10;i++){
		cout<<arr[i]<<endl;
	}
    return 0;
}
