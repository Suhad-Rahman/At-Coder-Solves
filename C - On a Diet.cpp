#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long


void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    
    int sum = 0;
    
    vector < int > a(n);
    vector < int > taken(n, 0);
    
    for (int &x : a) {
        cin >> x;
    }
    
    int j = 0;
    
    for (int i = 0; i < n; i++) {
        
        if ((i + 1) > m) {
            sum -= taken[j];
            j++;
        }
        
        if ((sum + a[i]) <= k) {
            cout << "Yes\n";
            sum += a[i];
            taken[i] = a[i];
        }
        else cout << "No\n";
    }
    
}


int32_t main() {
	optimize();
	
	solve();
	
return 0;
}
