//
// Created by WSX on 2020/10/12.
//

#ifndef ALGORITHM_QUICKSORT3WAYS_H
#define ALGORITHM_QUICKSORT3WAYS_H

#include <iostream>
using namespace std;

void __quickSort3Ways(int arr[], int l, int r){
    //[l+1, lt]: < v
    //[lt+1, gt-1]: =v
    //[gt, r]: >v
    int i = l+1;
    int lt = l;
    int gt = r+1;
    int v = arr[l];
    if (i >= gt){
        return;
    }
    while(i < gt){
        if (arr[i] < v){
            swap(arr[i], arr[lt+1]);
            lt ++;
            i ++;
        }
        else if(arr[i]==v) {
            i++;
        }
        else {
            swap(arr[i], arr[gt-1]);
            gt--;
        }
    }
    swap(arr[l], arr[lt]);
    __quickSort3Ways(arr, l, lt-1);
    __quickSort3Ways(arr, gt, r);

}


void quickSort3Ways(int arr[], int n){

    __quickSort3Ways(arr, 0, n-1);

}


#endif //ALGORITHM_QUICKSORT3WAYS_H
