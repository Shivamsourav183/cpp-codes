
// // // While()

//  // // print number 1 to 5 


//  #include<iostream>
//  using namespace std;

//  int main(){
//     int count = 1;

//     while(count<=5){
//         cout<< count << " ";
//         count++;
//     }
//     cout << endl;
//     return 0;
//     }



     // // print number 1 to n


//  #include<iostream>
//  using namespace std;

//  int main(){
//     int n = 20;
//     int count = 1;

//     while(count<=n){
//         cout<< count << " ";
//         count++;
//     }
//         cout << endl;
//     return 0;
//     }


// #include<iostream>
//  using namespace std;

//  int main(){
//     int n = 20;
//     int i = 1;
 
//     while(i <= n){
//         cout<< i << " ";
//         i++;
//     }
//         cout << endl;
//     return 0;
//     }



// //  for(initialisation; condition; updation){

//         //work(code)
// }


// print 1 to n


// #include <iostream> 
// using namespace std;
// int main(){
//     int n = 3;

//     for(n=1; n<=3; n++){
//       cout<<n<<" "; 
//     }
//     cout<<endl;

//     return 0;
// }


// #include <iostream> 
// using namespace std;
// int main(){
//     int i, n = 34;
    
//     for(i=1; i<=n; i++){
//       cout<< i <<" "; 
//     }
//     cout<<endl;

//     return 0;
// }





// #include <iostream>
// using namespace std;
// int main(){

//     int i,n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(i=1; i<=n; i++){
//         cout<< i <<endl;
//     }
//     cout<< endl;
//     return 0;
// }


// //  sum of number from 1 to n

#include <iostream>
using namespace std;
int main(){

    int i,n,sum=0;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=1; i<=n; i++){
        sum+=i;
     //    cout<< sum=sum+i<<endl;
    }
    cout<<"sum = "<< sum <<endl;
    return 0;
}



// #include<iostream>
// using namespace std;
// int main(){
//     int i = 1;
    
//     int n = 10;
//     int sum = 0;
//     while(i<=n){
//         sum+=i;
//         i++;
//     }
//    cout<<"sum = "<<sum<<endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n = 10, sum = 0, i = 1;

   
//     while (i <= n) {
//         sum += i; // add i to sum
//         i++;      // increment i
//     }

//     cout << "Sum of first " << n << " numbers is: " << sum << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int i=0;
//     int n = 10;
//     int sum=0;
//     while(i<=n){
//         sum+=i;
//         i++;
//     }
//     cout<<"sum = "<<sum<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int i,n,sum=0;
//     cout<<"enter the value of n : ";
//     cin>>n;
//     for(i=1; i<=n; i+=2){
//         sum+=i;
//     }
//     cout<<"sum = "<<sum<<endl;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     int oddsum = 0;

//     for(int i=1; i<=n; i++){
//         if(i%2!=0){
//             oddsum += i;
//         }
//     }

//     cout<<"oddsum = "<< oddsum<<endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int i=0,n=5,oddsum=0;
//     while(i<=n){
//         if(i%2!=0){
//             oddsum+=i;
         
//             cout<<" oddsum = "<<oddsum<<endl;
//         }
//         i++;
//     }
//    cout<<" final oddsum = "<<oddsum<<endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int i = 0, n = 5, oddsum = 0;

//     while (i <= n) {
//         if (i % 2 != 0) { // check if i is odd
//             oddsum += i;
//             // cout << "oddsum = " << oddsum << endl;
//         }
//         i++; // increment i to avoid infinite loop
//     }

//     cout << "Final oddsum = " << oddsum << endl;

//     return 0;
// }




// sum of even number 


// #include <iostream>
// using namespace std;
// int main(){
//     int i=1,n=5,even_sum=0;
//     for(i; i<=n; i++){
//         if(i%2==0){
//             cout<<i<<" ";
//             even_sum+=i;
//         }
//     }
//     cout<<"even_sum: "<<even_sum<<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int i=1,n,even_sum=0;
//     cout<<"enter the value of n: ";
//     cin>>n;
//     for(i; i<=n; i++){
//         if(i%2==0){
//             cout<<i<<endl;
//             even_sum+=i;
//         }
//     }
//     cout<<"even_sum: "<<even_sum<<endl;
   
   

//     return 0;
// }



//  Is number is prime or not

// #include <iostream>
// using namespace std;
// int main(){
//     int i,n;
//     cout<<"enter the value of n:";
//     cin>>n;
//     for(i=2;i<=(n-1); i++){
//         if(n%2==0){         // Incorrect condition in the if statement: You are only checking if n is divisible by 2 (if(n % 2 == 0)), which does not correctly check for prime numbers.
//                             //  To determine if a number is prime, you need to check if it is divisible by any number from 2 to n-1 (or, more efficiently, up to sqrt(n)).
//             cout<<"not prime";
//         }
//         else{
//             cout<<"prime" ;
//         }
//     }


//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int n = 12;
//     bool isprime = true;

//     for(int i=2; i<=(n-2); i++){
//         if(n%i==0){
//             isprime = false;
//             break;
//         }
//     }
//     if(isprime==true){
//         cout<<"prime no\n";
//     }
//     else{
//         cout<<"non prime\n";
//     }
//     return 0;

// }

// correct code for finding prime number


// #include <iostream>
// using namespace std;
// int main(){
//     int n = 7;
//     bool isprime = true;

//     for(int i=2; i*i<=n; i++){
//         if(n%i==0){
//             isprime = false;
//             break;
//         }
//     }
//     if(isprime==true){
//         cout<<"prime no\n";
//     }
//     else{
//         cout<<"non prime\n";
//     }
//     return 0;

// }


// #include <iostream>
// using namespace std;
// int main(){
//     // for(int i=1; i<=5; i++){ // for line code
//     //     cout<<"*****"<<endl;
//     // }
//     // int n=10;
//     // for(int i=1; i<=n; i++){ // code for number of * present in line
//     //     cout<<"*";
//     // }

//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int n=10;
//     for(int i=1;i<=n; i++){
//         int m=10;
//         for(int j=1; j<=m; j++){
//             cout<<"*";
//         }
//         cout<< endl;
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//    int i,n,sum=0;
//    cout<<"enter the value of n: ";
//    cin>>n;
//    for(i=1; i<=n; i++){
//     if(i%3==0){
//         sum+=i;
//     }

// }
//    cout<<"sum = "<<sum<<endl;
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main(){
//     int i=1,n,sum=0;
//     cout<<"enter the value of n:";
//     cin>>n;
//     while(i<=n){
//         if(i%3==0){
//         sum+=i;
//         }
//         i++;
//     }
// cout<<"sum = "<<sum;

//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n,fact=1;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(int i=1;i<=n; i++){
//         fact*=i;
//     }
//     cout<<"factorial : "<<fact<<endl;
//     return 0;
// }



























