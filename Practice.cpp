// #include<bits/stdc++.h>
// using namespace std;
// int main(){
    
    
//        string s;
//        cin>>s;
//        string s_rev;
//        for (int i = s.size() -1; i>=0; --i)
//        {
//        s_rev = s_rev + s[i];
//        }
       
//     //    cout<< s_rev;
//        if(s == s_rev){
//         cout<< "YES It is a palindromic word";
//        }
//        else
//        {
//         cout<<"NO";
//        }
    
    
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int digit_sum =0;
//    while (n>0)
//    {
//     int last_digit = n % 10;
//     digit_sum = digit_sum + last_digit;
//     n = n/ 10;
//    }
//    cout<< digit_sum;
    
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>> s;
//     int long last_digit =(int) s[s.size() -1]-'0';
//     cout<< last_digit;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//        for (int i = 1; i <=n; ++i)
//        {
//         for (int j = 1; j <=i; ++j)
//         {
//            cout<<"*"<<endl;

//         }
//         cout<< endl;
//        }
       
//     }
    
// }
// #include<bits/stdc++.h>
//     using namespace std;
//     int main(){
//         int t;
//        cin>>t;
//        while(t--)
//        {
//         int n;
//         cin>>n;
//         for(int i = 1; i <= n; i++)
//         {
//             for(int j = 1; j <= i; j++)
//             {
//                 cout <<"*";
//             }
//             cout<<"\n";
//         }
//        }
//     return 0;
//     }
   //  #include<bits/stdc++.h>
   //  using namespace std;
   //  int main(){
   //      int n;
   //      cin>>n;
   //      int a[n];
   //      for (int i = 0; i < n; ++i)
   //      {
   //         cin>>a[i];
   //      }
   //      int sum = 0;
   //      for (int i = 0; i <n; ++i)
   //      {
   //         sum = sum + a[i];
   //      }
   //      cout<< sum;
        
   //  }
//    #include <iostream>
// using namespace std;

// int main() {
// 	int T;
// 	cin>>T;
// 	while(T--){
// 	    int N, X, D;
// 	  cin>>N>>X;
	  
// 	  D= N/(X*5);
// 	    cout<<D<<endl;
// 	}
// 	return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
// int T;
// cin>>T;
// while(T--){
//     int N;
//     cin>>N;
//     int choice ;
//     choice = N*(N-1);
//     cout<<choice<<endl;
// }
// 	return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
// 	int T;
// 	cin>>T;
// 	while(T--){
// 	    int N,p;
// 	    int x = N-p;
// 	    cin>>N>>p;
	    
// 	    if(x==0){
// 	        cout<<"Alice";
// 	    }
// 	    else{
// 	        cout<<"Bob";
// 	    }
// 	}
// 	return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    int sum_digit = 0;
//    while (n>0)
//    {
//       int last_digit = n % 10;
//       sum_digit=  sum_digit + last_digit;
//       n = n/10;
//    }
//    cout<<sum_digit<<endl;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    string str;
//    cin>>str;
//    for (int i = 0; i < str.size(); i++)
//    {
//      cout<<str[i]<<endl;
//    }
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    string str;
//    cin>>str;
//    string str_rev;
//    for (int i = str.size() -1;i >=0 ; --i)
//    {
//      str_rev.push_back(str[i]);
//    }
//    cout<<str_rev;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int t;
//    cin>>t;
//    while(t--){
//       int a;
//       cin>>a;
//       int sum_digit = 0;
//       while(a>0)
//       {
//          int last_digit = a % 10;
//          sum_digit = sum_digit + last_digit;
//          a = a/10;
//       }
//       cout<<sum_digit<<endl;
//    }
// }
//******2D ARRAY******
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int x,y;
//    cin>>x>>y;
//    int a[x][y];
//    for (int i = 0; i < x; i++)
//    {
//      for (int j = 0; j < y; j++)
//      {
//       cin>>a[i][j];
//      }
   
//    }
//     for (int i = 0; i < x; i++)
//    {
//      for (int j = 0; j < y; j++)
//      {
//       cout<<a[i][j]<<" ";
//      }
//      cout<<endl;
//    }
   
// }
//********3D ARRAY********
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int x,y,z;
//    cin>>x>>y>>z;
//    int a[x][y][z];
//    for (int i = 0; i < x; i++)
//    {
//       for (int j = 0; j < y; j++)
//       {
//         for (int k = 0; k < z; k++)
//         {
//          cin>>a[i][j][k];
//         }
        
//       }
      
//    }
//    for (int i = 0; i < x; i++)
//    {
//       for (int j = 0; j < y; j++)
//       {
//         for (int k = 0; k < z; k++)
//         {
//          cout<<a[i][j][k]<<" ";
//         }
        
//       }
//       cout<<endl;
//    }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int x,y,z;
//   cin>>x>>y>>z;
//   int a[x][y];
//   for (int i = 0; i < x; i++)
//   {
//     for (int j = 0; j <y; j++)
//     {
//       cin>>a[i][j];
//     }
    
//   }
//    for (int i = 0; i < x; i++)
//   {
//     for (int j = 0; j <y; j++)
//     {
//       cout<<a[i][j]<<" ";
//     }
//     cout<<endl;
//   }
  
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int x;
//    cin>>x;
//    int a[x];
//    for (int i = 0; i < x; i++)
//    {
//       cin>>a[i];
//    }
//    int sum =0;
//    for (int j = 0; j < x; j++)
//    {
//       sum = sum + a[j];
//    }
//    cout<<sum;
   
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
   int x;
   cin>>x;
   for (int i = 1; i <=x; i++)
   {
      for (int j = 1; j <=i; j++)
      {
        cout<<"*";
      }
      cout<<endl;
   }
   
}