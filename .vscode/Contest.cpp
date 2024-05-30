// // #include<bits/stdc++.h>
// // using namespace std;

// // char upper(char c){
// // 	return 'A' + (c-'a');
// // }
// // int main(){
// // 	while (true)
// // 	{
// // 		string str;
// // 		cin>>str;
// // 		if (str.size()==0)
// // 		{
// // 			break;
// // 		}
// // 		for (int i = 0; i < str.size(); i++)
// // 		{
// // 			str[i]=upper(str[i]);
// // 		}
// // 	}
// // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// // 	int t;
// // 	cin>>t;
// // 	long long product=1;
// // 	while(t--){
// // 		int n;
// // 		cin>>n;
// // 		for(int i=1;i<=n;i++){
// // 			int x;
// // 			cin>>x;
// // 			product=product*x;
// // 		}
// // 		int last_digit=product%10;
// // 		if(last_digit==2){
// // 			cout<<"YES"<<endl;
// // 		}
// // 		else if(last_digit==3){
// // 			cout<<"YES"<<endl;
// // 		}
// // 		else if(last_digit==5){
// // 			cout<<"YES"<<endl;
// // 		}
// // 		else{
// // 			cout<<"NO"<<endl;
// // 		}
// // 	}
// // }

// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// // 	int t;
// // 	cin >> t;
// // 	while (t--)
// // 	{
// // 		int n;
// // 		cin >> n;
// // 		string S;
// // 		cin >> S;
// // 		int decimal = 0;
// // 		int power = 0;
// // 		for (int i = S.size() - 1; i >= 0; i--)
// // 		{
// // 			if (S[i] == '1')
// // 			{
// // 				decimal +=  (pow(2, power));
// // 			}
// // 			power++;
// // 		}

// // 		cout << decimal << endl;
// // 	}
// // }

// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// // 	int t;
// // 	cin >> t;
// // 	while (t--)
// // 	{
// // 		int n;
// // 		cin >> n;
// // 		string s;
// // 		cin >> s;
// // 		long long power = 1;
// // 		long long result = 0;
// // 		for (int i = s.size() - 1; i >= 0; --i)
// // 		{
// // 			int binary_number = s[i] - '0';
// // 			result = result + (binary_number *power);
// // 			power=power*2;
// // 		}
// // 		cout << result << endl;
// // 	}
// // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// // 	int a,b,c;
// // 	cin>>a>>b>>c;
// // 	int cth_num;
// // 	for (int i = 2; c>0; i++)
// // 	{
// // 		if(i%a==0||i%b==0){
// // 			c--;
// // 			cth_num=i;
// // 		}
// // 	}
// // 	int lcm;
// // 	for (int i = 1; i <=a*b; i++)
// // 	{
// // 		if(i%a==0&&i%b==0){
// // 			lcm=i;
// // 			break;
// // 		}
// // 	}
// // 	int step;
// // 	if(cth_num%a==0&&cth_num%b==0){
// // 		step=lcm;
// // 	}
// // 	else if(cth_num%a==0){
// // 		step=a;
// // 	}
// // 	else{
// // 		step=b;
// // 	}
// // 	for (int i = cth_num; i >=0; i=i-step)
// // 	{
// // 		cout<<i<<" ";
// // 	}

// // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// // 	int t;
// // 	cin>>t;
// // 	while (t--)
// // 	{
// // 		int n,m;
// // 		cin>>n>>m;
// // 		int a[n];
// // 		for(int i=0;i<n;i++){
// // 			cin>>a[i];
// // 		}

// // 		int literacy=0;
// // 		for (int i = 0; i < n; i++)
// // 		{
// // 			if(a[i]>=m){
// // 				literacy++;
// // 			}
// // 		}
// // 		cout<<literacy<<endl;

// // 	}
// // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// // 	int t;
// // 	cin>>t;
// // 	while (t--)
// // 	{
// // 		int n;
// // 		cin>>n;
// // 		int a[n];
// // 		for (int i = 0; i < n; i++)
// // 		{
// // 			cin>>a[i];
// // 		}
// // 		int deg=0;
// // 		for (int i = 0; i < n; i++)
// // 		{
// // 			if(a[i]!=0){
// // 				deg=i;
// // 			}
// // 		}
// // 		cout<<deg<<endl;

// // 	}

// // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// // 	int t;
// // 	cin>>t;
// // 	while (t--)
// // 	{
// // 		int n;
// // 		cin>>n;
// // 		string str;
// // 		int con1=0,con2=0;
// // 		for (int i = 1; i <=n; i++)
// // 		{
// // 			cin>>str;
// // 			if(str=="START38"){
// // 				con1++;
// // 			}
// // 			else{
// // 				con2++;
// // 			}
// // 		}

// // 		cout<<con1<<" "<<con2<<endl;

// // 	}

// // }

// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// // 	int t;cin>>t;
// // 	while(t--){
// // 	    int n;cin>>n;
// // 			int prime=0;
// // 	    for(int i=2;i<n;i++){
// // 	        if(n%i==0){
// // 	            prime=1;
// // 							break;
// // 	        }
// // 	    }
// // 			if(prime==1){
// // 				cout<<"no"<<endl;
// // 			}
// // 			else{
// // 				cout<<"yes"<<endl;
// // 			}
// // 	}

// // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int t;cin>>t;
// //     while(t--){
// //         int x,y;
// //         cin>>x>>y;
// // 				int m=y/x;
// //         if(y>m*x){
// // 					cout<<m<<endl;
// // 				}
// // 				else{
// // 					cout<<m-1<<endl;
// // 				}
// //     }
// // }
// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// //     int t;
// //     cin>>t;
// //     while(t--){
// //         int n,x;
// //         cin>>n>>x;
// //         int a[n],b[n];

// //         for(int i=0;i<n;i++){
// //             cin>>a[i];
// //         }
// //         for(int j=0;j<n;j++){
// //             cin>>b[j];
// //         }
// //         int cost=0;
// //         for(int i=0;i<n;i++){
// //             if(a[i]>=x){
// //                 cost=cost+b[i];
// //             }
// //         }
// //         cout<<cost<<endl;
// //     }

// // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// // 	int t;cin>>t;
// // 	while (t--)
// // 	{
// // 		int n;cin>>n;
// // 		string s,binary;
// // 		cin>>s;
// // 		for (int i = 1; i <= n; i+=2)
// // 		{
// // 			if(s[i-1]=='0'&& s[i]=='0'){
// // 				binary=binary+"A";
// // 			}
// // 			else if(s[i-1]=='0'&&s[i]=='1'){
// // 				binary=binary+"T";
// // 			}
// // 			else if(s[i-1]=='1'&&s[i]=='0'){
// // 				binary = binary+"C";
// // 			}
// // 			else if(s[i-1]=='1'&&s[i]=='1'){
// // 				binary=binary+"G";
// // 			}
// // 		}
// // 		cout<<binary<<endl;

// // 	}

// // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// // 	int t;
// // 	cin>>t;
// // 	while (t--)
// // 	{
// // 		int x,y,z,A,B;
// // 		cin>>x>>y>>z;
// // 		if((x*y)%z==0){
// // 			cout<<x*y<<" "<<z<<endl;
// // 		}
// // 		else if((y*z)%x==0){
// // 			cout<<y*z<<" "<<x<<endl;
// // 		}
// // 		else if((x*z)%y==0){
// // 			cout<<x*z<<" "<<y<<endl;
// // 		}
// // 		else{
// // 			cout<<"-1"<<endl;
// // 		}
// // 	}

// // }

// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// //     int T;
// //     std::cin >> T;

// //     while (T--) {
// //         int N, K;
// //         std::cin >> N >> K;

// //         int total_cookies = 0;
// //         int min_cookies = INT_MAX;

// //         for (int i = 0; i < N; ++i) {
// //             int cookies;
// //             std::cin >> cookies;

// //             total_cookies += cookies;
// //             min_cookies = std::min(min_cookies, cookies);
// //         }

// //         int equal_share = total_cookies / K;

// //         if (equal_share * K != total_cookies) {
// //             std::cout << -1 << std::endl;  // Not possible to distribute equally
// //         } else {
// //             int wasted_cookies = total_cookies - min_cookies * K;
// //             std::cout << wasted_cookies << std::endl;
// //         }
// //     }

// //     return 0;
// // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int t;cin>>t;
// //     while (t--)
// //     {
// //         int Sa,Sb,Sc;cin>>Sa>>Sb>>Sc;
// //         int p=min(Sa,Sb);
// //         int q=min(p,Sc);
// //         if(q==Sa){
// //             cout<<"Draw"<<endl;
// //         }
// //         else if(q==Sb){
// //             cout<<"Bob"<<endl;
// //         }
// //         else if(q==Sc){
// //             cout<<"Alice"<<endl;
// //         }
// //     }

// // }

// // #include <bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         string s;
// //         string T;
// //         cin >> s >> T;
// //         string M=" ";
// //         for (int i = 0; i < 5; i++)
// //         {
// //             if (s[i] == T[i])
// //             {
// //                 M[i]='G';
// //             }
// //             else
// //             {
// //                 M[i]='B';
// //             }
// //             cout<<M[i];
// //         }
// //     }
// // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int t;cin>>t;
// //     while (t--)
// //     {
// //        int n,bike,tyre;cin>>n;

// //        if(n>=2 && n<4){
// //         cout<<"Yes"<<endl;
// //        }
// //        else if(n%4==0){
// //         cout<<"no"<<endl;
// //        }
// //        bike = n/4;
// //        if(n>bike*4){
// //         tyre=n-(bike*4);
// //         if(tyre>=2){
// //             cout<<"Yes"<<endl;
// //         }
// //         else{
// //             cout<<"no"<<endl;
// //         }
// //        }
// //        else{
// //         tyre = n-((bike-1)*4);
// //         if(tyre>=2){
// //             cout<<"Yes"<<endl;
// //         }
// //         else{
// //             cout<<"no"<<endl;
// //         }
// //        }
// //     }
// //     }

// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int t; cin>>t;
// //     while (t--)
// //     {
// //         int x;cin>>x;
// //         if(x>65){
// //             cout<<"OVERLOAD"<<endl;
// //         }
// //         else if(x<35){
// //             cout<<"UNDERLOAD"<<endl;
// //         }
// //         else{
// //             cout<<"NORMAL"<<endl;
// //         }
// //     }

// // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int t;cin>>t;
// //     while (t--)
// //     {
// //        int x;cin>>x;
// //        if(x==1){
// //         cout<<"6"<<endl;
// //        }
// //        else if(x==6){
// //         cout<<"1"<<endl;
// //        }
// //        else if(x==3){
// //         cout<<"4"<<endl;
// //        }
// //        else if(x==4){
// //         cout<<"3"<<endl;
// //        }
// //        else if(x==2){
// //         cout<<"5"<<endl;
// //        }
// //        else if(x==5){
// //         cout<<"2"<<endl;
// //        }

// //     }

// // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int t;cin>>t;
// //     while (t--)
// //     {
// //         int x,y,a,b,z;cin>>x>>y;
// //         z = (x+y)/2;
// //     a = abs(x-z);
// //     b = abs(y-z);
// //     cout<<min(a,b)<<endl;
// //     }

// // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int t;cin>>t;
// //     while (t--)
// //     {
// //         int n,x;cin>>n>>x;
// //         if(n%2==0){
// //             cout<<n*x<<endl;
// //         }
// //         else{
// //             cout<<(n-1)*x<<endl;
// //         }
// //     }

// // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int t;cin>>t;
// //     while (t--)
// //     {
// //         int n,x,p,q;cin>>n>>x;
// //         p=n/3;
// //         q= (n-(n/3))*x;
// //         if(n%3==0){
// //             cout<<q<<endl;
// //         }
// //         else if(n>p*3){
// //             cout<<(n-p)*x<<endl;
// //         }
// //         else{
// //             cout<<(n-(p+1))*x<<endl;
// //         }
// //     }

// // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int t;cin>>t;
// //     while (t--)
// //     {
// //         int x,y,p;
// //         cin>>x>>y;
// //         p = x/2;
// //         if(p>=y){
// //             cout<<y<<endl;
// //         }
// //         else{
// //             cout<<p<<endl;
// //         }
// //     }

// // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int t;cin>>t;
// //     while (t--)
// //     {
// //         int salary;cin>>salary;
// //         double HRA,DA;
// //         if(salary>=1500){
// //             HRA=500;DA=salary*0.98;
// //             cout<<fixed<<setprecision(2)<<salary+HRA+DA<<endl;
// //         }
// //         else{
// //             HRA=salary*0.1;DA=salary*0.9;
// //             cout<<fixed<<setprecision(2)<<salary+HRA+DA<<endl;
// //         }
// //     }

// // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int t;cin>>t;
// //     while (t--)
// //     {
// //        int m,n,k;cin>>m>>n>>k;
// //        if(m>(n*k)){
// //         cout<<"yes"<<endl;
// //        }
// //        else{
// //         cout<<"no"<<endl;
// //        }
// //     }
// // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int t;cin>>t;
// //     while (t--)
// //     {
// //        int a,b,d;cin>>a>>b;
// //        if(a==b){
// //        cout<<"yes"<<endl;
// //        continue;
// //        }
// //        if(abs(a-b)%2==0){
// //         cout<<"yes"<<endl;
// //        }
// //        else{
// //         cout<<"no"<<endl;
// //        }
// //     }

// // }

// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// // 	int t;cin>>t;
// // 	while(t--){
// // 	   long long d,l,r;cin>>d>>l>>r;
// // 	    if(d<l){
// // 	        cout<<"Too Early"<<endl;
// // 	    }
// // 	    else if(d>r){
// // 	        cout<<"Too Late"<<endl;
// // 	    }
// // 	    else if(d>=l && d<=r){
// // 	        cout<<"Take second dose now"<<endl;
// // 	    }
// // 	}

// // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// // 	int t;cin>>t;
// // 	while (t--)
// // 	{
// // 		int n;cin>>n;
// // 		cout<<(n/2)+1<<endl;
// // 	}

// // }
// // #include<bits/stdc++.h>
// // using namespace std;

// // int main() {
// // 	int t;
// // 	cin>>t;
// // 	while(t--){
// // 	    int n,s,diff=0;
// // 	    cin>>n>>s;
// // 	    if(n>=s){
// // 	        diff=s;

// // 	    }else{
// // 	        diff=n-(s-n);
// // 	      }
// // 	     cout<<diff<<endl;
// // 	}
// //     return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		int n,x,p=0;cin>>n>>x;
// 		for (int i = 1; i <=n; i++)
// 		{
// 			int s,r;cin>>s>>r;
// 			if(s<=x){
// 				p = max(p,r);
// 			}
// 		}
// 		cout<<p<<endl;

