// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     cin >> t;
//     while(t--) {
//         int n;
//         cin >> n;
        
//         string s;
//         cin >> s;

//         int leftmostBlack = numeric_limits<int>::max();
//         for (int j = 0; j < n; ++j) {
//             if (s[j] == 'B') {
//                 leftmostBlack = j;
//                 break;
//             }
//         }

//         int rightmostBlack = -1;
//         for (int j = n - 1; j >= 0; --j) {
//             if (s[j] == 'B') {
//                 rightmostBlack = j;
//                 break;
//             }
//         }

//         int min_segment_length = (rightmostBlack - leftmostBlack + 1);

//         cout << min_segment_length << endl;
//     }

// }

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    std::cin >> n; // Input the length of the trace array
    int a[n]; // Declare an array to store the trace
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i]; // Input the elements of the trace array
    }

    char s[n]; // Declare an array to store the constructed string
    for (int i = 0; i < n; ++i) {
        int count = 0; // Initialize a counter
        char c = 'a'; // Initialize the character to 'a'
        while (count < a[i]) {
            s[i] = c; // Assign the character to the string
            ++count; // Increment the counter
            ++c; // Move to the next character
        }
    }

    std::cout << "The constructed string is: ";
    for (int i = 0; i < n; ++i) {
        std::cout << s[i];
    }
    std::cout << std::endl;

    return 0;
}
