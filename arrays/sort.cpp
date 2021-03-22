/*C program to sort an array in ascending order
Given an array arr[] of size N, the task is to sort this array in ascending order in C.
Examples: 

Input: arr[] = {0, 23, 14, 12, 9}
Output: {0, 9, 12, 14, 23}

Input: arr[] = {7, 0, 2}
Output: {0, 2, 7}*/

#include <iostream>
using namespace std;

int main(){
    int arr[] = {0, 23, 14, 12, 9};
    bool is_sorted = false;
    int n = sizeof(arr)/sizeof(arr[0]);
    while (!is_sorted){
        is_sorted = true;
        for(int i =0; i<n-1; i++){
            if(arr[i]> arr[i+1]){
                is_sorted = false;
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }

    //  for(int i=0; i<n; i++){
    //     cout << arr[i] << " ";
    //     cout << endl;
    // }
    return 0;
}