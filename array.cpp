// #include<iostream>
// using namespace std;
// int main(){
//     int marks[5] = {99,100,90,88,89};
//     //marks[0] = 101;
  
//     cout<<marks[0] <<endl;
//     cout<<marks[1] <<endl;
//     cout<<marks[2] <<endl;
//     cout<<marks[3] <<endl;
//     cout<<marks[4] <<endl;

//     //0 to size-1
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int marks[5] = {99,100,90,88,89};
//     int size = 5;

//     //loops : 0 to size-1
//     for(int i=0; i<size; i++)
//     cout<<marks[i]<<endl;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int size = 5;
//     int marks[size];

//     for(int i=0;i<size; i++){
//         cout<<"enter the marks:";
//         cin>>marks[i];
//     }
    

//     //loops : 0 to size-1
//     for(int i=0; i<size; i++)
//     cout<<marks[i]<<endl;
//     return 0;
// }



// // find smallest and larger number in array

//   #include<iostream>
//   #include<climits>   // Include this for INT_MAX

//   using namespace std;
//   int main(){
//     int nums[] = {5, -15, 22, 1, -15, 24};
//     int size = 6;
//     int smallest = INT_MAX;

//     for(int i=0; i<size; i++){
//         if(nums[i] < smallest){
//             smallest = nums[i];
//         }
//     }
//     cout<<"smallest = "<<smallest<<endl;
//     return 0;
//   }



// #include<iostream>
// #include<climits>   // Include this for INT_MAX

// using namespace std;
// int main(){
//     int nums[] = {5, -15, 22, 1, -15, 24};
//     int size = 6;
//     int smallest = INT_MAX;

//     for(int i=0; i<size; i++){
//     smallest = min(nums[i], smallest);
//     }
//     cout<<"smallest = "<<smallest<<endl;
//     return 0;
// }



//larger number

// #include<iostream>
// #include<climits>   // Include this for INT_MAX

// using namespace std;
// int main(){
//     int nums[] = {5, -15, 22, 1, -15, 24};
//     int size = 6;
//     int largest = INT_MIN;

//     for(int i=0; i<size; i++){
//     largest = max(nums[i], largest);
//     }
//     cout<<"largest_number:  = "<<largest<<endl;
//     return 0;
// }


// #include<iostream>
// #include<climits>   // Include this for INT_MAX

// using namespace std;
// int main(){
//     int nums[] = {5, -15, 22, 1, -15, 24};
//     int size = 6;
//     int largest = INT_MIN;

//     for(int i=0; i<size; i++){
//         if(nums[i]>largest){
//             largest = nums[i];
//         }
    
//     }
//     cout<<"largest = "<<largest<<endl;
//     return 0;
// }

// homework

// find the index value where the smallest and largest value stored


// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int nums[]={34,345,353,-985,234556};
//     int n = sizeof(nums) / sizeof(nums[0]); // Total size of array / size of one element

    
//     int largest = INT_MIN;
//     int index = -1;

//     for(int i=0; i<n; i++){
//         if(nums[i]>largest){
//           largest=nums[i];  
//         }
//         index=i;
//     }
//     cout<<"largest number: "<<largest<<endl;
//     cout<<"index number: "<<index;

//     return 0;
// }




// // //Linear search

// // //finding the index value of target number

// #include <iostream>
// using namespace std;

