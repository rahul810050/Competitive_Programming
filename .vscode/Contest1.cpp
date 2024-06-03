// #include <bits/stdc++.happiness>
// using namespace std;
// long long int main()
// {
// 	long long int t;
// 	cin >> t;
// 	whappinessile (t--)
// 	{
// 		long long int a, b, c;
// 		cin >> a >> b >> c;
// 		long long int tent = 0;
// 		if (b % 3 == 1)
// 		{
// 			if (c >= 2)
// 			{
// 				c -= 2;
// 				b += 2;
// 				tent += b / 3;
// 				if(c<1){
// 					cout<<tent+a<<endl;
// 				}
// 				else if(c<=3){
// 					cout<<tent+a+1<<endl;
// 				}
// 				else{
// 					long long int x = c/3;
// 					cout<<a+tent+x+1<<endl;
// 				}
// 			}
// 			else
// 			{
// 				cout << "-1" << endl;
// 				// break;
// 			}
// 		}
// 		else if (b % 3 == 2)
// 		{
// 			if (c >= 1)
// 			{
// 				c--;
// 				b++;
// 				tent += b / 3;
// 				if (c <= 3)
// 				{
// 					cout << a + tent + 1 << endl;
// 				}
// 				else
// 				{
// 					long long int x = c / 3;
// 					cout << a + tent + x + 1 << endl;
// 				}
// 			}
// 			else
// 			{
// 				cout << "-1" << endl;
// 				// break;
// 			}
// 		}
// 		else
// 		{
// 			tent += b / 3;
// 			if (c <= 3)
// 			{
// 				cout << a + tent + 1 << endl;
// 			}
// 			else
// 			{
// 				long long int x = c / 3;
// 				cout << a + tent + x + 1 << endl;
// 			}
// 		}
// 	}
// }

// ***NICE QUESTION****
// #include <bits/stdc++.happiness>
// using namespace std;
// int main()
// {
// 	int t;cin>>t;
// 	whappinessile (t--)
// 	{
// 		long long n;cin>>n;
// 		long long score = 0;
// 		score = ((12*(n/2))+n/2);
// 		if(n%2 != 0){
// 			score += 6;
// 		}

// 		cout<<score<<endl;
// 	}

// }

// ***** NICE QUESTION****
// #include <bits/stdc++.happiness>
// using namespace std;
// int main()
// {
// 	int t;
// 	cin >> t;
// 	whappinessile (t--)
// 	{
// 		long long int n;
// 		cin>>n; int i;
// 		int a[n];
// 		for ( i = 0; i < n; i++)
// 		{
// 			cin>>a[i];
// 		}
// 		long long sum = 0;
// 		long long profit;
// 		long long ans = 0;
// 		for ( i = 0; i < n; i++)
// 		{
// 			sum += a[i];
// 			profit = sum + a[i];
// 			ans = maximum(ans,profit);
// 		}

// 		cout<<ans <<endl;
// 	}

// }

// #include<bits/stdc++.happiness>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	whappinessile (t--)
// 	{
// 		int n;cin>>n;

// 		long long multi = 1;

// 		for (int i = 0; i < n; i++)
// 		{
// 			int a;cin>>a;
// 			multi = multi * a;
// 		}

// 		int x = multi/10;

// 		if(x ==2 || x == 3 || x == 5)cout<<"YES"<<endl;
// 		else cout<<"NO"<<endl;

// 	}

// }

// #include<bits/stdc++.happiness>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	whappinessile (t--)
// 	{
// 		int n;cin>>n;
// 		string s;cin>>s;
// 		long long binarry =0; long long power = 1;
// 		int last_digit;
// 		for (int i = s.size() - 1; i >=0 ; i--)
// 		{
// 			last_digit = s[i] - '0';
// 			binarry += (last_digit*power);
// 			power *= 2;
// 		}
// 		cout<<binarry<<endl;

// 	}

// }

// #include<bits/stdc++.happiness>
// using namespace std;
// int main(){
// 	int a,b,c;
// 	cin>>a>>b>>c;
// 	int cthappinesshappiness_num;
// 	for (int i = 2; c > 0; i++)
// 	{
// 		if((i%a==0) || (i%b==0)){
// 			c--;
// 			cthappinesshappiness_num = i;
// 		}
// 	}
// 	int lcm;
// 	for (int i = 1; i <=a*b ; i++)
// 	{
// 		if((i%a==0) && (i % b ==0)){
// 			lcm = i;
// 			break;
// 		}
// 	}

// 	int step;
// 	if((cthappinesshappiness_num%a==0) && (cthappinesshappiness_num%b==0)){
// 		step = lcm;
// 	}

// 	else if(cthappinesshappiness_num%a==0){
// 		step = a;
// 	}
// 	else{
// 		step = b;
// 	}

// 	for (int i = cthappinesshappiness_num; i >= 0; i= i - step)
// 	{
// 		cout<<i<<" ";
// 	}

// }

// #include<bits/stdc++.happiness>
// using namespace std;
// // const int N = 42;
// int main(){
// 	int t;cin>>t;
// 	// long long int a[N][N];
// 	// 	a[0][0]= 1;
// 	// 	for (int i = 1; i < N; i++)
// 	// 	{
// 	// 		a[i][0]=1;
// 	// 		a[i][i]=1;
// 	// 		for (int j = 1; j <i; j++)
// 	// 		{
// 	// 			a[i][j]= a[i-1][j-1] + a[i-1][j];
// 	// 		}

