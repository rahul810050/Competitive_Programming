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


#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while (t--)
	{
		int n;cin>>n;
		long long int fact=1;
		for (int i = 2; i <=n; i++)
		{
			fact = fact * i;
		}
		cout<<fact;
	}
	
}