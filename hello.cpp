// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Hello, World!";
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int M;
    string S;
    
    cin >> M;
    cin >> S;
    
    int n = S.length();
    long long ways = 1;

    for (int i = 0; i < n / 2; i++) {
        char left = S[i];
        char right = S[n - 1 - i];

        if (left == '?' && right == '?') {
            ways = (ways * 26) % M;  // Both positions can be any letter
        } 
        else if (left == '?' || right == '?') {
            ways = (ways * 1) % M;  // Only one position is '?', it must match the other
        } 
        else if (left != right) {
            ways = 0;  // Not a palindrome
            break;
        }
    }

    cout << ways << endl;
    return 0;
}