// 	}

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while(t--){
// 		int n,a,b,c;cin>>n>>a>>b>>c;
// 		if(b>=n && a+c>=n){
// 			cout<<"YES"<<endl;
// 		}
// 		else{
// 			cout<<"NO"<<endl;
// 		}
// 	}
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int t;
// 	cin >> t;
// 	while (t--)
// 	{
// 		int a, b, a1, b1, a2, b2;
// 		cin >> a >> b >> a1 >> b1 >> a2 >> b2;

// 		if ((a1 == a || a1 == b) && (b1 == a || b1 == b))
// 		{
// 			cout << "1" << endl;
// 		}
// 		else if ((a2 == a || a2 == b) && (b2 == a || b2 == b))
// 		{
// 			cout << "2" << endl;
// 		}
// 		else
// 		{
// 			cout << "0" << endl;
// 		}
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		int a,b,c,p,q,hit;cin>>a>>b>>c;
// 		p = min(a,b);
// 		q = min(p,c);
// 		hit = (a+b+c)-q;
// 		cout<<hit<<endl;
// 	}

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	char x,y;cin>>x>>y;
// 	if(x=='R'||y=='R'){
// 		cout<<"R"<<endl;
// 	}
// 	else if(x=='B'&&y=='B'){
// 		cout<<"B"<<endl;
// 	}
// 	else if(x=='G'&&y=='G'){
// 		cout<<"G"<<endl;
// 	}
// 	else if((x=='B'||y=='B')&&(x=='G'||y=='G')){
// 		cout<<"B"<<endl;
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		int x,y,a;cin>>x>>y;
// 		if(x>y){
// 			cout<<x+(x-1)<<endl;
// 		}
// 		else{
// 			cout<<y+(y-1)<<endl;
// 		}
// 	}

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		string n;cin>>n;
// 		string str_rev;
// 		for (int i = n.size()-1; i >=0; i--)
// 		{
// 			str_rev = str_rev + n[i];
// 		}
// 		if(str_rev==n){
// 			cout<<"wins"<<endl;
// 		}
// 		else{
// 			cout<<"loses"<<endl;
// 		}

// 	}

// }
// *****DOUBT*********
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		double n,x,y,a,b;cin>>n>>x>>y>>a>>b;
// 		double petrol = n/a;double diesel = n/b;
// 		double petmoney,diemoney;
// 		petmoney=x*petrol;
// 		diemoney=y*diesel;
// 		if(petmoney>diemoney){
// 			cout<<"DIESEL"<<endl;
// 		}
// 		else if(petmoney==diemoney){
// 			cout<<"ANY"<<endl;
// 		}
// 		else{
// 			cout<<"PETROL"<<endl;
// 		}
// 	}

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		/* code */
// 		int x,y,count=0;cin>>x>>y;
// 		for (int i = 1;true; i++)
// 		{
// 			/* code */
// 			y= y+i;
// 			if(y>=x){
// 				cout<<i<<endl;
// 				break;
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
// 		/* code */
// 		int a[7],sunny=0,rainy=0;
// 		for (int i = 0; i < 7; i++)
// 		{
// 			cin>>a[i];
// 		}
// 	for (int i = 0; i < 7; i++)
// 	{
// 		if(a[i]==1){
// 			sunny++;
// 		}
// 		if(a[i]==0){
// 			rainy++;
// 		}
// 	}
// 	if(sunny>rainy){
// 		cout<<"YES"<<endl;
// 	}
// 	else{
// 		cout<<"NO"<<endl;
// 	}

// 	}

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		int a,b,m;cin>>a>>b>>m;
// 		int p = abs(a-b);
// 		if((m-p)<p){
// 			cout<<m-p<<endl;
// 		}
// 		else{
// 			cout<<p<<endl;
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
// 		if(n%100==0){
// 			cout<<n/100<<endl;
// 		}
// 		else if(n%50==0){
// 			cout<<n/50<<endl;
// 		}
// 		else if(n%10==0){
// 			cout<<n/10<<endl;
// 		}
// 		else if(n%5==0){
// 			cout<<n/5<<endl;
// 		}
// 		else if(n%2==0){
// 			cout<<n/2<<endl;
// 		}
// 		else{
// 			cout<<n<<endl;
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
// 		int count=0;
// 		while (n!=0)
// 		{
// 			if(n>=100){
// 				count=count+(n/100);
// 				n=n%100;
// 			}
// 			if(n>=50){
// 				count=count+(n/50);
// 				n=n%50;
// 			}
// 			if(n>=10){
// 				count=count+(n/10);
// 				n=n%10;
// 			}
// 			if(n>=5){
// 				count=count+(n/5);
// 				n=n%5;
// 			}
// 			if(n>=2){
// 				count=count+(n/2);
// 				n=n%2;
// 			}
// 			if(n>=1){
// 				count=count+(n/1);
// 				n=n%1;
// 			}
// 			cout<<count<<endl;
// 		}

// 	}

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		int a,b;cin>>a>>b;
// 		if(a>0&&b>0){
// 			cout<<"Solution"<<endl;
// 		}
// 		else if(a>0&&b==0){
// 			cout<<"Solid"<<endl;
// 		}
// 		else if(a==0&&b>0){
// 			cout<<"Liquid"<<endl;
// 		}
// 	}

// }

//  ******DOUBT********

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		int x,y,rest;cin>>x>>y;
// 		if((x%2!=0) && (y%2==0)){
// 			if(x>y){
// 				x=x+1;
// 				rest = (x-y)/2;
// 				cout<<rest+1<<endl;
// 			}
// 			else{
// 				rest = y-x;
// 				cout<<rest<<endl;
// 			}
// 		}
// 		else if((x%2!=0) && (y%2!=0)){
// 			if(x>y){
// 				rest = x-y;
// 				cout<<rest/2<<endl;
// 			}
// 			else{
// 				rest = y-x;
// 				cout<<rest<<endl;
// 			}
// 		}
// 		else if(x%2==0 && y%2!=0){
// 			if(x>y){
// 				x=x+1;
// 				rest = (x-y)/2;
// 				cout<<rest+1<<endl;
// 			}
// 			else{
// 				rest = y-x;
// 				cout<<rest<<endl;
// 			}
// 		}
// 	}
// 	}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		int z,y,a,b,c;cin>>z>>y>>a>>b>>c;
// 		int remain=z-y;
// 		int price=a+b+c;
// 		if(remain>=price){
// 			cout<<"yes"<<endl;
// 		}
// 		else{
// 			cout<<"no"<<endl;
// 		}
// 	}

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int n,p=0;cin>>n;
// 	for (int i = 2; i <=10; i++)
// 	{
// 		if(n%i==0){
// 			p=max(p,i);

// 		}

// 	}
// 	cout<<p<<endl;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int n,p=0;cin>>n;
// 	for (int i = 10; i >=1; i--)
// 	{
// 		if(n%i==0){
// 			cout<<i<<endl;
// 			break;
// 		}

// 	}

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		int r;cin>>r;
// 		if(r>=2000){
// 			cout<<"1"<<endl;
// 		}
// 		else if(r<2000 && r>=1600){
// 			cout<<"2"<<endl;
// 		}
// 		else{
// 			cout<<"3"<<endl;
// 		}
// 	}

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		int k;cin>>k;
// 		int count=0;
// 		for (int i = 1; i <=k; i++)
// 		{
// 			if(i%2!=0){
// 				count=count+3;
// 			}
// 			else if(i%2==0){
// 				count=count-1;
// 			}
// 		}
// 		cout<<count<<endl;

// 	}

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		int n,counter=0;cin>>n;
// 		string s;cin>>s;
// 		for (int i = 0; i < n; i++)
// 		{
// 			if((s[i]!='a')||(s[i]!='e')||(s[i]!='i')||(s[i]!='o')||(s[i]!='u')){
// 				counter++;
// 			}
// 		}
// 		if(counter>=4){
// 			cout<<"NO"<<endl;
// 		}
// 		else{
// 			cout<<"YES"<<endl;
// 		}
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std;

// int gcd(int a, int b) {
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int x, y;
//         cin >> x >> y;
//         cout << gcd(x, y) << endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		int n;cin>>n;
// 		long long int fact=1;
// 		for (int i = 2; i <=n; i++)
// 		{
// 			fact = fact * i;
// 		}
// 		cout<<fact;
// 	}

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int n;cin>>n;
// 	int a[n];
// 	int b=0;
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin>>a[i];
// 		b+=a[i];
// 	}
// 	if(b%2!=0){
// 		cout<<"No"<<endl;
// 	}
// 	else{
// 		cout<<"Yes"<<endl;
// 	}
// 	// for (int i = 0; i < count; i++)
// 	// {

// 	// }

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		int d1,d2,d3,s1,s2,s3;cin>>d1>>d2>>d3>>s1>>s2>>s3;
// 		int dtotal = d1+d2+d3;
// 		int stotal = s1+s2+s3;
// 		if(dtotal>stotal){
// 			cout<<"Dragon"<<endl;

// 		}
// 		else if(dtotal<stotal){
// 			cout<<"Sloth"<<endl;

// 		}
// 		else{
// 			if(d1>s1){
// 				cout<<"Dragon"<<endl;

// 			}
// 			else if(d1<s1){
// 				cout<<"Sloth"<<endl;

// 			}
// 			else if(d2>s2){
// 				cout<<"Dragon"<<endl;

// 			}
// 			else if(d2<s2){
// 				cout<<"Sloth"<<endl;

// 			}
// 			else{
// 				cout<<"Tie"<<endl;

// 			}
// 		}

// 	}

// }

// #include <iostream>
// using namespace std;
// int main(){
// 	int t,n,k,a;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    cin>>n>>k;
// 	    int count =0,flag=0;
// 	    for(int i=0;i<n;i++)
// 	    {
// 	        cin>>a;
// 	        if(count+a>=k)
// 	        count+=a-k;
// 	        else if(flag==0)
// 	        flag=i+1;
// 	    }
// 	    if(flag>0)
// 	    cout<<"NO "<<flag<<endl;
// 	    else
// 	    cout<<"YES"<<endl;
// 	}
// 	return 0;
// }
// DOUBT***
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		int n;cin>>n;
// 		string s;
// 		cin>>s;int count=0;
// 		for (int i = 0; i < n; i++)
// 		{
// 			if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')){
// 				continue;
// 			}
// 			else{
// 				count++;
// 				// if(count>=4){
// 				// 	break;
// 				// }
// 			}
// 		}
// 		if(count<=4){
// 			cout<<"Yes"<<endl;
// 		}
// 		else{
// 			cout<<"No"<<endl;
// 		}

// 	}

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		int n,k;cin>>n>>k;
// 		for (int i = 1; i <= n; i++)
// 		{
// 			int a;cin>>a;
// 			if(k>=a){
// 				cout<<"1";
// 				k=k-a;
// 			}
// 			else{
// 				cout<<"0";
// 			}
// 		} cout<<endl;

// 	}

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		int n;cin>>n;
// 		int a[n];
// 		int b=0;
// 		for (int i = 0; i < n; i++)
// 		{
// 			cin>>a[i];
// 			b+=a[i];
// 		}
// 		if(b%2==0){
// 				cout<<"YES"<<endl;
// 			}
// 			else{
// 				cout<<"NO"<<endl;
// 			}
// 	}

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		int n;cin>>n;
// 		int a[2*n];int count=0;int i;
// 		for ( i = 0; i < 2*n; i++)
// 		{
// 			cin>>a[i];
// 			for (int j = i; j >=0;j--)
// 			{
// 				if(a[i]==a[j]){
// 					count++;
// 				}
// 			}

// 		}

// 		if(count>2){
// 			cout<<"No"<<endl;
// 		}
// 		else cout<<"Yes"<<endl;

// 	}

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		int n,k;cin>>n>>k;
// 		int a[n];
// 		for (int i = 0; i < n; i++)
// 		{
// 			cin>>a[i];
// 		}
// 		if(k>1){
// 			cout<<"YES"<<endl;
// 			// break;
// 		}
// 		else{
// 			int f = 0;
// 			for (int i = 0; i < n - 1; i++)
// 			{

// 					if(a[i]>a[i+1]){
// 						cout<<"NO"<<endl;
// 						f = 1;
// 						break;// continue;
// 					}

// 				}
// 				if(f==0)
// 				cout<<"YES"<<endl;

// 			}

// 		}

// 	}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while(t--){
// 	int n;cin>>n;
// 	int a[2*n];
// 	for (int  i = 0; i < 2*n; i++)
// 	{
// 		cin>>a[i];
// 	}
// 	int l = 2*n;
// 	sort(a, a+l);
// 	// for (int i = 0; i < n; i++)
// 	// {
// 	// 	// for (int j = 0; j < n-i-1; j++)
// 	// 	// {
// 	// 	// 	if(a[j]>a[j+1]){
// 	// 	// 		swap(a[j],a[j+1]);
// 	// 	// 	}
// 	// 	// }
// 	// 	cout<<a[i]<<" ";

// 	// }
// 	// cout<<endl;

// 	int prev = -1;
// 	int count=1;
// 	int f =0;
// 	for (int i = 0; i < 2*n; i++)
// 	{
// 		if(a[i]!=prev){
// 			// cout<<prev<<" "<<count<<endl;
// 			if(count > 2)
// 			{
// 				cout<<"No"<<endl;
// 				f = 1;
// 				break;
// 			}
// 			prev=a[i];
// 			count=1;
// 		}
// 		else{
// 				count++;
// 		}
// 	}
// 	if(count > 2 && f == 0)
// 	{
// 		cout<<"No"<<endl;
// 	}
// 	else if (f == 0)
// 	{
// 		cout<<"Yes"<<endl;
// 	}
// 	// cout<<prev<<" "<<count;
// 	}

// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int t;
// 	cin >> t;
// 	while (t--)
// 	{
// 		int n, k, b = 0, ct = 1;
// 		cin >> n >> k;
// 		int f = 0;
// 		int a[n];
// 		for (int i = 0; i < n; i++)
// 		{
// 			cin>>a[i];
// 		}

// 		for (int i = 0; i < n; i++)
// 		{

// 			b += a[i];
// 			if (b >= k)
// 			{
// 				f = 1;
// 				ct++;
// 				b -= k;
// 			}
// 			else
// 			{
// 				cout << "NO"
// 						 << " " << ct << endl;
// 				f = 0;
// 				break;
// 			}
// 		}
// 		if (f == 1)
// 		{
// 			cout << "YES" << endl;
// 			// break;
// 		}
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		int n,x;cin>>n>>x;
// 		// if((n%2==0)&&(x%2==0)||(n%2==0)&&(x==1)){
// 		// 	cout<<"YES"<<endl;
// 		// 	// break;
// 		// }
// 		// else if((n%2!=0)&&(x==1)){
// 		// 	cout<<"YES"<<endl;
// 		// }
// 		// if(x>1){
// 		// if((n%2==0)&&(x%2!=0)){
// 		// 	cout<<"YES"<<endl;
// 		// 	// break;
// 		// }
// 		// else if((n%2!=0)&&(x%2==0)||(n%2!=0)&&(x%2!=0)){
// 		// 	cout<<"NO"<<endl;
// 		// }
// 		// }
// 		if(x % 2 == 1 || n % 2 == 0) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }

// 	}

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		int n;cin>>n;
// 		string s;cin>>s;
// 		if(n%2==0){
// 			for (int i = 0; i < n ; i+=2)
// 			{
// 				swap(s[i],s[i+1]);

// 			}
// 		}
// 		else if(n%2!=0){
// 			for (int i = 0; i < n - 1; i+=2)
// 			{
// 				if(i>=n){
// 					continue;
// 				}
// 				else{
// 				swap(s[i],s[i+1]);

// 				}
// 			}
// 		}

// 		for(int i =0;i<n;i++){
// 	        s[i] = 'z'-(s[i]-'a');

// 	    }

// 		cout<<s<<endl;

// 	}

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		int A,B;cin>>A>>B;
// 		  int l = 0;
// 			int b = 0;
// 		for (int i = 1;; i++)
// 		{
// 			if(i%2!=0){
// 				l += i;
// 				if(l>A){
// 					cout<<"Bob"<<endl;
// 					break;
// 				}
// 			}
// 			else{
// 				b += i;
// 				if(b>B){
// 					cout<<"Limak"<<endl;
// 					break;
// 				}
// 			}
// 			// l=l+1;
// 		}

// 	}

// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int t;
// 	cin >> t;
// 	while (t--)
// 	{
// 		string s1, s2;
// 		cin >> s1 >> s2;
// 		int x = 0, count = 0;
// 		for (int i = 0; i < s1.length(); i++)
// 		{
// 			if (s1[i] != s2[i])
// 			{
// 				count++;
// 			}
// 			if ((s1[i] == '?' || s2[i] == '?') && (s1[i] != s2[i])){
// 				count--;
// 			}
// 			if(s1[i]=='?'||s2[i]=='?'){
// 				x++;
// 			}
// 		}

// 		cout<<count<<" "<<count+x<<endl;
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		int n;cin>>n;
// 		int a[n];
// 		for (int i = 0; i < n; i++)
// 		{
// 			cin>>a[i];
// 		}
// 		sort(a , a + n);
// 		int prev = -1;
// 		int count = 1;int b=0;
// 		for (int i = 0; i < n; i++)
// 		{
// 			if(a[i]!=prev){
// 			// cout<<prev<<" "<<count<<endl;

// 			prev=a[i];
// 			count=1;
// 		}
// 		else{
// 				count++;
// 		}
// 		if(b<=count){
// 				b = count;
// 			}
// 			else{
// 				b=b;
// 			}
// 		}
// 		// cout<<prev<<" "<<count;
// 		cout<<n-b<<endl;

// 	}

// }

// ****DOUBT****
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		int n;cin>>n;
// 		string s;
// 		cin>>s;
// 		sort(s.begin(),s.end());
// 		// cout<<s;
// 		int prev = -1;int count = 1;
// 		for (int i = 0; i < n; i++)
// 		{
// 			if(prev!=s[i]){
// 				prev = s[i];
// 				count = 1;
// 			}
// 			else{
// 				count++;
// 			}
// 		}
// 		if(count%2==0){
// 			cout<<"YES"<<endl;
// 		}
// 		else{
// 			cout<<"NO"<<endl;
// 		}

// 	}

// }

// ***DOUBT***
// #include<bits/stdc++.h>
// #include<string>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		int n;cin>>n;
// 		string s;
// 		cin>>s;
// 		int f = 0;int count=0;
// 		for (int i = 0; i < n; i++)
// 		{
// 			if(s[i]=='0'){
// 				f++;
// 				if(f==n){
// 					cout<<"0"<<endl;
// 					break;
// 				}
// 			}
// 			else{
// 				count++;
// 			  if(s[i]=='1'){
// 				s[i]='0';
// 			  }
// 				else{
// 					s[i]='0';
// 				}
// 			}
// 		}
// 		for (int i = 0; i < n; i++)
// 		{
// 			if(s[i]=='1'){
// 				s.erase(i);
// 				count++;
// 			}
// 		}
// 		cout<<count<<endl;

// 	}

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		int a,b,c,d,e;cin>>a>>b>>c>>d>>e;
// 		if(((a+b)<=d) && (c<=e)){
// 			cout<<"YES"<<endl;
// 		}
// 		else if(((c+b)<=d) && (a<=e)){
// 			cout<<"YES"<<endl;
// 		}
// 		else if(((a+c)<=d) && (b<=e)){
// 			cout<<"YES"<<endl;
// 		}
// 		else{
// 			cout<<"NO"<<endl;
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
// 		string s;
// 		cin>>s;
// 		sort(s.begin(),s.end());
// 		// cout<<s;
// 		int prev = -1;int count = 1;
// 		int f = 0;
// 		for (int i = 0; i < n; i++)
// 		{
// 			if(prev!=s[i]){
// 				if(count%2!=0 && prev != -1){
// 			f = 1;
// 			break;
// 		}
// 			prev = s[i];
// 		// cout<<prev<<" "<<count<<endl;
// 				count = 1;
// 			}
// 			else{
// 				count++;
// 			}
// 		}
// 		if(count % 2 != 0)f = 1;
// 		if(f == 0){
// 			cout<<"YES"<<endl;
// 		}
// 		else{
// 			cout<<"NO"<<endl;
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
// 		string s;
// 		cin>>s;
// 		sort(s.begin(),s.end());
// 		cout<<s;

// int arr[26] = {0};

// for(int i = 0; i < n; i++)
// {
// 	arr[s[i] - 'a'] = arr[s[i] - 'a'] + 1;
// }

// int f = 0;

// for(int i = 0; i < 26; i++)
// {
// 	if(arr[i] % 2 != 0)f = 1;
// }

// if(f == 0){
// 	cout<<"YES"<<endl;
// }
// else{
// 	cout<<"NO"<<endl;
// }
// 	}

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		long long int n;cin>>n;int x,y;
// 		if(n%2==0){
// 			y=x=n/2;
// 		}
// 		else{
// 			x=n/2; y = (n/2)+1;
// 		}
// 		int z = x*y;
// 		cout<<2*z<<endl;
// 	}

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		int n,m;cin>>n>>m;
// 		int x = n-1;
// 		if(x>=m) cout<<"YES"<<endl;
// 		else cout<<"NO"<<endl;
// 	}

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;

// 	while (t--)
// 	{
// 		int n;cin>>n;
// 		int a[32];int i = 0;

// 			while (n > 0) {

//         a[i] = n % 2;
//         n = n / 2;
//         i++;
//     }
// 		int b = 0;
// 		for ( i = 0; i < 32; i++)
// 		{
// 			b+=a[i];
// 		}
// 		if(b%2==0) cout<<"EVEN"<<endl;
// 		else cout<<"ODD"<<endl;

// 	}

// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int N;
//         cin >> N;

//         int TS = 0;
//         int MS = 0;

//         for (int i = 0; i < N; ++i) {
//             int power;
//             cin >> power;
//             TS += power;
//             MS = max(MS, power);
//         }

//         cout << max(TS - MS + 1, MS) << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     cin >> t;

//     while (T--) {
//         int n;
//         cin >> n;

//         int mWeight = 0;
//         int tpower = 0;

//         for (int i = 0; i < N; ++i) {
//             int power;
//             cin >> power;
//             tpower += power;
//             mWeight = max(mWeight, power);
//         }

//         cout << max(tpower - mWeight + 1, mWeight) << endl;
//     }

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		int x,y;cin>>x>>y;
// 		if(x<50){
// 			cout<<"Z"<<endl;
// 		}
// 		else if((x>=50)&&(y<50)){
// 			cout<<"F"<<endl;
// 		}

// 		else cout<<"A"<<endl;
// 	}

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		int n;cin>>n;
// 		string s;cin>>s;int count=0;
// 		int maxPresent = 0;

//     for (int i = 0; i < n; ++i) {
//         if (s[i] == '1') {
//             maxPresent++;
//         }
//     }

//     for (int i = 0; i < n; ++i) {
//         for (int j = i; j < n; ++j) {
//             int presentDays = 0;

//             for (int k = i; k <= j; ++k) {
//                 if (s[k] == '0') {
//                     presentDays++;
//                 } else {
//                     presentDays = -1;
//                     break;
//                 }
//             }
//             if (presentDays != -1) {
//                 maxPresent = max(maxPresent, maxPresent + presentDays);
//             }
//         }
//     }
//     cout<<maxPresent<<endl;
// }

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		int n;cin>>n;
// 		int a,b;
// 		if(n%2==0){
// 			a = b = n/2;
// 		}
// 		else{
// 			b=n/2;
// 			a = (n/2)+1;
// 		}

// 		int x = a*b;
// 		int y = 2*x;
// 		cout<<y<<endl;

// 	}

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		string s;cin>>s;
// 		int count=0;
// 		for (int i = 0; i < s.length(); i++)
// 		{
// 			if(s[i]=='>'){
// 				s[i]='<';
// 			}
// 			else if(s[i]=='<'){
// 				s[i]='>';
// 			}
// 		}

// 		for (int i = 0; i < s.length(); i++)
// 		{
// 			if((s[i]=='>') && (s[i+1]=='<')){
// 				count++;
// 			}
// 		}
// 		cout<<count<<endl;
// 	}

// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		int n;cin>>n;
// 		int p[n];
// 		for (int i = 0; i < n; i++)
// 		{
// 			cin>>p[i];
// 		}
// 		int x,y;
// 		for (int i = 0; i < n; i++)
// 		{
// 			if(p[i]==1){
// 				x=i;
// 			}
// 			else if(p[i]==n){
// 				y = i;
// 			}
// 		}
// 		int operation = x+((n-1)-y);

// 		if(x<y){
// 			cout<<operation<<endl;
// 		}
// 		else cout<<operation-1<<endl;
		
// 	}
	
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;cin>>t;
// 	while (t--)
// 	{
// 		int n;cin>>n;
// 		string a,b;cin>>a>>b; int x=0,y=0;
// 		if(a==b){
// 			cout<<"YES"<<endl;
// 		}
// 		else {
// 			for (int i = 0; i < n; i++)
// 			{
// 				if(a[i]=='1'){
// 					x++;
// 				}
// 				if(b[i]=='1'){
// 					y++;
// 				}
// 			}

// 			if(x!=y){
// 				cout<<"NO"<<endl;
// 			}
// 			else cout<<"YES"<<endl;
			
// 		}
// 	}
	
// }

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;


// void absDiff(ll a[],ll n){
// 	ll ct = 0; int f = 0;
// 	for (int i = 0; i < n; i++)
// 	{
// 		a[i] = abs(a[i]-a[i+1]);
// 	}
// 	// ct++;

// 	// for (ll i = 0; i < n; i++)
// 	// {
// 	// 	for (ll j = i+1; j < n; j++)
// 	// 	{
// 	// 		if(a[i]<a[j]){
// 	// 			f = 1;
// 	// 			break;
// 	// 		}
// 	// 	}
		
// 	// }
// 	// if(f==1) absDiff(a,n);
// 	// else cout<<ct<<endl;
	
// }

// int main(){
// 	ll t;cin>>t;
// 	while (t--)
// 	{
// 		ll n;cin>>n;
// 		int a[n];
// 		for (ll i = 0; i < n; i++)
// 		{
// 			cin>>a[n];
// 		}
// 		// ll ct = 0;

// 		// absDiff(a,n);
// 		for (ll i = 0; i < n; i++)
// 	{
// 		a[i] = abs(a[i]-a[i+1]);
// 	}
// 		for (ll i = 0; i < n; i++)
// 		{
// 			cout<<a[i]<<" ";
// 		}
		
		
		
// 	}
	
// }

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long maxsum(int n, vector<int>& arr) {
    vector<int> new;
    sort(arr.begin(), arr.end());
    
    for (int i = 0; i < 2 * n; i += 2) {
        new.push_back(min(arr[i], arr[i + 1]));
    }
    
    long long maxOfSum = 0;
    for (int i = 0; i< new.size();i++) {
        maxOfSum += new[i];
    }
    
    return maxOfSum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(2 * n);
        for (int i = 0; i < 2 * n; ++i) {
            cin >> arr[i];
        }

        long long result = maxsum(n, arr);
        cout << result << endl;
    }

    return 0;
}
