// // iterative method for binary search

// #include<iostream>
// #include<vector>
// using namespace std;

// int binarySearch(vector<int>arr, int tar){
//     int st = 0, end = arr.size()-1;
 
//     while(st<=end){
//         int mid = st + (end-st)/2;
//         if(tar>arr[mid]){
//             st = mid+1;
//         } else if(tar<arr[mid]){
//             end = mid - 1;
//         } else {
//             return mid;
//         }
//     }
//     return -1;

// }


// int main(){
//     vector<int> arr = {-1,0,3,4,5,9,12};
//     int tar = 12;
//     cout<<"Target at index no: "<<binarySearch(arr,tar)<<endl;
//     return 0;
// }



// // recursion method

// #include<iostream>
// #include<vector>
// using namespace std;

// int rebinarySearch(vector<int>arr, int tar, int st, int end){
//     if(st<=end){
//         int mid = st + (end-st)/2;

//         if(tar > arr[mid]){
//             return rebinarySearch(arr,tar,mid+1,end);
//         } else if(tar < arr[mid]){
//             return rebinarySearch(arr,tar,st,mid-1);
//         } else {
//             return mid;
//         }
//     }
//     return -1;

// }

// int main(){
//     vector<int>arr = {-1,0,3,5,9,12};
//     int tar = 0;
//      cout<<rebinarySearch(arr,tar,0,arr.size()-1)<<endl;
//      return 0;
// }
   


// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> arr = { 1,2,3,1,2,3,1,1,1,2};
//     // int n = sizeof(arr[])/sizeof(arr[0]);  ////sizeof() -> operators use in arry not in vector
//     int count1 = 0;

//     for(int i = 0 ;i<arr.size();i++){
//         if(arr[i]==1) {
//         count1 ++;
//         }
//     }
//     cout<<"no of element of 1: "<<count1<<endl;

// }


#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 1, 2, 3, 1, 1, 1, 2}; // Input vector
    //int n = arr.size(); // Get size of the vector
    int count1 = 0, count2 = 0, count3 = 0; // Counters for each element

    // Loop through the vector
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 1) {        // Check if element is 1
            count1++;
        } 
        else if (arr[i] == 2) {  // Check if element is 2
            count2++;
        } 
        else if (arr[i] == 3) {  // Check if element is 3
            count3++;
        }
    }

    // Display counts
    cout << "1 -> " << count1 << endl;
    cout << "2 -> " << count2 << endl;
    cout << "3 -> " << count3 << endl;

    return 0; // End of program
}
