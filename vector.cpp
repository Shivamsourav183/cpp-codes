// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     vector<int>vec = {1, 2, 3};
//     // for(int i : vec)
//     // cout<< i<< endl;

//     cout<<vec[0]<<endl;
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     vector<int>vec(5,0); 
//     cout<<vec[0]<<endl;
//     return 0;   
// }


////for each loop

// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     vector<int>vec(5,0); 
//     for(int i : vec){
//         cout<< i <<" "<<endl;
//     }
//     return 0;
// }



// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     vector<char> vec = {'a','b','c','d','e'};
//     for(char value : vec){
//     cout<< value <<" ";
//     }
//     return 0;
// }



// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     vector<int>vec;

//     cout<<"initial size :"<<vec.size()<<endl;
//     vec.push_back(5);
//     vec.push_back(45);
//     vec.push_back(25);
//     vec.push_back(67);
//     cout<<"after size: "<<vec.size()<<endl;

//     vec.pop_back();

// cout<<"array after pop: "<<endl;
// for(int i : vec){   // foreach loop
// cout<< i <<" "<<endl;
// }
// cout<<"vec size after pop: "<<vec.size()<<endl;

//     return 0;
// }




// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {

//     vector<int>vec;

//     cout<<"size :"<<vec.size()<<endl;
//     vec.push_back(5);
//     vec.push_back(45);
//     vec.push_back(25);
//     vec.push_back(67);
//     cout<<"after size : "<<vec.size()<<endl;

//   cout<<"front value : "<<vec.front()<<endl;
//   cout<<"last value : "<<vec.back()<<endl;


//     return 0;
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>vec = {1,4,5,6,45,43};

//     cout<<vec.at(2)<<endl; //printing value at index 2

// // Print all elements
//     for(int i : vec){   
//       cout<<i<< " ";  
//     }
    
//     return 0;
// }


// WAP for linear search
// WAP for revarse a number using function



// WAP for linear search
// #include<iostream>
// #include<vector>
// using namespace std;

// int linearSearch(vector<int>& arr,int target){
//   for(int i=0;i<arr.size();i++){
//     if(arr[i] == target){
//     return i;
//     }
//   }
//   return -1;
 
// }
//   int main(){
//     vector<int>vec = {1,2,3,4,5,6};
//     int target = 4;
//     cout<<linearSearch(vec,target)<<endl;
//     return 0;
  
// }


// WAP for revarse a number using function

#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int>& arr){
  int start = 0, end = arr.size() - 1;
  while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
}
int main(){
  vector<int>arr = {1,2,3};
 
  reverseArray(arr);  //arr.size() automatically adjusts if the vector size changes (e.g., elements are added or removed)
      for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//   vector<int> vec = {1,2,3,4,5};
//   int target = 3;
//   for(int i = 0;i<vec.size(); i++){
//     if(vec[i]==target){
//       cout<<"element at index: "<<i<<endl;
//       return 0;
//     }

//   }
//   cout << "Element not found!" << endl;
//   return -1;
// }



// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//   vector<int>vec = {1,2,3};
//   int start = 0 ,end = vec.size()-1;
 
//     while(start<end){
//       swap(vec[start],vec[end]);
//       start++;
//       end--;
    
//   }
//   for(int i = 0; i < vec.size(); i++)
//     cout<<vec[i]<<" ";
//     return 0; 
// }