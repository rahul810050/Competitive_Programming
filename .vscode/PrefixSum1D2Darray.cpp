// #include<bits/stdc++.h>
// using namespace std;
// const int N=10e5+10;
// int a[N];
// int main(){
// 	int n;cin>>n;
// 	int a[n];
// 	for (int i = 1; i <= n; i++)
// 	{
// 		cin>>a[i];
// 	}
// 	int q;cin>>q;   // TIME COMPLEXITY OF THIS CODE----
// 	while (q--)     // O(n)+O(q*n) = 10^10 order
// 	{
// 		int l,r;cin>>l>>r;
// 		int sum=0;
// 		for (int j = l; j <=r; j++)
// 		{
// 			sum = sum + a[j];
// 		}
// 		cout<<sum<<endl;
// 	}
// }

//  **** USING PREFIX SUM CONCEPT****

// #include<bits/stdc++.h>
// using namespace std;
// const int N=10e5+10;
// int a[N];
// int pf[N];
// int main(){
// 	int n;cin>>n;
// 	int a[n];
// 	for (int i = 1; i <= n; i++)
// 	{
// 		cin>>a[i];
// 		pf[i]=pf[i-1]+a[i];
// 	}
// 	int q;cin>>q;   // TIME COMPLEXITY OF THIS CODE----
// 	while (q--)     // O(n)+O(q) = 10^5 order
// 	{
// 		int l,r;cin>>l>>r;

// 		cout<<pf[r]-pf[l-1]<<endl;
// 	}
// }

// PREFIX SUM FOR 2D ARRAYS

// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e3+10;
// int ar[N][N];

// int main(){
// 	int n;cin>>n;
// 	for (int i = 1; i <=n; i++)
// 	{
// 		for (int j = 1; j <=n; j++)
// 		{
// 			cin>>ar[i][j];
// 		}
// 		                             // O(N^2) + O(Q*N^2) = 10^5 * 10^6=10^11
// 	}
// 	int q;cin>>q;
// 	while (q--)
// 	{
// 		int a,b,c,d;cin>>a>>b>>c>>d;
// 		long long sum=0;
// 		for (int i = a; i <=c; i++)
// 		{
// 			for (int j = b; j<=d; j++)
// 			{
// 				sum = sum+ar[i][j];
// 			}

// 		}
// 		cout<<sum<<endl;

// 	}

// }

#include <bits/stdc++.h>
using namespace std;
const int N = 10e3 + 10;
int arr[N][N];
long long int pf[N][N];

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			// if(i == 0 || j == 0)
			// {
			// 	pf[i][j] = 0;
			// 	continue;
			// }
			cin >> arr[i][j];
			pf[i][j] = arr[i][j] + pf[i - 1][j] + pf[i][j - 1] - pf[i - 1][j - 1];
		}
	}
		int q;
		cin >> q;
		while (q--)
		{
			int a, b, c, d;
			cin >> a >> b >> c >> d;
			cout << pf[c][d] - pf[a - 1][d] - pf[c][b - 1] + pf[a - 1][b - 1] << endl;
		}
	
	return 0;
	
}