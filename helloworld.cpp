// To run the c++ codeincmd you need to first compile the code by using 

// g++ helloworld.cpp -o helloworld.exe

// it will create hello world exe then 

// helloworld.exe enter

//If you want to run in vs code add code runner extenstion and enable file> preferences> search run in terminal and aenable the code runer check box.

// then you can see run button top left of vs code window.


// #include<iostream>
// using namespace  std;

// int main(){
//     string name;
//     cout << "hello world\n" ;
//     cout << "Enter your name :";
//     cin >> name;
//     cout << "your name is "+name << endl;
//     return 0; 
// }



// ****************** ARRAYS *************************

// #include <fstream> 
// #include <iostream> 
// #include <string> 
  
// using namespace std; 
  
// int main() 
// { 
//     fstream file; 
//     file.open("cout.txt", ios::out); 
//     string line; 
  
//     // Backup streambuffers of  cout 
//     streambuf* stream_buffer_cout = cout.rdbuf(); 
//     streambuf* stream_buffer_cin = cin.rdbuf(); 
  
//     // Get the streambuffer of the file 
//     streambuf* stream_buffer_file = file.rdbuf(); 
  
//     // Redirect cout to file 
//     cout.rdbuf(stream_buffer_file); 
  
//     cout << "This line written to file" << endl; 
  
//     // Redirect cout back to screen 
//     cout.rdbuf(stream_buffer_cout); 
//     cout << "This line is written to screen" << endl; 
  
//     file.close(); 
//     return 0; 
// } 




// // C++ program to illustrate dynamic allocation 
// // and deallocation of memory using new and delete 
// #include <iostream> 
// using namespace std; 
  
// int main () 
// { 
//     // Pointer initialization to null 
//     int* p = NULL; 
  
//     // Request memory for the variable 
//     // using new operator 
//     p = new(nothrow) int; 
//     if (!p) 
//         cout << "allocation of memory failed\n"; 
//     else
//     { 
//         // Store value at allocated address 
//         *p = 29; 
//         cout << "Value of p: " << *p << endl; 
//     } 
  
//     // Request block of memory 
//     // using new operator 
//     float *r = new float(75.25); 
  
//     cout << "Value of r: " << *r << endl; 
  
//     // Request block of memory of size n 
//     int n = 5; 
//     int *q = new(nothrow) int[n]; 
  
//     if (!q) 
//         cout << "allocation of memory failed\n"; 
//     else
//     { 
//         for (int i = 0; i < n; i++) 
//             q[i] = i+1; 
  
//         cout << "Value store in block of memory: "; 
//         for (int i = 0; i < n; i++) 
//             cout << q[i] << " "; 
//     } 
  
//     // freed the allocated memory 
//     delete p; 
//     delete r; 
  
//     // freed the block of allocated memory 
//     delete[] q; 
  
//     return 0; 
// } 


// // c++ Array declarations

#include <iostream>

using namespace std;

int main(){
    int a[3];
    //same data types will be allowed. And saved all elemts saved in consicutive locations.
    int b[] = {1, 2, 3};
    int c[3] = {3};
    int *f=c;

    int d =2;
    int *e = &d;

    //throw error 'excess elements in array initializer'
    // int g[3] = {1,2,3,4,5,6};

    cout << endl; 

    cout << "Value of a: " << a << endl; 
    cout << "Value of *a: " << *a << endl; 

    cout << "Value of b: " << b << endl; 
    cout << "Value of *b: " << *b << endl; 
    // cout << "Value of [1]b: " << [1]b << endl; 

    cout << "Value of c: " << c << endl; 
    cout << "Value of *c: " << *c << endl;

    cout << "Value of f: " << f << endl; 
    cout << "Value of *f: " << *f << endl;

    cout << "Value of d: " << d << endl; 
    cout << "Value of &d: " << &d << endl;

    cout << "Value of e: " << e << endl; 
    cout << "Value of *e: " << *e << endl;
    cout << "Value of &e: " << &e << endl;

    // if (d == &e){ // thorws eeror 
    //     cout << "the d is a pointer" << endl;
    // }else 
    if (&d == e){
        cout << "the e is a pointer" << endl;
    }

    return 0;
}


// // Take runtime array inputs from user
// #include <iostream>
// using namespace std;
 
// int main()
// {
//     int arr[5], i;
 
//     cout << "Size of integer in this compiler is "
//          << sizeof(int) << "\n";
 
//     for (i = 0; i < 5; i++){
//         // cout << "Address arr[" << i << "] is " << &arr[i]
//         //      << "\n";
//         cout << "please enter an integer : " << endl;
//         cin  >> arr[i] ;
//     }

