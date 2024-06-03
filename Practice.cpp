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
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int x;
//    cin>>x;
//    for (int i = 1; i <=x; i++)
//    {
//       for (int j = 1; j <=i; j++)
//       {
//         cout<<"*";
//       }
//       cout<<endl;
//    }

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int x,n;
//    int a;
//    cin>>n>>x;
//    a = 2*n - x;
//    if (a=2 && x =0){
//       cout<< 0<<endl;
//    }
//    if (a=1 && x =1){
//       cout<< 2<<endl;
//    }
//    if (a=0 && x =2){
//       cout<< 0<<endl;
//    }
//    if (a=4 && x =4){
//       cout<< 4<<endl;
//    }
//    if (a=2 && x =6){
//       cout<< 20<<endl;
//    }

// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int x, y ;
//    cin>>x>>y;
//    int a[x][y];
//    for (int i = 0; i < x; i++)
//    {
//       for (int j = 0; j < y; j++)
//       {
//          cin>>a[i][j];
//       }

//    }
//       for (int i = 0; i < x; i++)
//    {
//       for (int j = 0; j < y; j++)
//       {
//          cout<<a[i][j]<<" ";
//       }
//       cout<<endl;
//    }

// // }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   string str;
//   cin>>str;
//   string str_rev;
//   for (int i = str.size() - 1; i >= 0; --i)
//   {
//      str_rev = str_rev + str[i];
//   }
//   cout<<str_rev<<endl;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    // int x;
//    // cin>>x;
//    int sum_digit,n;
//    cin>>n;
//    sum_digit = 0;
//    while (n>0)
//    {
//       int last_digit = n % 10;
//       sum_digit = sum_digit + last_digit;
//       n = n/10;
//    }
//    cout<<sum_digit<<endl;
// // }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t ;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         for (int i = 1; i <=n; ++i)
//         {
//            for (int j = 1; j <= i; ++j)
//            {
//             cout<<"*";
//            }
//            cout<<endl;
//         }

//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int x;
//     cin>>x;
//     while (x--)
//     {
//         int a;
//         cin>>a;
//        for (int i = 0; i <= a; i++)
//        {
//         cout<<i<<endl;
//        }

//     }

// }

//   #include<bits/stdc++.h>
//   using namespace std;
//   int main(){
//    int n;
//    cin>>n;
//    for (int i = 1; i <= n; ++i)
//    {
//       for (int j = 1; i <= i; ++j)
//       {
//          cout<<"*";
//       }
//       cout<<endl;
//    }

//   }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int n,sum_digit;
//    cin>>n;
//    sum_digit = 0;
//    while (n>0)
//    {
//       int last_digit= n %10;
//       sum_digit = sum_digit + last_digit;
//       n = n/10;
//    }
//    cout<<sum_digit;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    string str;
//    cin>>str;
//    string str_rev;
//    for (int i = str.size() - 1; i >=0; --i)
//    {
//       // str_rev = str_rev +str[i];
//       str_rev.push_back(str[i]);
//    }
//    cout<<str_rev<<endl;
// }
// #include<bits/stdc++.h>
// using namespace std;
// void printhello(){
//    cout<<"Hello World";
// }
// int sum(int a, int b){
//    int result = a + b;
//    return result;

// }
// int main(){
//    printhello();
//    cout<<endl;
//    cout<<sum(5,6);
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    int a[n];
//    for (int i = 0; i < n; i++)
//    {
//       cin>>a[i];
//    }
//    int sumoftropies = 0;
//    for (int i = 0; i < n; i++)
//    {
//       sumoftropies = sumoftropies + a[i];
//    }
//    cout<<sumoftropies<<endl;
// }

// FUNCTIONS
// #include<bits/stdc++.h>
// using namespace std;
// int sum_digit(int n){
//    int sum_digit = 0;
//    while (n>0)
//    {
//      sum_digit = sum_digit + n% 10;
//      n = n/10;
//    }
//    return sum_digit;
// }
// int main(){
//    int a,b;
//    cin>>a>>b;
//    cout<<sum_digit(a) + sum_digit(b);
// }

// #include<bits/stdc++.h>
// using namespace std;
// int increment(int n){
//    n++;
//    return n;
// }
// int main(){
//    int a;
//    cin>>a;
//    cout<<a<<endl;
//    a = increment(a);
//    cout<<a<<endl;
// }