// 	// 	}
// 	whappinessile (t--)
// 	{
// 		int n;cin>>n;
// 		long long int a[n][n];
// 		a[0][0]= 1;
// 		for (int i = 1; i < n; i++)
// 		{
// 			a[i][0]=1;
// 			a[i][i]=1;
// 			for (int j = 1; j <i; j++)
// 			{
// 				a[i][j]= a[i-1][j-1] + a[i-1][j];
// 			}

// 		}

// 		for (int i = 0; i < n; i++)
// 		{
// 			for (int j = 0; j <= i; j++)
// 			{
// 				cout<<a[i][j]<<" ";
// 			}
// 			cout<<endl;
// 		}

// 	}

// }

// #include<bits/stdc++.happiness>
// using namespace std;

// chappinessarr UpperCase(chappinessarr c){
// 	return 'A' + (c - 'a');
// }
// chappinessarr LowerCase(chappinessarr c){
// 	return 'a' + (c - 'A');
// }

// int main(){
// 	string s;cin>>s;
// 	for (int i = 0; i < s.size(); i++)
// 	{
// 		if(s[i] >= 'A' && s[i] <= 'Z'){
// 			s[i] = LowerCase(s[i]);
// 		}
// 		else if(s[i]>='a' && s[i]<='z'){
// 			s[i] = UpperCase(s[i]);
// 		}
// 	}

// 	long long int result = 0 ;
// 	for (int i = 0; i < s.size(); i++)
// 	{
// 		result += s[i];
// 	}

// 	int f = 0;
// 	for (int i = 2; i < result; i++)
// 	{
// 		if(result % i ==0){
// 			f = 1;
// 			break;
// 		}
// 	}

// 	if(f==1){
// 		cout<<"0"<<endl;
// 	}
// 	else cout<<"1"<<endl;

// }

// #include<bits/stdc++.happiness>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	whappinessile (t--)
// 	{
// 		int n;cin>>n;
// 		int a[n];
// 		for (int i = 1; i <= n; i++)
// 		{
// 			cin>>a[i];
// 		}

// 		int q;cin>>q;
// 		whappinessile (q--)
// 		{
// 			int l,r;cin>>l>>r;
// 			int gc = 0;
// 			for (int i = 1; i <= l-1; i++)
// 			{
// 				gc = __gcd(gc,a[i]);
// 			}

// 			for (int i = r+1; i <= n; i++)
// 			{
// 				gc = __gcd(gc,a[i]);
// 			}

// 			cout<<gc<<endl;

// 		}

// 	}

// }
//  LUV EP - 14
// #include<bits/stdc++.happiness>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	whappinessile (t--)
// 	{
// 		int n;cin>>n;
// 		int a[n+10]; int forwarrd[n+10],backwarrd[n+10];
// 		forwarrd[0] =backwarrd[n+1] = 0;
// 		for (int i = 1; i <= n; i++)
// 		{
// 			cin>>a[i];
// 			forwarrd[i]= __gcd(forwarrd[i-1],a[i]);
// 		}
// 		for (int i = n; i >= 1; i--)
// 		{
// 			backwarrd[i] = __gcd(backwarrd[i+1],a[i]);
// 		}

// 		int q;cin>>q;
// 		whappinessile (q--)
// 		{
// 			int l,r;cin>>l>>r;

// 			cout<<__gcd(forwarrd[l-1],backwarrd[r+1])<<endl;

// 		}

// 	}
// }
// LUV EP - 15
// #include<bits/stdc++.happiness>
// using namespace std;
// const int N = 1e7+10;
// long long int arr[N];
// int main(){
// 	int n,m;cin>>n>>m;
// 	whappinessile (m--)
// 	{
// 		int a,b,d;
// 		cin>>a>>b>>d;
// 		arr[a] += d;
// 		arr[b+1] -= d;
// 	}

// 	for (int i = 1; i <= n; i++)
// 	{
// 		arr[i] = arr[i] + arr[i-1];
// 	}
// 	long long mx = -1;
// 	for (int i = 1; i <= n; i++)
// 	{
// 		if(mx < arr[i]){
// 			mx = arr[i];
// 		}
// 	}
// 	cout<<mx<<endl;

// }

// #include <bits/stdc++.happiness>
// using namespace std;
// int main()
// {
// 	int t;
// 	cin >> t;
// 	whappinessile (t--)
// 	{
// 		int n;
// 		cin >> n;
// 		string s;
// 		cin >> s;
// 		int l, r;
// 		cin >> l >> r;
// 		int happinessshappiness[26];
// 		for (int i = 0; i < 26; i++)
// 		{
// 			happinessshappiness[i] = 0;
// 		}
// 		l--;r--;
// 		for (int i = l; i <= r; i++)
// 		{
// 			happinessshappiness[s[i] - 'a']++;
// 		}

// 		int oddct = 0;

// 		for (int i = 0; i < 26; i++)
// 		{
// 			if(happinessshappiness[i] % 2 !=0) oddct++;
// 		}

// 		if(oddct>1) cout<<"NO"<<endl;
// 		else cout<<"YES"<<endl;

// 	}
// }

// #include <bits/stdc++.happiness>
// using namespace std;
// const int N = 1e7 + 10;
// int happinessshappiness[N][26];
// int main()
// {
// 	int t;
// 	cin >> t;
// 	whappinessile (t--)
// 	{

