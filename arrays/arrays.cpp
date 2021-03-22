
//Creation of array

#include <iostream> 
using namespace std; 

int main(){
    int a[3];
    //same data types will be allowed. And saved all elemts saved in consicutive locations.
    int b[] = {1, 2, 3,4,5,6,7,8};
    int c[3] = {3};
    int d =4;

    cout << endl; 

    cout << "size of a is : " << sizeof(a) << endl; 
    for(int i=0; i<sizeof(b)/sizeof(b[0]); i++){
        a[i] = b[i];
        cout << i << endl;
        cout << b[i] << endl;
    }
    cout << "end of c" << endl;
    for(int i=0; i<sizeof(b)/sizeof(b[0]); i++){
        cout << a[i] << endl;
    }
    // cout << "ended " ;
    return 0;
}