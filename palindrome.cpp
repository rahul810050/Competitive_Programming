// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string str;
//     cin>>str;
//     string str_rev;
//     for (int i = str.size() -1; i >=0; --i)
//     {
//         str_rev =str_rev + str[i];//WE CAN USE BOTH
//                     //OR
//         //str_rev.push_back(str[i]); //THIS WILL NOT MAKE MISTAKE
//     }
//     cout<<str_rev<<endl;
    
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string number;
//     cin>>number;
//     string rev;
//     for (int i = number.size() -1; i >=0; --i)
//     {
//         rev=rev + number[i];
//     }
//     if(rev==number){
//         cout<<"Yes!! it is palindrome.."<<endl;
//     }
//     else{
//         cout<<"It is not a palindromic.."<<endl;
//     }
    
// }



#include <iostream>
#include <string>

using namespace std;

bool isPalindromic(const string& str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

string getSubstr(const string& str, int left, int right) {
    string substr;
    if (left <= right) {
        substr = str.substr(left, right - left + 1);
    } else {
        substr = str.substr(left) + str.substr(0, right + 1);
    }
    return substr;
}

string winnerOfGame(const string& str) {
    int n = str.length();
    // Check if the entire string is a palindrome
    if (isPalindromic(str)) {
        return (n % 2 == 0) ? "Bob" : "Alice";
    }
    // Check if any substring is a palindrome
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            string substr = getSubstr(str, i, j);
            if (isPalindromic(substr)) {
                return ((j - i + 1) % 2 == 0) ? "Bob" : "Alice";
            }
        }
    }
    // No palindromic substring found, Alice loses
    return "Bob";
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;

        cout << winnerOfGame(S) << endl;
    }

    return 0;
}