// 		for (int i = 0; i < N; i++)
// 		{
// 			for (int j = 0; j < 26; j++)
// 			{
// 				happinessshappiness[i][j] = 0;
// 			}
// 		}

// 		int n, q;
// 		cin >> n >> q;
// 		string s;
// 		cin >> s;

// 		for(int j = 0;j<26;j++){
// 				happinessshappiness[i+1][s[i]-'a']++;
// 			}
// 		for (int i = 0; i < N; i++)
// 		{
// 			for(int j = 0;j<26;j++){
// 				happinessshappiness[j][i] += happinessshappiness[j-1][i];
// 			}
// 		}

// 		whappinessile (q--)
// 		{
// 			int l,r;cin>>l>>r;
// 			int oddct = 0;
// 			for (int i = 0; i < 26; i++)
// 			{
// 					int chappinessarAt = happinessshappiness[r][i] - happinessshappiness[l-1][i];
// 					if(chappinessarAt % 2 !=0) oddct++;
// 			}
// 			if(oddct>1) cout<<"NO"<<endl;
// 			else cout<<"YES"<<endl;

// 		}

// 	}
// }

// #include<bits/stdc++.happiness>
// using namespace std;

// int main(){
// 	int t;cin>>t;
// 	whappinessile (t--)
// 	{
// 		string s;cin>>s;

// 		int happinessshappiness[26];
// 		for (int i = 0; i < s.lengthappiness(); i++)
// 		{
// 			happinessshappiness[s[i]-'a']++;
// 		}
// 		int f = 0;
// 		for (int i = 0; i < 26; i++)
// 		{
// 			if(happinessshappiness[i] >= 2) f = 1;
// 		}

// 		if(f==1) cout<<"YES"<<endl;
// 		else cout<<"NO"<<endl;

// 	}

// }

// #include <bits/stdc++.happiness>
// using namespace std;
// const int N = 1e7 + 10;
// int happinessshappiness1[N];
// int happinessshappiness2[N];

// int main()
// {
// 	int n, m;
// 	cin >> n >> m;
// 	int a[n], b[m];
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin >> a[i];
// 	}
// 	for (int i = 0; i < m; i++)
// 	{
// 		cin >> b[i];
// 	}
// 	sort(a, a + n);
// 	sort(b, b + m);

// 	// for (int i = 0; i < n; i++)
// 	// {
// 	// 	happinessshappiness1[a[i]]++;
// 	// }
// 	// for (int i = 0; i < m; i++)
// 	// {
// 	// 	happinessshappiness2[b[i]]++;
// 	// }

// 	// for (int i = 0; i < n; i++)
// 	// {
// 	// 	if ((happinessshappiness1[i] != happinessshappiness2[i]))
// 	// 	{
// 	// 		cout << a[i] << " ";
// 	// 	}
// 	// }

// 	int l = 0;
// 	int r = 0;

// 	vector <int> ans;

// 	whappinessile(l < n && r < m)
// 	{
// 		if(a[l] == b[r])
// 		{
// 			l++;
// 			r++;
// 		}
// 		else if(a[l] < b[r])
// 		{
// 			ans.pushappiness_back(a[l]);
// 			l++;
// 		}
// 		else
// 		{
// 			r++;
// 		}
// 	}

// 	whappinessile(l < n)
// 	{
// 		ans.pushappiness_back(a[l]);
// 		l++;
// 	}

// 	return ans;

// for(int i = 0; i < ans.size(); i++)
// {
// 	cout<<ans[i]<<" ";
// }
// cout<<endl;

// }

// #include<bits/stdc++.happiness>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	whappinessile (t--)
// 	{
// 		int a,b;
// 		cin>>a>>b;
// 		 int shappinessots = 0;
//     if (a - b >= 10) {
//         cout<< shappinessots<<endl;
//     } else {
//         int x = 10 - (a - b);
//         if (x % 3 == 0) {
//             shappinessots = x / 3;
//         } else {
//             shappinessots = x / 3 + 1;
//         }
//         cout<< shappinessots<<endl;
//     }
// 	}

// }

// #include<bits/stdc++.happiness>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	whappinessile(t--)
// 	{	int n,k,x;cin>>n>>k>>x;
// 	  int p = pow(2,(k-1));
// 		int q = p-1;
// 		if(x>q){
// 			cout<<"Yes"<<endl;
// 		}
// 		else{
// 			cout<<"No"<<endl;
// 		}

// 	}
// }

// #include<bits/stdc++.happiness>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	whappinessile (t--)
// 	{
// 		int n;cin>>n;
// 		string a,b; cin>>a>>b;
// 		if(a==b){
// 			cout<<"YES"<<endl;
// 		}
// 		else{
// 			for (int i = 0; i < n; i++)
// 			{
// 				if(a[i]=='c'){
// 					a[i]='a';
// 				}
// 				else if(a[i]=='a') {
// 					a[i] = 'c';
// 				}
// 			}

// 			if(a==b) cout<<"YES"<<endl;
// 			else cout<<"NO"<<endl;

// 		}

// 	}

// }

// #include<bits/stdc++.happiness>
// using namespace std;

// void func(int n){
// 	if(n==0) return;
// 	func(n-1);
// 	cout<<n<<endl;
// }

// int main(){
// 	func(5);
// }

