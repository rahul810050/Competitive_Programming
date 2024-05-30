// CALCULATING FACTORIAL

// #include<bits/stdc++.h>
// using namespace std;

// int f(int n){
// 	cout<<"I am calculating F("<<n<<")"<<endl;
// 	if(n==0) return 1;

// 	int F = n * f(n-1);
// 	cout<<"Done ! F("<<n<<")"<<endl;
// 	return F;
// }

// int main(){
// 	int n;
// 	cout<<"Enter any number: ";
// 	cin>>n;
// 	cout<<f(n)<<endl;
// }

// FIBONACCI SEQUENCE using ITERATIVE

// #include<bits/stdc++.h>
// using namespace std;

// int Fib(int n){
// 	if(n <= 1) return n;

// 	int f1,f2,f;
// 	f1=0;f2=1;
// 	for (int i = 2; i <= n; i++)
// 	{
// 		f = f1+f2;
// 		f1=f2;
// 		f2=f;
// 	}
// 	return f;
	
// }

// int main(){
// 	int n;
// 	cout<<"Enter a number: ";
// 	cin>>n;
// 	cout<<Fib(n);
// }

// FIBONACCI SEQUENCE using RECURSIVE

// #include<bits/stdc++.h>
// using namespace std;

// long long int Fib(int n){
// 	if(n <= 1) return n;

// 	return Fib(n-1)+Fib(n-2);
	
// }

// int main(){
// 	int n;
// 	cout<<"Enter a number: ";
// 	cin>>n;
// 	cout<<Fib(n);
// }


//  RECURSION WITH MEMORIZATION 

// #include<bits/stdc++.h>
// using namespace std;
// int f[51];
// long long int Fib(int n){
// 	if(n <= 1) return n;

// 	if(f[n] != -1) return f[n];
// 	f[n] = Fib(n-1) + Fib(n-2);
// 	return f[n];
	
// }
// int main(){
// 	for (int i = 0; i < 51; i++)
// 	{
// 		f[i] = -1;
// 	}
	
// 	int n;
// 	cout<<"Enter a number: ";
// 	cin>>n;
// 	cout<<Fib(n);
// }

#include<bits/stdc++.h>
using namespace std;

int sum(int n, int a[]){
	if(n<0) return 0;
	return sum(n-1,a) + a[n];
}

int main(){
	int n;cin>>n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	cout<<sum(n-1,a)<<endl;
}