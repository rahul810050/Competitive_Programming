// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// int reverseDigits(int num) 
// { 
//     int rev_num = 0; 
//     while (num > 0) { 
//         rev_num = rev_num * 10 + num % 10; 
//         num = num / 10; 
//     } 
//     return rev_num; 
// }

// int main(){
// 	ll t;cin>>t;
// 	while (t--)
// 	{
// 		ll a,b; cin>>a>>b;
// 		ll rev_a,rev_b;
// 		if(a>b){
// 			cout<<"Yes"<<endl;
// 		}
// 		else{
// 			rev_a = reverseDigits(a);
// 			if(rev_a>b) cout<<"Yes"<<endl;
// 			else{
// 				rev_b = reverseDigits(b);
// 				if(rev_a>rev_b) cout<<"Yes"<<endl;
// 				else cout<<"No"<<endl;
// 			}
// 		}
// 	}
	
// }


// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;

//         string s;
//         cin >> s;

//         if (n == 1)
//         {
//             cout << "0" << endl;
//             continue;
//         }

//         int counter = 0;
//         char pre = s[0];
//         for (int i = 1; i < s.length(); i++)
//         {
//             if (pre == s[i])
//             {
//                 counter++;
//                 s[i] = (s[i] == '0') ? '0' : '1';
//             }
//             pre = s[i];
//         }

//         cout << counter << endl;
//     }

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;

// bool isPrime(int n)
// {
    
 
//     for (int i = 2; i <= sqrt(n); i++)
//         { 
//             if (n % i == 0)
//             return false;
//         }
 
//     return true;
// }

// int main(){
//     ll t;cin>>t;
//     while (t--)
//     {
//         ll m,n;cin>>m>>n;
//         for (ll i = m; i <= n; i++)
//         {
//             if(i==1) continue;
//             if(isPrime(i)) cout<<i<<endl;
//         }
//         cout<<endl;
        
//     }
    
// }

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main(){
//     ll t;cin>>t;
//     while (t--)
//     {
//         ll n;cin>>n;
//         ll a[n]; ll x;
//         for (ll i = 0; i < n; i++)
//         {
//             cin>>a[i];
//         }
//         ll k;cin>>k;
        
//         x = a[k-1];

//         sort(a,a+n);

//         for (ll i = 0; i < n; i++)
//         {
//             if(a[i]==x)
//             {
//                 cout<<i+1<<endl;
//                 break;
//             }
//         }
        
//     }
    
// }

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main(){
//     ll t; cin>>t;
//     while (t--)
//     {
//         ll n,x,y; cin>>n>>x>>y;
//         vector<int> v;
//         for (ll i = 0; i < n; i++)
//         {
//             ll x;cin>>x;
//             v.push_back(x);
//         }
//         ll cost = 0;

//         for (ll i = 0; i < n; i++)
//         {
//             cost += min((v[i]*x),y);
//         }
        
//         cout<<cost<<endl;
//     }
    
// }



#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t; cin>>t;
    while (t--)
    {
        ll x, y;
        cin>>x>>y;
        // ll money = 0;
        for(ll i = 0; i< y; i++){
        if(x>1000){
            
                x = (x*2);
            
            
        }
        else{
            x += 1000;
            // y--;
            // money = x;
        }
    }
        cout<<x<<endl;
    }
    
}