#include<bits/stdc++.h>
using namespace std;
int main(){
	time_t now = time(0);
	char *dt = ctime(&now);
	cout<<now<<endl;
	cout<<dt;
	tm *gmtm = gmtime(&now);
   dt = asctime(gmtm);
   cout << "The UTC date and time is:"<< dt << endl;
}