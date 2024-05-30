// ORDERED MAPS

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	map<int,string> m;
	
// 	m[0] = "abc";
// 	m[4] = "xyz";
// 	m[7] = "jkl";
// 	map<int, string> ::iterator it;
// 	// for ( it = m.begin(); it != m.end(); it++)
// 	// {
// 	// 	cout<<(it->first)<<" "<<(it->second)<<endl;
// 	// }
	
// 	// for(auto pr : m){
// 	// 	cout<<pr.first<<" "<<pr.second<<endl;
// 	// }
// }

// Given N strings, ptint unique string in LEXIGRAPHICAL order with their frequency...
// N <= 10^5; |s| <= 100;

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	map<string,int> m;
// 	int n; cin>>n;
// 	for (int i = 0; i < n; i++)
// 	{
// 		string s; cin>>s;
// 		m[s]++;
// 	}

// 	for(auto pr : m){
// 		cout<<pr.first<<" "<<pr.second<<endl;
// 	}

// }




// UNORDERED MAP
// 1. INBUILT IMPLEMENTATION 
// 2. TIME COMPLEXITY
// 3. VALID KEYS DATATYPES

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	unordered_map<int,string> m;
	
// 	m[0] = "abc";
// 	m[4] = "xyz";  // O(1)......HASHING IS USED INSTEAD OF TREE THAT'S WHY TIME COMPLEXITY DECREASES
// 	m[7] = "jkl";
// 	// map<int, string> ::iterator it;
// 	// for ( it = m.begin(); it != m.end(); it++)
// 	// {
// 	// 	cout<<(it->first)<<" "<<(it->second)<<endl;
// 	// }
	
// 	for(auto pr : m){
// 		cout<<pr.first<<" "<<pr.second<<endl;
// 	}
// }



// CONCEPT QUESTION USING MAP
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;cin>>t;
	while (t--)
	{
		int n;cin>>n;
		map<ll,ll> mp;
		for (int i = 0; i < n; i++)
		{
			ll x ; cin>>x;
			mp[x]++;
		}
		int f = 0;
		for (auto pr : mp)
		{
			if((pr.second)%(pr.first) !=0){
				f=1; break;
			}
		}
		
		if(f==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}