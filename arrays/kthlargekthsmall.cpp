/*K’th Smallest/Largest Element in Unsorted Array | Set 1
Difficulty Level : Medium1
 
Given an array and a number k where k is smaller than size of array, we need to find the k’th smallest element in the given array. It is given that all array elements are distinct.

Examples:  

Input: arr[] = {7, 10, 4, 3, 20, 15} 
k = 3 
Output: 7

Input: arr[] = {7, 10, 4, 3, 20, 15} 
k = 4 
Output: 10 */

#include<iostream>
using namespace std;

int Kthsmallest(int arr[], int n , int k){
    bool is_sorted = false;
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
    return arr[k-1];
}

int main(){
    int arr[] = {7,10,4,3,20,15};
    int k = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "K'th smallest element is " << Kthsmallest(arr, n, k);
    return 0;
}