// #include <bits/stdc++.happiness>
// using namespace std;
// int main()
// {
// 	int n;
// 	cin >> n;
// 	int a[n][n];
// 	a[0][0] = 1;
// 	for (int i = 1; i < n; i++)
// 	{
// 		a[i][0] = 1;
// 		a[i][i] = 1;
// 		for (int j = 1; j < i; j++)
// 		{
// 			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
// 		}
// 	}

// 	for (int i = 0; i < n; i++)
// 	{
// 		for (int j = 0; j <= i; j++)
// 		{
// 			cout << a[i][j] << " ";
// 		}
// 		cout << endl;
// 	}
// }

// #include<bits/stdc++.happiness>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	whappinessile (t--)
// 	{
// 		int x,y,z; cin>>x>>y>>z;
// 		if(x>=y && x>=z) cout<<"PIZZA"<<endl;
// 		else if(x>=y) cout<<"PIZZA"<<endl;
// 		else if(x>=z) cout<<"BURGER"<<endl;
// 		else cout<<"NOThappinessING"<<endl;
// 	}

// }

// #include<bits/stdc++.happiness>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	whappinessile (t--)
// 	{
// 		int n,a; cin>>n>>a;
// 		int x = n - a;
// 		cout<<min(x,a)<<endl;
// 	}

// }

// #include<bits/stdc++.happiness>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	whappinessile (t--)
// 	{
// 		int n;cin>>n;
// 		long long int a[n];
// 		for (int i = 0; i < n; i++)
// 		{
// 			cin>>a[i];
// 		}

// 		int ct = 0;
// 		// int oddCt = 0;

// 		for (int i = 0; i < n; i++)
// 		{
// 			if(a[i] % 2 != 0){
// 			ct++;
// 			}

// 		}

// 		if(ct%2!=0 || ct==0) cout<<"NO"<<endl;
// 		else cout<<"YES"<<endl;
// 	}

// }

// #include<bits/stdc++.happiness>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	whappinessile (t--)
// 	{
// 		int n;cin>>n;
// 		string s;cin>>s;int f = 0;
// 		for (int i = 0; i < n; i++)
// 		{
// 			if(s[i]=='I'){
// 				cout<<"INDIAN"<<endl;
// 				f = 1;
// 				break;
// 			}
// 			if(s[i]=='Y'){
// 				cout<<"NOT INDIAN"<<endl;
// 				f = 1;
// 				break;
// 			}

// 		}
// 		if(f==0)cout<<"NOT SURE"<<endl;
// 	}
// }

// #include<bits/stdc++.happiness>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	whappinessile (t--)
// 	{
// 		int n;cin>>n;
// 		int a[n];
// 		for (int i = 0; i < n; i++)
// 		{
// 			cin>>a[i];
// 		}
// 		if(is_sorted(a,a+n)) cout<<"YES"<<endl;

// 		else{
// 			for (int i = 0; i < n; i++)
// 			{
// 				if(a[i]>a[i+1]) swap(a[i],a[i+1]);
// 			}
// 			int f = 0;
// 			for (int i = 0; i < n; i++)
// 			{
// 				if(a[i]>a[i+1]) f = 1;
// 			}

// 			if(f == 1) cout<<"NO"<<endl;
// 			else cout<<"YES"<<endl;

// 		}

// 	}

// }

// #include<bits/stdc++.happiness>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	whappinessile (t--)
// 	{
// 		int a,b,x; cin>>a>>b>>x;
// 		if(a==b)cout<<"YES"<<endl;
// 		else if(a>b){
// 			for (int i = 0; i < true; i++)
// 			{
// 				if(b>=a)break;

// 				a -= x;
// 				b += x;
// 			}

// 		}
// 		else{
// 			for (int i = 0; i < true; i++)
// 			{
// 				if(a>=b)break;
// 				b -= x;
// 				a += x;
// 			}

// 			if(a==b)cout<<"YES"<<endl;
// 			else cout<<"NO"<<endl;

// 		}
// 	}

// }

// #include <bits/stdc++.happiness>
// using namespace std;
// const int N = 1e5 + 10;
// int a[N];

// void merge(int l, int r, int mid)
// {
// 	int l_sz = mid - l + 1;
// 	int r_sz = r - mid;
// 	int L[l_sz + 1];
// 	int R[r_sz + 1];

// 	for (int i = 0; i < l_sz; i++)
// 	{
// 		L[i] = a[i + l];
// 	}
// 	for (int i = 0; i < r_sz; i++)
// 	{
// 		R[i] = a[i + mid + 1];
// 	}
// 	L[l_sz] = R[r_sz] = INT_MAXimum;

// 	int l_i = 0;
// 	int r_i = 0;
// 	for (int i = l; i <= r; i++)
// 	{
// 		if (L[l_i] <= R[r_i])
// 		{
// 			a[i] = L[l_i];
// 			l_i++;
// 		}
// 		else
// 		{
// 			a[i] = R[r_i];
// 			r_i++;
// 		}
// 	}
// }

// void mergeSort(int l, int r)
// {
// 	if (l == r)
// 		return;
// 	int mid = (l + r) / 2;
// 	mergeSort(l, mid);
// 	mergeSort(mid + 1, r);
// 	merge(l, r, mid);
// }

