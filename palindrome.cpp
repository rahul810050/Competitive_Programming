#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    string str_rev;
    for (int i = str.size() -1; i >=0; --i)
    {
        str_rev =str_rev + str[i];//WE CAN USE BOTH
                    OR
        str_rev.push_back(str[i]); //THIS WILL NOT MAKE MISTAKE
    }
    
}