// FUNCTION WITH REFERENCE
// #include<bits/stdc++.h>
// using namespace std;
// WITH REFERENCE-- IT PASSES THE VALUE BY REFERENCE MEANS IF THERE IS A CHANGE IN THE FUNCTION THEN THAT CHANGE REFLECTS OUT OF THE FUNCTION ALSO AND WITHOUT REFERENCE-- IT PASSES THE COPY OF THE CURRENT VARIABLE(PASS BY VALUE) THERE IS AN INCREMENT BUT THAT INCREMENT DOES NOT REFLECT IN THE MAIN FUNCTION
// void increment(int &n, int m){
//    n++;
//    m++;
// }
// int main(){
//    int a,b;
//    cin>>a>>b;
//    cout<<a<<" "<<b<<endl;
//    increment(a,b);
//    cout<<a<<" "<<b<<endl;
// }
// SWAPPING OF TWO NUMBERS
// #include<bits/stdc++.h>
// using namespace std;
// void swap(int &n,int &m){
//    int temp = n;
//    n= m;
//    m = temp;
// }

// int main(){
//    int a,b;
//    cin>>a>>b;
//    swap(a,b);
//    cout<<a<<" "<<b<<endl;
// }
// FUNCTION USING STRING
// #include<bits/stdc++.h>
// using namespace std;
// void str(string &s){
//    s= " ";
// }
// int main(){
//    string stg = "Rahul";
//    cout<<stg<<endl;
//    str(stg);
//    cout<<stg<<endl;
// }
// FUNCTION USING ARRAYS
// #include<bits/stdc++.h>
// using namespace std;
// void  func(int a[]){
//    a[2] = 10;
// }
// int main(){
//    int a[10];
//    a[2] = 4;
//    cout<<a[2]<<endl;
//    func(a);
//    cout<<a[2]<<endl;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int t;
//    cin>>t;
//    while (t--)
//    {
//       int x,y;
//       cin>>x>>y;
//       if(x+y>6){
//          cout<<"yes"<<endl;
//       }
//       else{
//          cout<<"no"<<endl;
//       }
//    }

// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int t;
//    cin>>t;
//    while (t--)
//    {
//       int x,y;
//       cin>>x>>y;
//       int a[x][y];
//       for (int i = 0; i <x; i++)
//       {
//          for (int j = 0; j < y; j++)
//          {
//            cin>>a[i][j];
//          }

//       }
//       for (int i = 0; i <x; i++)
//       {
//          for (int j = 0; j < y; j++)
//          {
//            cout<<a[i][j]<<" ";
//          }
//          cout<<endl;
//       }

//    }

// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    cout<<n*4<<endl;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int t;
//    cin>>t;
//    while (t--)
//    {
//      int A[3],B[3];
//      for (int i = 0; i < 3; i++)
//      {
//       cin>>A[i];
//      }
//      for (int j = 0; j < 3; j++)
//      {
//       cin>>B[j];
//      }
//      int sum_digitA = 0;
//    for (int i = 0; i < 3; i++)
//    {
//       if(A[0]>A[1] && A[0]>A[2]){

//       }
//    }

//    }

// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//    int t;
//    cin >> t;
//    while (t--)
//    {
//       int a1, a2, a3, b1, b2, b3;
//       cin>>a1>>a2>>a3>>b1>>b2>>b3;
//       int a = min(a1,a2);
//       int b = min(a,a3);
//       int c = min(b1,b2);
//       int d = min(c,b3);
//       int x = (a1+a2+a3)-b;
//       int y = (b1+b2+b3)-d;
//       if(x>y){
//          cout<<"Alice"<<endl;
//       }
//       else if(y>x){
//          cout<<"Bob"<<endl;
//       }
//       else{
//          cout<<"Tie"<<endl;
//       }
//    }
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int t;
//    cin>>t;
//    while (t--)
//    {
//       int n,x,y;
//       cin>>n>>x>>y;
//       if(n>x){
//          cout<<"no"<<endl;
//       }
//       else{
//          x = x+y/3;
//          if(n*2<=x){
//             cout<<"yes"<<endl;
//          }
//          else{
//             cout<<"no"<<endl;
//          }
//       }
//    }
   
// }

