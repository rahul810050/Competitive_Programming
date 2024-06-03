// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    char A,B,C,D,E,F;
// 	    cin>>A>>B>>C>>D>>E>>F;
// 	    if(A==B && B==C && A=='W'){
// 				cout<<"Y\ne;
// 			}
// 			else if(B==C&&C==D&&B=='W'){
// 				cout<<"y\ne;
// 			}
// 			else if(C==D&&D==E&&C=='W'){
// 				cout<<"y\ne;
// 			}
// 			else if(D==E&&E==F&&D=='W'){
// 				cout<<"y\ne;
// 			}
// 			else{
// 				cout<<"\nn;
// 			}
// 	}

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;
// 	cin>>t;
// 	while (t--)
// 	{
// 		int n,m;
// 		cin>>n>>m;
// 		int a[n],b[m];
// 		for (int i = 0; i < n; i++)
// 		{
// 			cin>>a[i];
// 		}
// 		for (int j = 0; j < m; j++)
// 		{
// 			cin>>b[j];
// 		}
		
// 		int len = 
// 		for (int i = ; i < m; i++)
// 		{
			
// 		}
		
		
// 	}
	
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// cout<<"enter the size of 1d array\n";
// int n;
// cin>>n;
// cout<<"enter the lowerR bound\n";
// int lowerR;
// cin>>lowerR;
// cout<<"enter the upper bound\n";
// int upper;
// cin>>upper;
// int arr[n];
// cout<<"enter the baseAddresssseAddressse address\n";
// int baseAddresssseAddressseAddress;
// cin>>baseAddresssseAddressseAddress;
// cout<<"enter the index to get its address\n";
// int index;
// cin>>index;
// int addr = (baseAddresssseAddressseAddress + ((index - lowerR) * sizeof(arr[0])));
// cout<<addr<<"\n";
// return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// cout<<"enter the size of 2d array\n";
// int x,y;
// cin>>x >> y;
// cout<<"enter the lowerR bound of row\n";
// int lowerR;
// cin>>lowerR;
// cout<<"enter the lowerR bound of column\n";
// int lowerC;
// cin>>lowerC;
// int arr[x][y];
// cout<<"enter the baseAddresssseAddressse address\n";
// int baseAddresssseAddress;
// cin>>baseAddresssseAddress;
// cout<<"enter the index to get its address\n";
// int i, j;
// cin>>i>>j;
// cout<<"1. row major \n 2. Column major\n";
// int choice;
// cin>>choice;
// if (choice == 1)
// {
// int addr = baseAddresssseAddress +((i - lowerR)*y + (j - lowerC))*sizeof(arr[0][0]);
// cout<<addr<<"\n";
// }
// else
// {
// int addr = baseAddresssseAddress + ((j - lowerR) * x + (i - lowerC))*sizeof(arr[0][0]);
// cout<<addr<<"\n";
// }
// return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// cout<<"enter the size of 3d array\n";
// int p, q, r;
// cin>>p>>q>>r;
// int arr[p][q][r];
// cout<<"enter the lower bound of row\n";
// int lowerR;
// cin>>lowerR;
// cout<<"enter the lower bound of column\n";
// int lowerC;
// cin>>lowerC;
// cout<<"enter the lower bound of plane\n";
// int lowerPlane;
// cin>>lowerPlane;
// cout<<"enter the baseAddress address\n";
// int baseAddress;
// cin>>baseAddress;
// cout<<"enter the index to get its address\n";
// int i, j, k;
// cin>>i>>j>>k;
// cout<<"1. row major \n2. column major\n";
// int choice;
// cin>>choice;
// if (choice == 1){
// int addr = baseAddress+((i - lowerPlane)*q*r+(j - lowerC)*r+(k-lowerR))*4;
// cout<<addr<<"\n";
// }
// else{
// int addr=baseAddress+((i - lowerPlane)*q*r+(k - lowerR)*q+(j-lowerC))*4;
// cout<<addr<<"\n";
// }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;
// 	cin>>t;
// 	while (t--)
// 	{
// 		int x;
// 		cin>>x;
// 		if(x<=100){
// 			cout<<x<<endl;
// 		}
// 		else if (x>100 && x<=1000)
// 		{
// 			cout<<x-25<<endl;
// 		}
// 		else if (x>1000 && x<=5000)
// 		{
// 			cout<<x-100<<endl;
// 		}
// 		else
// 		{
// 			cout<<x-500<<endl;
// 		}
		
		
// 	}
	
// }
// #include<bits/stdc++.h>
// using namespace std;;
// int main(){
// 	int n =3;
// 	int a[3];
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin>>a[i];
// 	}
// 	sort(a,a+n);
// 	cout<<a[1]<<endl;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int h,x,y1,k;
//         cin>>h>>x>>y1>>k;
//         while(k--){
//             int y2;
//             cin>>y2;
//             if(h>(x+y1+y2)){
//                 char gun;
//                 cin>>gun;
//                 int p = h-(x+y1+y2);
//                 if(gun==x){
                    
//                    if(p%x==0){
//                        cout<<p/x<<endl;
//                 }
//                 else{
//                     cout<<(p/x)+1<<endl;
//                 }
//                 if(gun==y2){
//                     if(p%y2==0){
//                         cout<<p/y2<<endl;
//                     }
//                     else{
//                         cout<<(p/y2)+1<<endl;
//                     }
//                 }
//             }
            
//         }
//     }
// }
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int x,y,k;
//         cin>>x>>y>>k;
//         if(x>y){
//             int p = x-y;
//             if(p%k==0){
//                 cout<<p/k<<endl;
//             }
//             else{
//                 cout<<p/k+1<<endl;
//             }
//         }
//         else{
//             int q = y-x;
//             if(q%k==0){
//                 cout<<q/k<<endl;
//             }
//             else{
//                 cout<<q/k+1<<endl;
//             }
//         }
//     }
    
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int h,x,y;
//         cin>>h>>x>>y;
//         if((h-y)%x==0){
//             cout<<(h-y)/x+1<<endl;
//         }
//         else{
//             cout<<(h-y)/x+2<<endl;
//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int a,b,c;
//         cin>>a>>b>>c;
//         int p = min(a,b);
//         int q = min(p,c);
//         cout<<(a+b+c)-q<<endl;
//     }
    
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin>>a[i];
//         }
//         int sum = 0;
//         for (int i = 0; i < n; i++)
//         {
//             sum = sum + a[i];
//             if (sum>0 && sum%2==0)
//             {
//                 cout<<sum/2<<endl;
//             }
//             else if(sum%2!=0 && ){
//                 cout<<-1<<endl;
//             }
//             else if(sum==0){
//                 cout<<sum<<endl;
//             }
            
//         }
        
//     }
    
// }
//  ********
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin>>a[i];
//         }
//         int sum = 0;
//         for (int i = 0; i < n; i++)
//         {
//             sum = sum + a[i];
//         }
//         if (sum%2==0) {
//                 cout<<sum/2<<endl;
//             }
//         else if(sum==0){
//             cout<<sum<<endl;
//         }
//         else{
//                 cout<<"-1"<<endl;
//             }
        
//     }
    
// }
// ******
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,maxdiff=0,lead=0,display=0;
//     cin>>n;
//     int a[n],b[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i],b[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         lead= lead+ a[i]-b[i];
//         if(abs(lead)>maxdiff){
//             maxdiff=abs(lead);
//             display=(lead>0)?1:2;
//         }
//         cout<<display<<endl;
//         cout<<maxdiff<<endl;
//     }
 
// }

