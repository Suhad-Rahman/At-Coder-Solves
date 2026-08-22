#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long


void solve() {
    int n;
    cin >> n;
    
    vector < int > a(n);
    
    int sum = 0;
    
    for (int &x : a) {
        cin >> x;
        
        sum += x;
    }
    
    int ans = INT_MAX;
    int notch = 0;
    
    for (int i = 0; i < n; i++) {
        
        notch += a[i];
        
        int p1 = notch;
        int p2 = sum - notch;
        
        ans = min (ans, abs(p1 - p2));
    }
    cout << ans << "\n";
}


int32_t main() {
	optimize();
	
    solve();
	
return 0;
}
