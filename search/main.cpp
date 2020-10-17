#include <iostream>
#include "binarySearch.h"
using namespace std;
int main() {

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int result;
    result = rBinarySearch(arr, 0, 9, 5);
    cout << result << endl;
    return 0;
}
