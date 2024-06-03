#include<bits/stdc++.h>
using namespace std;
char upper(char c){
	return 'A'+(c-'a');
}
char lower(char c){
	return 'a'+(c-'A');
}
int main(){
	string str;
	cin>>str;
	for (int i = 0; i < str.size(); i++)
	{
		if(str[i]>='a'&&str[i]<='z'){
			str[i]=upper(str[i]);
		}
		else if(str[i]>='A'&& str[i]<='Z'){
			str[i]=lower(str[i]);
		}
	}
	int result = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if(str[i]>='a'&&str[i]<='z'){
			result-=str[i];
		}
		else if(str[i]>='A'&&str[i]<='Z'){
			result+=str[i];
		}
	}
	if(result<0){
		result= result*(-1);
	}
	// code for checking prime number
	int prime=0;
	for (int j = 2; j <result; j++)
	{
		if(result%j==0){
			prime=1;
			break;
		}
	}
	if(prime==0){
		cout<<1<<endl;
	}
	else{
		cout<<0<<endl;
	}
	
}