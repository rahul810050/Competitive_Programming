// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	vector<int> v;
// 	int n;cin>>n;
// 	for (int i = 0; i < n; i++)   // SIMPLE ITERATOR
// 	{
// 		int x;
// 		cin>>x;
// 		v.push_back(x);
// 	}

// 	vector<int> ::iterator it;
// 	for(it = v.begin();it!=v.end();it++){
// 		cout<<(*it)<<endl;
// 	}
	
// }

// NESTED ITERATOR

#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<pair<int,int>> v_p;
	int n;cin>>n;
	for (int i = 0; i < n; i++)
	{
		int x,y;cin>>x>>y;
		v_p.push_back({x,y});
	}
vector<pair<int,int>> ::iterator it;
  for (it = v_p.begin(); it != v_p.end(); it++)
	{
		cout<<(*it).first<<" "<<(*it).second<<endl;  // PRINTING VALUE USING ITERATOR BY *
		cout<< (it->first)<<" "<<(it->second)<<endl;  // PRINTING VALUE USING ITERATOR BY ARROW
	}
	
}