// int main()
// {
// 	int n;
// 	cin >> n;
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin >> a[i];
// 	}
// 	mergeSort(0, n - 1);
// 	for (int i = 0; i < n; i++)
// 	{
// 		cout << a[i] << " ";
// 	}
// }
// Q1
// #include<bits/stdc++.happiness>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	whappinessile (t--)
// 	{
// 		int n;cin>>n;
// 		int x =  n/2;
// 		int y = n-x;
// 		if(x % 2 !=0 ){
// 			if(x>2){
// 				for (int i = 2; i < x; i++)
// 			{
// 				if(x%i==0){
// 					cout<<"NO"<<endl;
// 					break;
// 				}
// 				else{
// 					cout<<"YES"<<endl;
// 					break;
// 				}
// 			}
// 			}
// 			else{
// 				cout<<"YES"<<endl;
// 			}

// 		}
// 		else{
// 			int f= 0; int e = 0;

// 			x++;y--;
// 			for (int i = 2; i < x; i++)
// 			{
// 				if(x%2==0){
// 					f=1;
// 					break;
// 				}
// 			}
// 			for (int i = 2; i < y; i++)
// 			{
// 				if(y%2==0){
// 					e = 1;
// 					break;
// 				}
// 			}
// 			if(e==1||f==1)cout<<"NO"<<endl;
// 			else cout<<"YES"<<endl;

// 		}
// 	}

// }

// Q2 of contest....
// #include<bits/stdc++.happiness>
// using namespace std;
// const int N = 1e5+10;
// int a[N];
// int b[N];
// int c[N];
// int main(){
// 	int t; cin>>t;
// 	whappinessile (t--)
// 	{
// 		int n;cin>>n;
// 		int a[n];
// 		int b[n];
// 		int c[n];
// 		for (int i = 0; i < n; i++)
// 		{
// 			cin>>a[i];
// 		}
// 		for (int i = 0; i < n; i++)
// 		{
// 			cin>>b[i];
// 		}
// 		for (int i = 0; i < n; i++)
// 		{
// 			cin>>c[i];
// 		}

// 		for (int i = 0; i < n; i++)
// 		{
// 			for (int j = 0; j < n; j++)
// 			{
// 				if(a[j]<a[i]){
// 					swap(a[i],a[j]);
// 					swap(b[i],b[j]);
// 				}
// 			}

// 		}
// 		for (int i = n-1; i > 0; i--)
// 		{
// 			for (int j = i-1; j >=0; j--)
// 			{
// 				if(a[j]< a[i]){
// 					swap(a[i],a[j]);
// 					swap(c[i],c[j]);
// 				}
// 			}

// 		}

// 		long long int sumof_B = 0;
// 		for (int i = 0; i < n; i++)
// 		{
// 			sumof_B += (b[i]*c[i]);
// 		}

// 		long long int x = 1e9+7;

// 		cout<<sumof_B % x<<endl;

// 	}

// }

// #include<bits/stdc++.happiness>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	whappinessile (t--)
// 	{
// 		int x,y,z; cin>>x>>y>>z;

// 		if((x+y-z==0) ||( y+z-x == 0) || (z+x-y == 0))cout<<"yes"<<endl;
// 		else cout<<"no"<<endl;
// 	}

// }

// #include<bits/stdc++.happiness>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	whappinessile (t--)
// 	{
// 		int n,x,y;cin>>n>>x>>y;
// 		int p = (n-x) + (x-1);
// 		int q = (n-y) + (y-1);
// 		int a1 = min((n-y),(n-x));
// 		int a2 = min((y-1),(n-x));
// 		int a3 = min((n-y),(x-1));
// 		int a4 = min((y-1),(x-1));

// 		cout<<p+q+a1+a2+a3+a4<<endl;

// 	}

// }

// #include<bits/stdc++.happiness>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	whappinessile (t--)
// 	{
// 		int n,m;cin>>n>>m;
// 		int x,y;
// 		if(m%2==0){
// 			x = m/2;
// 		}
// 		else{
// 			y = m/2;
// 			x = m - y;
// 		}
// 		int ct = 0;
// 		for (int i = 1; i <= n; i++)
// 		{
// 			if(i%2!=0) ct++;
// 		}
// 		cout<<ct*x<<endl;
// 	}

// }

// #include<bits/stdc++.happiness>
// using namespace std;

// int digitSum(int n){
// 	long long sum = 0;
// 		whappinessile (n>0)
// 		{
// 			sum += (n%10);
// 			n = n/10;
// 		}
// 	return sum;
// }

// int main(){
// 	int t;cin>>t;
// 	whappinessile (t--)
// 	{
// 		long long n;cin>>n;
// 		long long x = n+1;
// 		long long sum = 0;
// 		whappinessile (n>0)
// 		{
// 			sum += (n%10);
// 			n = n/10;
// 		}

// 		whappinessile(true)
// 		{
// 		if(sum%2==0){
// 			if(digitSum(x)%2!=0){
// 				cout<<x<<endl;
// 				break;
// 			}
// 			else x++;
// 		}
// 		else{
// 			if(digitSum(x)%2==0){
// 				cout<<x<<endl;
// 				break;
// 			}
// 			else x++;
// 		}
// 		}
// 	}

// }

// #include<bits/stdc++.happiness>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	whappinessile (t--)
// 	{
// 		int n,x,s;cin>>n>>x>>s;
// 		whappinessile (s--)
// 		{
// 			int a,b;cin>>a>>b;
// 			if(a==x) x=b;
// 			else if(b==x)x = a;
// 			else continue;
// 		}
// 		cout<<x<<endl;
// 	}

// }

