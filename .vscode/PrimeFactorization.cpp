// GFGS CODE
// #include <bits/stdc++.h>
// using namespace std;
// // #include <cmath>
 
// // A function to print all prime factors of a given number n 
// void primeFactors(int n) 
// { 
//     // Print the number of 2s that divide n 
//     while (n % 2 == 0) 
//     { 
//         cout << 2 << " "; 
//         n = n / 2; 
//     } 
 
//     // n must be odd at this point. So we can skip 
//     // one element (Note i = i + 2) 
//     for (int i = 3; i <= sqrt(n); i = i + 2) 
//     { 
// 			int ct = 0;
//         // While i divides n, print i and divide n 
//         while (n % i == 0) 
//         { 
//             // std::cout << i << " "; 
//             n = n / i; 
// 						ct++;
//         } 
// 				cout<<i<<" "<<ct<<endl;
//     } 
 
//     // This condition is to handle the case when n 
//     // is a prime number greater than 2 
//     if (n > 2) 
//         cout << n << " "<<1<<endl; 
// } 
 
// /* Driver program to test above function */
// int main() 
// { 
//     int n = 315; 
//     primeFactors(n); 
//     return 0; 
// }


// MY CODE

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if(n%i==0){
		int ct = 0;
		while (n%i==0)
		{
			n = n/i;
			ct++;
		}
			cout<<i<<" "<<ct<<endl;
			cout<<pow(i,ct)<<endl;
		}
	}
	if(n != 1) cout<<n<<" "<<1<<endl;
	
}