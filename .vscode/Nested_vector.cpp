// #include<bits/stdc++.h>
// using namespace std;

// void printVec(vector<pair<int,int> > v){
// 	cout<<"Size: "<<v.size()<<endl;
// 	for (int i = 0; i < v.size(); i++)
// 	{
// 		cout<<v[i].first<<" "<<v[i].second<<endl;
// 	}
	
// }


// BASIC NESTING...
// int main(){
// 	// vector<pair<int,int> > v = {{1,2},{3,4},{5,6}};
// 	vector<pair<int,int> > v;
// 	printVec(v);

// 	int n;cin>>n;
// 	for (int i = 0; i < n; i++)
// 	{
// 		int x,y; cin>>x>>y;
// 		// v.push_back(make_pair(x,y));  // WE CAN ALSO TAKE INPUT LIKE THIS
// 		v.push_back({x,y});
// 	}

// 	printVec(v);

// }


// void printVec(vector<int> v){
// 	cout<<"Size: "<<v.size()<<endl;
// 	for (int i = 0; i < v.size(); i++)
// 	{
// 		cout<<v[i]<<" ";
// 	}
// 	cout<<endl;
// }

// ARRAY OF VECTOR
// int main(){
	
// 	int N; cin>>N;       
// 	vector<int> v[N];     // ARRAY OF VECTOR
// 	for (int i = 0; i < N; i++)
// 	{
// 		int n;cin>>n;
// 		for (int j = 0; j < n; j++)
// 		{
// 			int x; cin>>x;
// 			v[i].push_back(x);
// 		}
// 	}
// 	for (int i = 0; i < N; i++)
// 	{
// 		printVec(v[i]);
// 	}
	
// }

// VECTOR OF VECTOR
// int main(){
	
// 	int N; cin>>N;       
// 	vector<vector<int>> v; 
// 	for (int i = 0; i < N; i++)
// 	{
// 		int n;cin>>n;
// 		vector<int> temp;
// 		// v.push_back(vector<int> ());
// 		for (int j = 0; j < n; j++)
// 		{
// 			int x; cin>>x;
// 			temp.push_back(x);
// 			// v[i].push_back(x);
// 		}
// 		v.push_back(temp);
// 	}

// 	for (int i = 0; i < v.size(); i++)
// 	{
// 		printVec(v[i]);
// 	}
	
// }


#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> vec){
	cout<<"size: "<<vec.size()<<endl;
	for (int i = 0; i < vec.size(); i++)
	{
		cout<<vec[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int N; cin>>N;
	vector<vector<int>> v;

	for (int i = 0; i < N; i++)
	{
		int n; cin>>n;
		vector<int> temp;

		for (int i = 0; i < n; i++)
		{
			int x; cin>>x;
			temp.push_back(x);
		}
		v.push_back(temp);
		
	}

	for (int i = 0; i < v.size(); i++)
	{
		printVec(v[i]);
	}
	
	
}