//
// Created by WSX on 2020/10/17.
//

#ifndef SEARCH_BINARYSEARCH_H
#define SEARCH_BINARYSEARCH_H
#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int target){
    int l = 0;
    int r = n-1;
    int mid;
    while(l <= r){
        mid = l + (r-l) / 2;
        if (target < arr[mid]){
            r = mid - 1;
        }else if (target > arr[mid]){
            l = mid + 1;
        }
        else{
            return mid;
        }
    }
    return -1;

}

int rBinarySearch(int arr[], int l, int r, int target){

    if (l > r){
        return -1;
    }

    int mid = l + (r - l) / 2;
    if (arr[mid] == target){
        return mid;
    }
    else if (target < arr[mid]){
        return rBinarySearch(arr, l, mid-1, target);
    }else {
        return rBinarySearch(arr, l+1, mid, target);
    }

}

#endif //SEARCH_BINARYSEARCH_H
