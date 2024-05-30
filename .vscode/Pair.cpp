#include<bits/stdc++.h>
using namespace std;
int main(){
	pair<int , string> p;
	p = make_pair(2, "Rahul");
	// cout<<p.first<<" "<<p.second;

	// pair<int ,string> p1 = p;  // IT IS JUST COPYING IT IF WE TRYY TO CHANGE THE VALUE OF FIRST OR SECOND IT WILL NOT CHANGE
	// pair<int ,string> &p1 = p;  // TAKING IT BY REFERENCE..IF MAKE ANY CHANGES THEN IT WILL WORK...
	// p1.first = 5;
	// cout<<p1.first<<" "<<p1.second;

	// ARRAY PAIR 
	pair<int,int> p_array[3];
	p_array[0] = {1,2};
	p_array[1] = {5,3};
	p_array[2] = {9,10};
	for (int i = 0; i < 3; i++)
	{
		cout<<p_array[i].first<<" "<<p_array[i].second<<endl;;
	}
	

}