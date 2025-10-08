#include <iostream>
using namespace std;


// BUBLE SORT 
// void bubleSort (int arr[], int n) {
//     bool isSwap = false;
//     for(int i=0; i<n-1; i++) {
//         for(int j=0; j<n-i-1; j++) {
//             if(arr[j] > arr[j+1]) {
//                 swap(arr[j], arr[j+1]);
//                 isSwap = true;
//             }
//         }

//         if(!isSwap) { // array is already sorted
//             return ;
//         }
//     }
// }


//SELECTION SORT

// void selectionSort(int arr[], int n) {
//     for (int i=0; i<n; i++) {
//         int smallestIdx = i; //unsorted part starting

//         for(int j=i+1; j<n; j++) {
//             if(arr[j] < arr[smallestIdx]) {
//                 smallestIdx = j;
//             }
//         }

//         swap(arr[i], arr[smallestIdx]);
//     }
// }


// INSERTION SORT




void printArry (int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};

    // selectionSort(arr, n);

    // bubleSort(arr, n);
    printArry(arr, n);
    return 0;
}