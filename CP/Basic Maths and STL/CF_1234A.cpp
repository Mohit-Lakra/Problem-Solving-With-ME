#include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <algorithm>

using namespace std;

// Fast I/O
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// Make int = long long
#define int long long

// Macros
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(), (v).end()
#define sz(v) ((int)(v).size())

// Constants
const int MOD = 1000000007;
const int INF = 1e18;

// Type aliases
typedef vector<int> vi;
typedef pair<int,int> pii;

// Main
int32_t main() {
  fastio();

  int t;
  cin >> t;

  while (t--) {
    int n; cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
      int x; cin >> x;
      sum += x;
    }
    if (sum % n == 0) {
      cout << sum/n << endl;
    } else {
      cout << sum/n + 1 << endl;
    }
  }
  return 0;
}
