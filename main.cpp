//
// Created by WSX on 2020/10/8.
//
#include "QuickSort.h"
#include <iostream>
#include "SortTestHelper.h"
#include "insertionSort.h"


using namespace std;
int main(){
    int n=20;
    int* arr = SortTestHelper::generateRandomArray(n, 5, 60);
	insertionSort(arr, n);
	SortTestHelper::printArray(arr, n);
    delete [] arr;
    return 0;
}