#include <iostream>
#include <algorithm>
using namespace std;

//�Զ����µĹ鲢���� 
//ʱ�临�Ӷ�nlogn 
//[l, mid], [mid+1,r] ��������������й鲢 

//void __merge(int arr[], int l, int mid, int r){
//	//min_max
//	int aux[r-l+1];
//	//����һ��
//	for (int i=l;i<=r;i++){
//		aux[i-l] = arr[i];
//	}
//
//	int i=l, j=mid+1;
//	for (int k=l;k<=r;k++){
//		//k����arr, i,j ����aux
//
//		if (i>mid){
//			arr[k] = aux[j-l];
//			j++;
//		}
//		else if (j>r){
//			arr[k] = aux[i-l];
//			i++;
//		}
//		else if (aux[i-l]>aux[j-l]){
//			arr[k] = aux[j-l];
//			j++;
//		}
//
//		else{
//			arr[k] = aux[i-l];
//			i++;
//		}
//	}
//
//}
//
//
//void __mergeSort(int arr[], int l, int r){
//
//	if (l >= r){
//		return;
//	}
//
//	int mid = (l + r) / 2;//���δ����
//	__mergeSort(arr, l, mid);
//	__mergeSort(arr, mid+1, r);
//	if (arr[mid] > arr[mid+1])//�鲢����ĵ�һ���Ż�
//		__merge(arr, l, mid, r);
//
//}
//
//
//void mergeSort(int arr[], int n){
//
//	__mergeSort(arr, 0, n-1);//0, n-1
//
//}
//*******************************************��������ϰ

void __merge(int arr[], int l, int mid, int r){
    int aux[r-l+1];
    //copy arr to aux
    for (int i=0; i<r-l+1; i++){
        aux[i] = arr[i+l];
    }
    int i = 0;
    int j = mid - l;
    for (int k=l; k<=r; k++){
        if (aux[i] < aux[j]){
            arr[k] = aux[i];
            i++;
        }else{
            arr[k] = aux[j];
            j++;
        }
    }
}


void __mergeSort(int arr[], int  l, int r){
    int mid = (l + r) / 2;
    if (l >= r) return;

    __mergeSort(arr, l, mid);
    __mergeSort(arr, mid+1, r);
    __merge(arr, l, mid, r);
}

void mergeSort(int arr[], int n){
    __mergeSort(arr, 0, n-1);
}