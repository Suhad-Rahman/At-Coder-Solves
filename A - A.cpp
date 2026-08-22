#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long


void solve() {
    string s;
    cin >> s;
    
    string res = "";
    
    for (char &c : s) {
        if (c == 'A') res += 'A';
        else res += '.';
    }
    cout << res;
}


int32_t main() {
	optimize();
	
	 solve();
	
return 0;
}
