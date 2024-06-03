// #include <bits/stdc++.h>
// using namespace std;

// void printFibonacci(int n) {
//     int t1 = 0, t2 = 1, nextTerm;

//     cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";

//     for (int i = 1; i <= n-2; ++i) {
//         nextTerm = t1 + t2;
//         cout << nextTerm << ", ";
//         t1 = t2;
//         t2 = nextTerm;
//     }
// }

// int main() {
//     int n;

//     cout << "Enter the number of terms: ";
//     cin >> n;

//     if(n <= 0) {
//         cout << "Please enter a positive integer." << endl;
//     } else {
//         printFibonacci(n);
//     }

//     return 0;
// }


// CODE WRITTEN BY ME

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// int main(){
// 	ll n;
// 	cout<<"Enter a number: ";
// 	cin>>n;
// 	ll a = 0,b = 1,c;

// 	cout<<a<<" "<<b<<" ";

// 	for (ll i = 1; i <= n-2; i++)
// 	{
// 		c = a + b;
// 		cout<<c<<" ";
// 		a = b;
// 		b = c;
// 	}
	
// }


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll n; cin>>n;
	ll a = 0, b = 1, c;
	ll m = 1000000007;
	// cout<<a<<" "<<b<<" ";
	for (ll i = 1; i <= n-1; i++)
	{
		c = a + b;
		// cout<<c<<" ";
		a = b;
		b = c % m;
	}
	cout<<b;
	
}