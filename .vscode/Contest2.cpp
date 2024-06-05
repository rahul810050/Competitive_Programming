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
//         ll a[n]; ll first;
//         for (ll i = 0; i < n; i++)
//         {
//             cin>>a[i];
//         }
//         ll k;cin>>k;
        
//         first = a[k-1];

//         sort(a,a+n);

//         for (ll i = 0; i < n; i++)
//         {
//             if(a[i]==first)
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
//         ll n,first,y; cin>>n>>first>>y;
//         vector<int> v;
//         for (ll i = 0; i < n; i++)
//         {
//             ll first;cin>>first;
//             v.push_back(first);
//         }
//         ll cost = 0;

//         for (ll i = 0; i < n; i++)
//         {
//             cost += min((v[i]*first),y);
//         }
        
//         cout<<cost<<endl;
//     }
    
// }



// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main(){
//     ll t; cin>>t;
//     while (t--)
//     {
//         ll first, y;
//         cin>>first>>y;
//         // ll money = 0;
//         for(ll i = 0; i< y; i++){
//         if(first>1000){
            
//                 first = (first*2);
            
            
//         }
//         else{
//             first += 1000;
//             // y--;
//             // money = first;
//         }
//     }
//         cout<<first<<endl;
//     }
    
// }

// **** DOUBT ****
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main(){
// 	ll t; cin>>t;
// 	while (t--)
// 	{
// 		ll n; cin>>n;
// 		vector<pair<int,int>> v;

// 		for (ll i = 0; i < n; i++)
// 		{
// 			int first,y; cin>>first>>y;
// 			v.push_back({first,y});
// 		}
//         sort(v.begin(), v.end());

// 		ll sum = 0;
//         ll prev_first = -1, prev_second = 0;
// 		for (ll i = 0; i < n; i++)
// 		{
// 			if(v[i].first > 8) continue;
// 			else{
// 				if((v[i].first == prev_first) && v[i].second > prev_second){
// 					int a = v[i].second - prev_second;
// 					sum += a;
// 					prev_first = v[i].first;
// 					prev_second = v[i].second;
// 				}
// 				else{
// 					sum += v[i].second;
//                     prev_first = v[i].first;
//                     prev_second = v[i].second;
// 				}
// 			}
// 		}

// 		cout<<sum<<endl;
		
// 	}
	
// }

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// const int N = 10e6+10;
// ll a[N];
// int main(){
//     ll t; cin>>t;
//     while (t--)
//     {
//         ll n; cin>>n;
//         // vector<int> v;
//         for (ll i = 0; i < n; i++)
//         {
//             // ll first; cin>>first;
//             // v.push_back(first);
//             cin>>a[i];
//         }

//         ll skip = 0;

//         for (ll i = 0; i < n; i++)
//         {
//             if(a[i] > a[i-1]){
//                 skip += a[i] - a[i-1] - 1;
// 								cout<<skip<<" ";
//             }
//             else if(a[i] < a[i-1]){
//                 skip += a[i-1] - a[i] -1;
// 								cout<<skip<<" ";
//             }
//             else continue;
//         }
        

        // for (ll i = 0; i < n; i++)
        // {
        //     if(v[i] > v[i-1]){
        //         ll first = v[i-1]+1;
        //         ll y = v[i] - first;
        //         skip += y;
        //     }
        //     else if(v[i] < v[i-1]){
        //         ll first = v[i]+1;
        //         ll y = v[i-1] - first;
        //         skip += y;
        //     }
        //     else{
        //         continue;
        //     }
        // }
        
        // cout<<skip<<endl;
//     }
    
// }


// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// int main() {
//     ll t;
//     cin >> t;
//     while (t--) {
//         ll n;
//         cin >> n;
//         vector<pair<int,int>> v;

//         for (ll i = 0; i < n; i++) {
//             int first, y;
//             cin >> first >> y;
//             v.push_back({first, y});
//         }
//         sort(v.begin(), v.end());

//         ll sum = 0;
//         ll prev_first = -1;
//         ll prev_second = 0; // Store the previmum second element encountered

//         for (ll i = 0; i < n; i++) {
//             if (v[i].first > 8) continue;
//             else {
//                 if (v[i].first == prev_first) {
//                     prev_second = prev(prev_second, v[i].second); // Update the previmum second element
//                 } else {
//                     sum += prev_second; // Add the previmum second element for the previous first element
//                     prev_first = v[i].first;
//                     prev_second = v[i].second; // Reset prev_second for the new first element
//                 }
//             }
//         }

//         sum += prev_second; // Add the previmum second element for the last first element
//         cout << sum << endl;
//     }
//     return 0;
// }



// #include <algorithm>

// using namespace std;

// typedef long long ll;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     cin >> t;
//     while (t--) {
//         ll n;
//         cin >> n;
//         vector<pair<int, int>> v(n);

//         for (ll i = 0; i < n; ++i) {
//             cin >> v[i].first >> v[i].second;
//         }
//         sort(v.begin(), v.end());

//         ll sum = 0;
//         int prev_first = -1;
//         int prev_second = 0;

//         for (ll i = 0; i < n; ++i) {
//             if (v[i].first > 8) continue;

//             if (v[i].first == prev_first) {
//                 if (v[i].second > prev_second) {
//                     sum += v[i].second - prev_second;
//                     prev_second = v[i].second;
//                 }
//             } else {
//                 sum += v[i].second;
//                 prev_first = v[i].first;
//                 prev_second = v[i].second;
//             }
//         }

//         cout << sum << endl;
//     }

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main(){
//     ll t;cin>>t;
//     while (t--)
//     {
//         ll n; cin>>n;
//         vector<int> v(n);
//         for (ll i = 0; i < n; i++)
//         {
//             cin>>v[i];
//         }

//         ll skip = 0;
//         ll prev = -1;

//         for (ll i = 0; i < n; i++)
//         {
//             if(i>0){
//             if(v[i] > prev){
//                 ll x = prev + 1;
//                 ll y = (v[i] - x);
//                 // cout<<y<<" ";
//                 skip += y;
//                 // cout<<skip<<" ";
//                 // prev = v[i];
//             }
//             else if(v[i] < prev){
//                 ll x = v[i] + 1;
//                 ll y = (prev - x);
//                 // cout<<y<<" ";
//                 skip += y;
//                 // cout<<skip<<" ";
//                 // prev = v[i];
//             }
//             else continue;
//         }

//             prev = v[i];

//         }
        
//         cout<<skip<<endl;
        
//     }
    
// }

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// const int x = 150;
// int hsh[x];
// int main(){
//     ll t;cin>>t;
//     while (t--)
//     {
//         // for (int i = 0; i < x; i++)
//         // {
//         //     hsh[i] = 0;
//         // }
        
//         ll n;cin>>n;
//         string s;cin>>s;
//         for (ll i = 0; i < n; i++)
//         {
//             hsh[s[i]-'a']++;
//         }

//         int f = 0;
//         ll q = 0;

//         for (ll i = 0; i <= n; i++)
//         {
//             if(hsh[i] >= 2){
//                 f = 1;
//                 q = hsh[i];
//                 break;
//             }
//         }
        
//         if(f == 1) cout<< n - q<<endl;
//         else cout<<"-1"<<endl;
        
//     }
    
// }


// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// const int SIZE = 26;

// int main() {
//     // ios::sync_with_stdio(false);
//     // cin.tie(nullptr);

//     ll t;
//     cin >> t;
//     while (t--) {
//         int hsh[SIZE] = {0}; 

//         ll n;cin >> n;
//         string s;cin >> s;

//         for (ll i = 0; i < n; ++i) {
//             hsh[s[i] - 'a']++;
//         }

//         int f = 0;
//         ll q = 0;

//         for (int i = 0; i < SIZE; ++i) {
//             if (hsh[i] >= 2) {
//                 f = 1;
//                 q = 2;
//                 break;
//             }
            
//         }

//         if (f == 1) cout << n - q << endl;
//         else cout << "-1" << endl;
//     }

    
// }


// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main(){
//     int t; cin>>t;
//     while (t--)
//     {
//         ll n; cin>>n;
//         map<int,int> m;
//         for (ll i = 0; i < n; i++)
//         {
//             int x ; cin>>x;
//             m[x]++;
//         }
//         ll max_integer = 0;

//         for (auto i : m)
//         {
//             max_integer = max(max_integer,i.second);
//         }
        
//         cout<< n - max_integer<<endl;
//     }
    
// }


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        unordered_map<int, ll> uMap;

        for (ll i = 0; i < n; ++i) {
            int x;
            cin >> x;
            uMap[x]++;
        }

        ll max_freq = 0;

        for (auto &it : uMap) {
            max_freq = max(max_freq, it.second);
        }

        cout << n - max_freq << endl;
    }

    
}
