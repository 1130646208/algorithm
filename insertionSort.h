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
////改进的插入排序,节省交换的时间
// void insertionSort3(int arr[], int n){
//	//min_max
//	for (int i=1;i<n;i++){
//		int currentV = arr[i];//当前比较元素
//		int j;//保存要插入的位置
//		for (j=i;j>0 && currentV<arr[j-1];j--){
//				arr[j] = arr[j-1];
//			}
//		arr[j]=currentV;
//		}
//}
//
////改进的插排max_min
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
////练习
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
