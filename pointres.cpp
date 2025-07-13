// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int a = 20;
//     cout<< &a<<endl;   // & -> operators to store  address the value

//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int a = 20;
   
//     int* ptr = &a;
//     cout<< ptr<<endl;
//     cout<< &a<<endl;   
//     cout<< &ptr<<endl;      

//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int a = 10;
   
//     int* ptr = &a;
//     int** parptr = &ptr;
//     cout<< ptr<<endl;
//     cout<< parptr<<endl;
//     cout<< *ptr<<endl;
//     cout<< **parptr<<endl;
         

//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int a =10;
//     int* ptr = NULL;
//     cout<<ptr<<endl;
//     return 0;
// }



// #include<iostream>
// #include<vector>
// // using namespace std;

// // int main(){
// //    int arr[] = {1, 2, 3, 4, 5};

// //    cout<<*arr<<endl;
// //    cout<<*(arr+1)<<endl;
// //    cout<<*(arr+2)<<endl;
// //    cout<<*(arr+3)<<endl;
// //    cout<<*(arr+4)<<endl;
// //     return 0;
// // }

#include<iostream>
#include<vector>
using namespace std;

int main(){
   int arr[] = {1, 2, 3, 4, 5};
   int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

   for(int i = 0; i < size; i++) {
       cout << *(arr + i) << endl; // Access each element using pointer arithmetic
   }
   return 0;
}
