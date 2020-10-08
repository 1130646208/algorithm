//
// Created by WSX on 2020/10/8.
//

#ifndef ALGORITHM_QUICKSORT_H
#define ALGORITHM_QUICKSORT_H

#include <iostream>
//#include <algorithm>
using namespace std;

int __partition(int arr[], int l, int r){

    int v = arr[l];
    int j = l;
    for (int i=l+1; i<=r; i++){
        if (arr[i] < v){
            swap(arr[i], arr[j+1]);
            j++;
        }
    }
    swap(arr[l], arr[j]);
    return j;
}

void __QuickSort(int arr[], int l, int r){
    if(l >= r)
        return;

    int p = __partition(arr, l, r);
    __QuickSort(arr, l, p-1);
    __QuickSort(arr, p+1, r);
}

void QuickSort(int arr[], int n){
    __QuickSort(arr, 0, n-1);
}

#endif //ALGORITHM_QUICKSORT_H
