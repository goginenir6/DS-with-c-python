/* Find the frequency of a number in an array
Difficulty Level : Easy
Given an array a[] and an element x, find number of occurrences of x in a[].

Examples:

Input  : a[] = {0, 5, 5, 5, 4}
           x = 5
Output : 3

Input  : a[] = {1, 2, 3}
          x = 4
Output : 0
*/

#include<iostream>
using namespace std;

int getoccurs(int *arr, int x, int n){
    int k =0;
    for(int i=0; i<n; i++){
        if (arr[i] == x)
            k +=1;
    }
    return k;
}

int main(){
    int a[] = {0, 5, 5, 5, 4};
    int x = 5;
    int n = sizeof(a)/sizeof(a[0]);
    cout << "the number of times 5 occurs is: " << getoccurs(a, x, n);
    return 0;
}