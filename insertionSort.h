#include <iostream>

using namespace std;


//void insertionSort(int arr[], int n){
//	//min_max
//	for (int i=1;i<n;i++){
//		for (int j=i;j>0;j--){
//			if (arr[j]<arr[j-1]){
//				swap(arr[j], arr[j-1]);
//			}else{
//				break;
//			}
//		}
//	}
//}
//
//void insertionSort2(int arr[], int n){
//	//max_min
//	for (int i=1;i<n;i++){
//		for (int j=i;j>0;j--){
//			if (arr[j]>arr[j-1]){
//				swap(arr[j], arr[j-1]);
//			}else{
//				break;
//			}
//		}
//	}
//}
//
////�Ľ��Ĳ�������,��ʡ������ʱ��
// void insertionSort3(int arr[], int n){
//	//min_max
//	for (int i=1;i<n;i++){
//		int currentV = arr[i];//��ǰ�Ƚ�Ԫ��
//		int j;//����Ҫ�����λ��
//		for (j=i;j>0 && currentV<arr[j-1];j--){
//				arr[j] = arr[j-1];
//			}
//		arr[j]=currentV;
//		}
//}
//
////�Ľ��Ĳ���max_min
//void insertionSort4(int arr[], int n){
//	for (int i=1;i<n;i++){
//		int currentV = arr[i];
//		int j;
//		for (j=i;j>0 && currentV>arr[j-1];j--){
//			arr[j]=arr[j-1];
//		}
//		arr[j]=currentV;
//
//	}
//
//}
//
////��ϰ
//void insertionSort5(int arr[], int n){
//
//	for (int i=1;i<n;i++){
//		int j;
//		int currentV=arr[i];
//		for (j=i;j>0;j--){
//			if (currentV>arr[j-1]){
//				arr[j]=arr[j-1];
//			}
//			else{
//				break;
//			}
//		}
//		arr[j] = currentV;
//	}
//
//}

void insertionSort(int arr[], int n){
    for (int i=1; i<=n-1; i++){
        int cv = arr[i];
        int j;
        for (j=i; j>0; j--){
            if (cv < arr[j-1]){
                arr[j] = arr[j-1];
            }
            else break;
        }
        arr[j] = cv;
    }
}