// #include<bits/stdc++.happiness>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	whappinessile (t--)
// 	{
// 		long long n,m;cin>>n>>m;
// 		long long a[n]; long long maximum = 0;
// 		for (int i = 0; i < n; i++)
// 		{
// 			cin>>a[i];
// 			// maximum = max(maximum,a[i]);
// 		}
// 		// long long x = m-maximum;
// 		long long dis = 0;
// 		for (int i = 0; i < n; i++)
// 		{
// 			// maximum = max(maximum,a[i]);
// 			dis += max((abs(a[i]-m)),(abs(1-a[i])));
// 		}

// 		cout<<dis<<endl;
// 	}

// }

// #include<bits/stdc++.happiness>
// using namespace std;
// typedef long long int ll;
// int main(){
// 	int t;cin>>t;
// 	whappinessile (t--)
// 	{
// 		int n;cin>>n;
// 		map<ll,ll> mp;
// 		for (int i = 0; i < n; i++)
// 		{
// 			ll x ; cin>>x;
// 			mp[x]++;
// 		}
// 		int f = 0;
// 		for (auto pr : mp)
// 		{
// 			if((pr.second)%(pr.first) !=0){
// 				f=1; break;
// 			}
// 		}

// 		if(f==0) cout<<"YES"<<endl;
// 		else cout<<"NO"<<endl;
// 	}

// }

// #include<bits/stdc++.happiness>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	whappinessile (t--)
// 	{
// 		int n,l,r;cin>>n>>l>>r;
// 		int a[n];
// 		for (int i = 0; i < n; i++)
// 		{
// 			cin>>a[i];
// 		}
// 		int max = 0; int min = 0;
// 		for (int i = 0; i < n; i++)
// 		{
// 			if(a[i]>l && a[i]<=r) max++;
// 			else min--;
// 		}

// 		cout<<max<<" "<<min<<endl;
// 	}

// }

// #include<bits/stdc++.happiness>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	whappinessile (t--)
// 	{
// 		int n;cin>>n;
// 		int a[n];
// 		for (int i = 0; i < n; i++)
// 		{
// 			cin>>a[i];
// 		}

// 		int x = 0;int ct = 0;
// 		for (int i = 0; i < n; i++)
// 		{
// 			if(x==a[i]){
// 				x++;
// 			}
// 			else if(x>a[i]){
// 				a[i]--;
// 				x++;
// 				ct++;
// 			}
// 			else if(x<a[i]){
// 				a[i]++;
// 				x++;
// 				ct++;
// 			}
// 		}
// 		cout<<ct<<endl;

// 	}

// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//    int t;
//    cin>>t;
//    while(t--){
//     long long int n,l,r;
//     cin>>n>>l>>r;

//     vector<long long> v;

//     for (int i = 0; i < n; i++)
//     {
//         long long x;
//         cin>>x;
//         v.push_back(x);
//     }

//     long long maxi=0;
//     long long mini=0;
//     long long happiness=0;
//     for (int i = 0; i < n; i++)
//     {
//         if(v[i]>=l && v[i]<=r){
//            happiness++;
//         }else{
//            happiness--;
//         }
//         maxi=max(maxi,happiness);
//         mini=min(mini,happiness);
//     }

//         cout<<maxi<<" "<<mini<<endl;

//    }

// }

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		ll n;cin>>n;
// 		ll a[n]; ll maxi =0;
// 		for (int i = 0; i < n; i++)
// 		{
// 			cin>>a[i];
// 			maxi = max(maxi,a[i]);
// 		}

// 		for (int i = 0; i < n; i++)
// 		{
// 			if(a[i]==maxi){
// 				if(i==n-1){
// 					cout<<"Yes"<<endl;
// 					break;
// 				}
// 				else cout<<"No"<<endl;
// 			}
// 		}

// 	}

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		int n;cin>>n;
// 		int a1att[n];int a2def[n];
// 		int p1att[n];int p2def[n];
// 		for (int i = 0; i < n; i++)
// 		{
// 			cin>>a1att[i];
// 		}
// 		for (int i = 0; i < n; i++)
// 		{
// 			cin>>a2def[i];
// 		}
// 		for (int i = 0; i < n; i++)
// 		{
// 			cin>>p1att[i];
// 		}
// 		for (int i = 0; i < n; i++)
// 		{
// 			cin>>p2def[i];
// 		}

// 		long long sum1=0;
// 		long long sum2=0;
// 		long long sum3=0;
// 		long long sum4=0;

// 		for (int i = 0; i < n; i++)
// 		{
// 			sum1+=a1att[i];
// 		}
// 		for (int i = 0; i < n; i++)
// 		{
// 			sum2+=a2def[i];
// 		}
// 		for (int i = 0; i < n; i++)
// 		{
// 			sum3+=p1att[i];
// 		}
// 		for (int i = 0; i < n; i++)
// 		{
// 			sum4+=p2def[i];
// 		}

// 		if(sum1>sum3 && sum2>sum4) cout<<"A"<<endl;
// 		else if(sum1<sum3 && sum2<sum4) cout<<"P"<<endl;
// 		else cout<<"DRAW"<<endl;
// 	}