//     for (i = 0; i < 5; i++){
//         cout << arr[i] <<" , " ;
//     }
//     cout << endl;

//     // it wont thow error if size is not matched
//     for (i = 0; i < 6; i++){
//         cout << &arr[i] <<" , " ;
//         cout << arr[i] <<" , " ;
//         cout << endl;
//     }
    
//     return 0;
// }


// // Insertion and deletion of an array
// #include <iostream>
// using namespace std;
 
// int main()
// {
//     int arr[5] = {1,2,4};
//     int i , j=2;

//     for (i = 0; i < 5; i++){
//         cout << arr[i] <<" , " ;
//     }
//     cout << endl;
    
//     // 3 is our inserting value
//     //for (i =2; i < sizeof(arr)/4; i++ )
//      for (i = sizeof(arr)/4-2; j <= i; i--){
//         arr[i+1] = arr[i];
//         if(i == j)
//             arr[i] = 3;
//     }

//     //1 is our deletion index
//     for (i = 1; i < sizeof(arr)/4; i++){
//         arr[i] = arr[i+1];
//     }

//     for (i = 0; i < 5; i++){
//         cout << arr[i] <<" , " ;
//     }
//     cout << endl;
//     return 0;
// }


// ****************** ARRAYS & POINTERS *********************

//int *p 
// A pointer is variable which holds the address of another variable.
//p is a pointer - > this p pointer containes address of variable and the variable data type is int.
// char *c; => c is a pointer to charecter



// #include <iostream>
// using namespace std;
 
// int main()
// {
//     int arr[5] = {1,2,4}; 
//     int a = 10;
//     int *p ;
//     p = arr;

//     //cout << arr << endl << p << endl << *p << endl << &a << endl;

//     // Pointer we can increment but not ith address p++
//     // cout << p << endl ;
//     // cout << ++p << endl ;
//     // cout << *p << endl;


//     // arr[i] = *(arr+i) or  *(p+i)
//     //*(arr+i) => *(i+arr) => i[arr]
//     // cout << arr[1] << endl;
//     // cout << *(arr+2) << endl;
//     // cout << p+2 << endl << *( p+2) << endl;
//     // cout << 2[arr] << endl;
//     // cout << 2[p] << endl;

// // arr == &arr but arr+1 will increment to next address and &arr+1 will increment entire array address.
// // arr[0]+1 == arr+1
// // arr[i] == arr+i
//     // cout << *(arr+1) << endl;
//     // cout << *arr+1<< endl;
     
//     // cout << &p[2] << endl;
//     // cout << *(&p[2])    << endl;

//     cout << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
 
// int main()
// {
//     // int a[2][3] = {1,2,3,4,5,6};
//     // int b[2][3] = {{1,2,3}, {4,5,6}};
//     // int c[][2] = {1,2,3,4,5,6};

//     // cout << sizeof(a) << endl << sizeof(*a) << endl <<sizeof(*a[0]) << endl;

//     // for (int i = 0; i < sizeof(a)/sizeof(*a); i++){
//     //     for(int j=0; j < sizeof(*a) / sizeof(*a[0]); j++){
//     //         cout << a[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }

//     // in row major implementation and array should starts from 0, for matrix mxn to access peticular element like a[i][j] = Baseadrs+((i*n)+j)*size of data type

//     // for ind start from 1 then the formula is a[i][j] = Baseadrs+((i-1*n)+j-1 )*size

//     //column major imple a[i][j] = B+( (j*m)+i )*size
//     // index starts from 1 =>  a[i][j] = B+ ( ((j-1)*m)+(i-1) )*size
    
//     int a[3][3] = {1,2,3,4,5,6,7,8,9};
//     int b[9] = {1,2,3,4,5,6,7,8,9};
//     int c[1] = {1};
//     int *p;

//     cout << sizeof(a) << endl << sizeof(*a) << endl ;
//     cout << sizeof(b) << endl << sizeof(*b) << endl ;
//     cout << sizeof(c) << endl << sizeof(*c) << endl ;
    
//     for (int i = 0; i < sizeof(a)/sizeof(*a); i++){
//         for(int j=0; j < sizeof(*a) / sizeof(*a[0]); j++){
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }
//     p = a[0];
//     //cout << a[0] << endl << a[1] << endl << a[2] << endl << a;
//     cout << p << a << &a[0][0] << &a << *a << a[0] << endl;
//     cout << a+1 << endl << **a  << endl;
//     cout << *(a[1]+1) << endl << *(&a[1]+1);

//     //a[i]+1 != &a[i]+1
//     //sizeof(a) == no.of ele * size of each element
//     //sizeof(*a) ==  no of rows * size of each element

//     return 0;
// }

