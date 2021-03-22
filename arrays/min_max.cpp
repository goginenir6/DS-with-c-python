/*Program to find the minimum (or maximum) element of an array

Given an array, write functions to find the minimum and maximum elements in it.*/


#include <iostream> 
using namespace std;

int arr[] = { 3, 5, 2, 4, 9, 3, 1, 7, 3, 11, 12, 3, 30, 54 };


int main(){
    int min, max = arr[0];
    for(int i=0; i< sizeof(arr)/sizeof(arr[0]); i++){
        if (min > arr[i])
            min = arr[i];
        
        if (max < arr[i])
            max = arr[i]; 

    }
    cout << "Min value is: " << min << endl;
    cout << "Max value is: " << max << endl;
    return 0;
}

// O(n)