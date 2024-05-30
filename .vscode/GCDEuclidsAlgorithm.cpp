// USING FUNCTION
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	cout<<__gcd(20,50);
// }

// USING EUCLID'S ALGORITHM

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int a,b; cin>>a>>b;
// 	int dividend = a >= b ? a : b;
// 	int divisor = a <= b ? a : b;

// 	while (divisor != 0)
// 	{
// 		int remainder = dividend % divisor;
// 		dividend = divisor;
// 		divisor = remainder;
// 	}
// 	cout<<dividend;
	
// }


#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<pair<int, int>> consignments(q);

        for (int i = 0; i < q; ++i) {
            cin >> consignments[i].first >> consignments[i].second;
        }

        sort(consignments.begin(), consignments.end());

        int totalDoses = 0;

        int minTime = -1;

        for (int i = 0; i < q; ++i) {
            totalDoses += consignments[i].second;
            
            if (totalDoses >= 2 * n) {
                minTime = consignments[i].first;
                break;
            }
        }

        cout << minTime << endl;
    }

    return 0;
}
