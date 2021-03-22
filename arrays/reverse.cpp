/*Write a program to reverse an array or string
 
Given an array (or string), the task is to reverse the array/string.
Examples : 
 

Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}*/

#include<iostream>
using namespace std;

int main(){
    int arr[] =  {3,4,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n/2 ; i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    //  for(int i=0; i<n; i++){
    //     cout << arr[i] << " ";
    //     cout << endl;
    // }
    return 0;
}