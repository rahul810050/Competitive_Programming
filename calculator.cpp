#include<bits/stdc++.h>
using namespace std;
int main(){
	int a , b;
	char operators;
	cout<<"Enter an operator"<<endl;
	cin>>operators;
	cout<<"Enter two operants"<<endl;
	cin>>a>>b;
	switch (operators)
	{
	case '+':
		cout<< a + b<<endl;
		break;
	
	case '-':
		if(a>b){
			cout<<a-b<<endl;
		}
		else{
			cout<<b-a<<endl;
		}
		break;
	case '*':
		cout<<a*b<<endl;
	break;
	case '/':
		cout<<a/b<<endl;
		break;

	default:
	cout<<"Error...Please provide a valid operator"<<endl;
		break;
	}

}