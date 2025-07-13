// #include<iostream>
// using namespace std;
// int sum(int n){
//     int s=(n*(n+1))/2;
//     return s;
// }

// int main(){
//     cout<<sum(10)<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int sumN(int n){

//     int sum=0;

//     for(int i=1; i<=n; i++){
//         sum+=i;
//     }
//     return sum;
    
// }
//     int main(){
//         cout<<sumN(5)<<endl;
//         return 0;
    
// }




// #include<iostream>
// using namespace std;

// int factorial(int n){
//     int fact = 1;

//     for(int i=1; i<=n; i++){
//         fact*=i;
//     }
//     return fact;
    
// }
// int  main(){
//    cout<<factorial(5)<<endl;
//    cout<<factorial(6)<<endl;
//     return 0;
// }


//  #include<iostream>
//  using namespace std;

//  int sum(int a, int b){
//     int sum = a+b;
//     return sum;
//  }

//  int main(){
//     cout<<sum(5,5)<<endl;
//     return 0;
//  }


 #include<iostream>
 using namespace std;
int min(int a, int b){
    if(a<b){
        cout<<a;
    } else
    cout<<b;
}

int main(){
    cout<<"min : "<<min(3,4)<<endl;
    return 0;
}