// int linearSearch(int arr[], int size, int target) {
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == target) {
//             return i;  // Return the index of the target if found
//         }
//     }
//     return -1; // Return -1 if the target is not found
// }

// int main() {
//     int arr[] = {4, 2, 7, 8, 1, 2, 5}; // Example array
//     int size = 7;
//     int target = 7765; // Element for search 

//     cout<<linearSearch(arr, size, target)<<endl;

//     return 0;
// }





// // Reverse an array


// #include <iostream>
// using namespace std;

// void reverseArray(int arr[], int size) {
//     int start = 0, end = size - 1;

//     while (start < end) {
//         // Swap elements at start and end
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;

//         // Move towards the middle
//         start++;
//         end--;
//     }
// }

// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     cout << "Original array: ";
//     printArray(arr, size);

//     reverseArray(arr, size);

//     cout << "Reversed array: ";
//     printArray(arr, size);

//     return 0;
// }



// #include <iostream>
// using namespace std;

// void reverseArray(int arr[], int size) {
//     int start = 0, end = size - 1;
//     while(start < end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }
// int main(){
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = 5;                        //sizeof(arr) / sizeof(arr[0])
//     reverseArray(arr,size);
//     cout<<"after swapping: ";

//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }    



// // Home_Work
//1. to calculate sum and product of all numbers in an array
//2. to swap the max and min number of an array
//3. to print all the unique values in an array
//4. to print intersection of 2 array


// // C++ Program to demonstrate working of a function
// #include <iostream>
// using namespace std;

// // Following function that takes two parameters 'x' and 'y'
// // as input and returns max of two input numbers
// int max(int x, int y)
// {
//     if (x > y)
//         return x;
//     else
//         return y;
// }

// // main function that doesn't receive any parameter and
// // returns integer
// int main()
// {
//     int a = 10, b = 20;

//     // Calling above function to find max of 'a' and 'b'
//     int m = max(a, b);

//     cout << "m is " << m;
//     return 0;
// }









// ////////home work

// // find the index value where the smallest and largest value stored

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int nums[]={98,-45,34,-3,78};
//     int size = 5;

//     int smallest=INT_MAX;
//     int index = -1;           // To store the index of the smallest element

//     for(int i=0;i<size;i++){
//         if(nums[i]<smallest){
//           smallest=nums[i];  
//           index = i;          // Update index of the smallest element
//         }
//     }
//     cout<<smallest<<endl;
//     cout<<index;
//     return 0;
// }




//   #include<iostream>
//   #include<climits>   // Include this for INT_MAX

//   using namespace std;
//   int main(){
//     int nums[] = {5, -15, 22, 1, -15, 24};
//     int size = 6;
//     int smallest = INT_MAX;

//     for(int i=0; i<size; i++){
//         if(nums[i] < smallest){
//             smallest = nums[i];
//         }
//     }
//     cout<<"smallest = "<<smallest<<endl;
//     return 0;
//   }

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int nums[]={98,64,-3,34,53};
//     int size=5;

//     int smallest=INT_MAX;
//     int index = -1;

//     for(int i=0;i<size;i++){
//         smallest = min (nums[i],smallest);
//         index = i;
//     }
//     cout<<"smallest number : "<<smallest<<endl;
//     cout<<"index value: "<<index;
// return 0;
// }


// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int nums[]={34,345,353,-985,234556};
//     int n = sizeof(nums) / sizeof(nums[0]); // Total size of array / size of one element
    
//     int largest = INT_MIN;
//     for(int i=0; i<n; i++){
//         largest = max(nums[i],largest);
//     }
//     cout<<"largest number: "<<largest;
//     return 0;
// }


// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int nums[]={34,345,353,-985,234556};
//     int n = sizeof(nums) / sizeof(nums[0]); // Total size of array / size of one element

    
//     int largest = INT_MIN;
//     int index = -1;

//     for(int i=0; i<n; i++){
//         if(nums[i]>largest){
//           largest=nums[i];  
//         }
//         index=i;
//     }
//     cout<<"largest number: "<<largest<<endl;
//     cout<<"index number: "<<index;

//     return 0;
// }




//1. to calculate sum and product of all numbers in an array

// #include<iostream>
// using namespace std;
// int main(){
//     int nums[]={2,3,4,5,6,7};
//     int sum = 0;
//     int product = 1;
//     int n = sizeof(nums)/sizeof(nums[0]);

//     for(int i=0;i<n;i++){
//        sum = sum + nums[i];
//        product*=nums[i];
//     }
//     cout<<"sum of element: "<<sum<<endl;
//     cout<<"product of element: "<<product;
//     return 0;

// }


//2. to swap the max and min number of an array
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int nums[]={11,3,4,5,67,7,76};
//     int n = sizeof(nums)/sizeof(nums[0]);

//     int largest = INT_MIN;
//     int smallest = INT_MAX;

//     int largestIndex = -1;
//     int smallestIndex = -1;

//     for(int i=0;i<n;i++){
//         smallest = min(nums[i],smallest);
//         largest = max(nums[i],largest);
        
//     }
//     cout<<"largest no: "<<largest<<endl;
//     cout<<"smallest no: "<<smallest<<endl;
    
//     // Swap the largest and smallest elements
//     int temp = nums[largestIndex];
//     nums[largestIndex] = nums[smallestIndex];
//     nums[smallestIndex] = temp;

//     // Display the updated array after swapping
//     cout << "\nAfter Swap:" << endl;
//     cout << "Updated Array: ";
//     for (int i = 0; i < n; i++) {
//         cout << nums[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }




// #include <iostream>
// #include <climits>
// using namespace std;

// int main() {
//     int nums[] = {11, 3, 4, 5, 67, 7, 76};
//     int n = sizeof(nums) / sizeof(nums[0]);

//     int largest = INT_MIN;  // Initialize largest to the smallest possible value
//     int smallest = INT_MAX; // Initialize smallest to the largest possible value

//     int largestIndex = -1;
//     int smallestIndex = -1;

//     // Find largest and smallest numbers and their indices
//     for (int i = 0; i < n; i++) {
//         // Use max() and min() functions
//         if (nums[i] == max(nums[i], largest)) {
//             largest = nums[i];
//             largestIndex = i;
//         }

//         if (nums[i] == min(nums[i], smallest)) {
//             smallest = nums[i];
//             smallestIndex = i;
//         }
//     }

//     cout << "Largest number: " << largest << endl;
//     cout << "Smallest number: " << smallest << endl;

//     cout << "Largest index: " << largestIndex << endl;
//     cout << "Smallest index: " << smallestIndex << endl;

//     // Swap the largest and smallest elements
//     int temp = nums[largestIndex];
//     nums[largestIndex] = nums[smallestIndex];
//     nums[smallestIndex] = temp;

//     // Display the updated array after swapping
//     cout << "\nAfter Swap:" << endl;
//     cout << "Updated Array: ";
//     for (int i = 0; i < n; i++) {
//         cout << nums[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }




// // //4. to print intersection of 2 array

// #include<iostream>
// using namespace std;
// int main(){
//     int nums1[] = {1,1,2,4,5,6,4};
//     int nums2[] = {1,1,799,6,8};
// }



#include <iostream>
using namespace std;

int main() {
    int nums1[] = {1, 1, 2, 4, 5, 6, 4};
    int nums2[] = {1, 1, 799, 6, 8};

    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    int n2 = sizeof(nums2) / sizeof(nums2[0]);

    cout << "Intersection of arrays: ";

    // Mark elements that are already processed in nums1
    bool visited[n1] = {false}; // Keeps track of already used elements in nums1

    // Find the intersection
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < n1; j++) {
            // Check for equality and ensure it's not already used
            if (nums2[i] == nums1[j] && !visited[j]) {
                cout << nums2[i] << " "; // Print the intersection element
                visited[j] = true;      // Mark this element as used
                break;                  // Move to the next element in nums2
            }
        }
    }

    cout << endl;
    return 0;
}
