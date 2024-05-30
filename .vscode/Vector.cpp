// #include<bits/stdc++.h>
// using namespace std;

// void printVec(vector<int> v){
// 	cout<<"size: "<<v.size()<<endl;
// 	for (int i = 0; i < v.size(); i++)
// 	{
// 		cout<<v[i]<<" ";
// 	}
// 	cout<<endl;
// }
// void printVec(vector<string> v){
// 	cout<<"size: "<<v.size()<<endl;
// 	for (int i = 0; i < v.size(); i++)
// 	{
// 		cout<<v[i]<<" ";
// 	}
// 	cout<<endl;
// }

// int main(){
// 	// vector<int> v(5,9);
// 	vector<int> v;
// 	// int n;cin>>n;
// 	// for (int i = 0; i < n; i++)
// 	// {
// 	// 	int x;cin>>x;
// 	// 	printVec(v);
// 	// 	v.push_back(x);
// 	// }
// 	v.push_back(4);
// 	v.push_back(8);
// 	printVec(v);

// 	v.pop_back();
// 	printVec(v);
// 	// for (int i = 0; i < n; i++)
// 	// {
// 	// 	cout<<v[i]<<" ";
// 	// }

// }

// int main(){
// 	vector<string> v;
// 	int n;cin>>n;
// 	for (int i = 0; i < n; i++)
// 	{
// 		string s;cin>>s;
// 		v.push_back(s);
// 	}
// 	printVec(v);
// }

// int main(){
// 	vector<int> v;
// 	v.push_back(8);
// 	v.push_back(3);
// 	v.push_back(6);

// 	vector<int> v1 = v;  // O(n)---> AND IT ACTUALLY COPIES THE VECTOOR "V"
// 	vector<int> &v1 = v;  // O(n)---> IT MAKING COPY OF THE VECTOOR "V" BY REFERENCE
// 	v1.push_back(2);  // AND WHEN WE PUSH BACK VALUE IN IT THEN IT DOESNT CHANGE THE VALUE OF VECTOR "V"....
// 	printVec(v);
// 	printVec(v1);
// }

// #include <bits/stdc++.h>
// using namespace std;

// void printVec(vector<int> v)
// {
// 	cout << "Size: " << v.size() << endl;
// 	for (int i = 0; i < v.size(); i++)
// 	{
// 		cout << v[i] << " ";
// 	}
// 	cout << endl;
// }

// int main()
// {
// 	vector<vector<int> > v;
// 	int N;
// 	cin >> N;
// 	for (int i = 0; i < N; i++)
// 	{
// 		int n;
// 		cin >> n;
// 		vector<int> temp;
// 		for (int j = 0; j < n; j++)
// 		{
// 			int x;
// 			cin >> x;
// 			temp.push_back(x);
// 		}
// 		v.push_back(temp);
// 	}
// 	for (int i = 0; i < v.size(); i++)
// 	{
// 		printVec(v[i]);
// 	}
// }