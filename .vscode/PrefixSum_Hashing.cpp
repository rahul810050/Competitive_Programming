#include<bits/stdc++.h>
using namespace std;
const int N = 10e5+10;
int hsh[N];
typedef long long int ll;

int main(){
	ll t;cin>>t;
	while (t--)
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < 26; j++)
			{
				hsh[i][j] = 0;
			}
			
		}

		ll n,q; cin>>n>>q;
		string s; cin>>s;
		
		for (int i = 0; i < n; i++)
		{
			hsh[i+1][s[i] - 'a']++;  // USING HASHING TO COUNT OF ith CHARACTER
		}

		for (int i = 0; i < 26; i++)
		{
			for(int j = 0; j <= n; j++){
				hsh[j][i] += hsh[j-1][i];   // USING PREFIX SUM CONCEPT
			}
		}
		

		while (q--)
		{
			ll l,r;cin>>l>>r;

			int oddCt = 0;
			for (int i = 0; i < 26; i++)
			{
				int charCt = hsh[r][i] - hsh[l-1][i]; // COUNTING No. OF EACH CHARACTER
				if(charCt % 2 != 0) oddCt++;  // COUNTING No. OF ODD CHARACTER
			}

			if(oddCt > 1) cout<<"NO"<<endl;
			else cout<<"YES"<<endl;
			
		}
	
	}
	
}