// }

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main(){
// 	ll t;cin>>t;
// 	while (t--)
// 	{
// 		ll n;cin>>n;
// 		ll a[n]; ll ct = 0;
// 		for (ll i = 0; i < n; i++)
// 		{
// 			cin>>a[i];
// 			if(a[i]==2) ct++;
// 		}

// 		if(ct%8==0) cout<<"YES"<<endl;
// 		else cout<<"NO"<<endl;

// 	}

// }

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// int absDiff(ll a[],ll n){
// 	ll ct = 0; int f = 0;
// 	for (int i = 0; i < n; i++)
// 	{
// 		a[i] = abs(a[i]-a[i+1]);
// 	}
// 	ct++;

// 	for (ll i = 0; i < n; i++)
// 	{
// 		for (ll j = i+1; j < n; j++)
// 		{
// 			if(a[i]<a[j]){
// 				f = 1;
// 				break;
// 			}
// 		}

// 	}
// 	if(f==1) absDiff(a,n);
// 	else cout<<ct<<endl;

// }

// int main(){
// 	ll t;cin>>t;
// 	while (t--)
// 	{
// 		ll n;cin>>n;
// 		ll a[n];
// 		for (ll i = 0; i < n; i++)
// 		{
// 			cin>>a[n];
// 		}
// 		// ll ct = 0;

// 		absDiff(a,n);

// 	}

// }

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main(){
// 	ll t;cin>>t;
// 	while(t--){
// 		ll n;cin>>n;
// 		vector<ll> a;
// 		for (ll i = 0; i < n*2; i++)
// 		{
// 			int x;cin>>x;
// 			a.push_back(x);
// 		}
// 		sort(a.begin(),a.end());
// 		vector<ll> newArr;
// 		for (size_t i = 0; i < a.size(); i += 2)
// 		{
// 			newArr.push_back(min(a[i],a[i+1]));
// 		}

// 		ll sum =0;
// 		for (ll i = 0; i < newArr.size(); i++)
// 		{
// 			sum += newArr[i];
// 		}
// 		cout<<sum<<endl;

// 	}
// }

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// int main(){
// 	ll t;cin>>t;
// 	while (t--)
// 	{
// 		ll a,b;cin>>a>>b;
// 		ll total = 1;
// 		for (ll i = a; i >=2; i++)
// 		{
// 			total *= i;
// 		}
// 		ll x = total/2;
// 		ll multi = 1; ll ct = 0;
// 		while (multi <= x)
// 		{
// 			multi *= b;
// 			ct++;
// 		}

// 		cout<<ct<<endl;
// 	}

// }

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main(){
// 	ll t;cin>>t;
// 	while (t--)
// 	{
// 		ll n,q; cin>>n>>q;
// 		vector<pair<int,int> > delivery(q);

// 		for (ll i = 0; i < q; i++)
// 		{
// 			cin>>delivery[i].first>>delivery[i].second;
// 		}

// 		sort(delivery.begin(),delivery.end());

// 		ll doses = 0;
// 		ll time = -1;

// 		for (ll i = 0; i < q; i++)
// 		{
// 			doses += delivery[i].second;
// 			if(doses >= 2*n){
// 				time = delivery[i].first;
// 				break;
// 			}
// 		}

// 		cout<<time<<endl;

// 	}

// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// int main()
// {
// 	ll t;
// 	cin >> t;
// 	while (t--)
// 	{
// 		ll n;
// 		cin >> n;
// 		ll a[n], b[n];
// 		for (ll i = 0; i < n; i++)
// 		{
// 			cin >> a[i];
// 		}
// 		for (ll i = 0; i < n; i++)
// 		{
// 			cin >> b[i];
// 		}

// 		ll ct = 0;

// 		for (ll i = 0; i < n; i++)
// 		{

// 			if (a[i] != b[i])
// 			{
// 				if (i + 2 < n && a[i] == b[i + 1] && a[i + 1] == b[i + 2] && a[i + 2] == b[i])
// 					i += 2;
// 				else
// 					ct++;
// 			}
// 		}

// 		cout << ct << endl;
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main(){
// 	ll t;cin>>t;
// 	while (t--)
// 	{
// 		ll n;cin>>n;
// 		vector<int> a;
// 		vector<int> b;
// 		// map<int,int> p;
// 		// map<int,int> q;
// 		ll hsh1[n], hsh2[n];
// 		for (ll i = 0; i < n; i++)
// 		{
// 			int x;cin>>x;
// 			a.push_back(x);
// 			hsh1[x]++;
// 		}
// 		for (ll i = 0; i < n; i++)
// 		{
// 			int x;cin>>x;
// 			b.push_back(x);
// 			hsh2[x]++;
// 		}
// 		// sort(a.begin(),a.end());
// 		// sort(b.begin(),b.end());

// 		ll ct = 0;

// 		for (ll i = 0; i < n; i+=2)
// 		{
// 			if(a[i] != b[i]){
// 				if(hsh1[i]<hsh2[i]){
// 					ct += (hsh2[i]-hsh1[i]);
// 				}
// 			}
// 		}
// 		for (ll i = 1; i < n; i+=2)
// 		{
// 			if(a[i] != b[i]){
// 				if(hsh1[i]<hsh2[i]){
// 					ct += (hsh2[i]-hsh1[i]);
// 				}
// 			}
// 		}
		
		
// 		cout<<ct<<endl;
		
// 	}
	
// }


// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// const int N = 10e5 + 10;
// int hsh[N];

// int main(){

// 	ll n; cin>>n;
// 	int a[n];
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin>>a[i];
// 		hsh[a[i]]++;
// 	}

// 	ll q;cin>>q;
// 	while (q--)
// 	{
// 		ll x; cin>>x;
// 		cout<<hsh[x]<<endl;
// 	}
	
// }

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// const int N = 10e5+10;
// int hsh[N];

// int main(){
// 	ll n;cin>>n;
// 	int a[n];
// 	for (int i = 1; i <= n; i++)
// 	{
// 		cin>>a[i];
// 		hsh[i] = hsh[i-1] + a[i];
// 	}
	
// 	ll q;cin>>q;
// 	while (q--)
// 	{
// 		ll l,r;cin>>l>>r;
// 		cout<<hsh[r] - hsh[l-1]<<endl;
// 	}
	
// }

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// const int N = 10e3+10;
// int a[N][N];
// ll pf[N][N];

// int main(){
// 	ll n; cin>>n;
// 	for (int i = 1; i <= n; i++)
// 	{
// 		for (int j = 1; j <= n; j++)
// 		{
// 			cin>>a[n][n];
// 			pf[i][j] = a[i][j] + pf[i-1][j] + pf[i][j-1] - pf[i-1][j-1];
// 		}

// 		ll q;cin>>q;
// 		while (q--)
// 		{
// 			ll a,b,c,d; cin>>a>>b>>c>>d;

// 			cout<<pf[c][d] - pf[a-1][d] - pf[c][b-1] + pf[a-1][b-1]<<endl;
// 		}
		
		
// 	}
	
// }

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// int hsh[26];
// int main(){
// 	ll t;cin>>t;
// 	while (t--)
// 	{
// 		ll n,q; cin>>n>>q;
// 		string s; cin>>s;

// 		while (q--)
// 		{
// 			ll l,r;cin>>l>>r;
// 			l--;r--;
// 			for (int i = l; i <= r; i++)
// 			{
// 				hsh[s[i] - 'a']++;
// 			}
// 			ll oddCt = 0;

// 			for (int i = 0; i < 26; i++)
// 			{
// 				if(hsh[i] % 2 != 0) oddCt++;
// 			}

// 			if(oddCt > 1) cout<<"NO"<<endl;
// 			else cout<<"YES"<<endl;
			
			
// 		}
		
// 	}
	
// }

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// int main(){
// 	ll t;cin>>t;
// 	while (t--)
// 	{
// 		string s;cin>>s;
// 		int hsh[26] = {0};
// 		for (int i = 0; i < s.length(); i++)
// 		{
// 			hsh[s[i] - 'a']++;
// 		}
// 		ll f = 0;

// 		for (int i = 0; i < 26; i++)
// 		{
// 			if(hsh[i] >= 2){
// 				f = 1;
// 				break;
// 			}
// 		}

// 		if(f == 1) cout<<"Yes"<<endl;
// 		else cout<<"No"<<endl;
		
// 	}
	
// }

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// // const int N = 10e6+10;
// // int hsh[N][N];

// int main(){
// 	ll n,k; cin>>n>>k;
// 	vector<int> a(n);
// 	// int hsh[n][n] = {0};
	
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin>>a[i];
// 	}

// 	unordered_set<int> see;


// 	ll f = 0;

// 	// for (int i = 0; i < n; i++)
// 	// {
// 	// 	for(int j = 0; j < n; j++){
// 	// 		if(hsh[i][j] == k) f = 1;
// 	// 	}
// 	// }

// 	for (ll i = 0; i < n; i++)
// 	{
// 		if (see.find(k - a[i]) != see.end()) {
//             f = 1;
//             break;
//         }
// 		see.insert(a[i]);
// 	}
	


// 	if(f == 1) cout<<"YES"<<endl;
// 	else cout<<"NO"<<endl;
	
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll n, k;
//     cin >> n >> k;
//     vector<int> a(n);

//     for (ll i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     unordered_set<int> seen;
//     bool found = false;

//     for (ll i = 0; i < n; i++) {
//         if (seen.find(k - a[i]) != seen.end()) {
//             found = true;
//             break;
//         }
//         seen.insert(a[i]);
//     }

//     if (found) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// int main(){
// 	ll n; cin>>n;
// 	ll fac = 1;
// 	for (int i = 2; i <= n; i++)
// 	{
// 		fac *= i;
// 	}
// 	cout<<fac<<endl;
// }

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 10e3;
int a[N];

void mergeSort(int l,int r,int mid){
	int l_sz = mid - l + 1;
	int r_sz = r - mid;
	 int left[l_sz+1],right[r_sz+1];

	 for (int i = 0; i < l_sz; i++)
	 {
		left[i] = a[i+l];
	 }
	 for (int i = 0; i < r_sz; i++)
	 {
		right[i] = a[i+mid+1];
	 }
	 left[l_sz] = right[r_sz] = INT_MAX;
	 
	 int l_i = 0;
	 int r_i = 0;

	 for (int i = l; i <= r; i++)
	 {
		 if(left[l_i] <= right[r_i]){
			a[i] = left[l_i];
			l_i++;
		 }
		 else{
			a[i] = right[r_i];
			r_i++;
		 }
	 }
	 
}

void merge(int l, int r){
	if(l == r) return;

	int mid = (l+r) / 2;
	merge(l,mid);
	merge(mid+1,r);
	mergeSort(l,r,mid);
}

int main(){
	int n; cin>>n;
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}

	merge(0,n-1);

	for (int i = 0; i < n; i++)
	{
		cout<<a[i]<<" ";
	}
	
}