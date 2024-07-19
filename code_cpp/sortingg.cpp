#include <bits/stdc++.h>
using namespace std;

// Function for Selection sort-> select min and swap
void selectionSort(int arr[], int n){ 
    
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
    }
}

// bubble sort -> adjacent comparison
void bubbleSort(int arr[], int n){

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

//insertion sort -> works by iteratively inserting each element of an 
// unsorted list into its correct position in a sorted portion of the list. It is a stable sorting algorithm,
void insertionSort(int arr[]){
     for(int i=1; i<n; i++){
        int current=arr[i];
        int j=i-1;
        
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        
        arr[j+1]=current;
    }
}

//merge sort


void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

// Driver program
int main()
{
    int arr[] = { 64, 25, 12, 22, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function Call
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}