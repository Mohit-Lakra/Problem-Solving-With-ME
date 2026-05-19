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
  int n; cin >> n;
  string s; cin >> s;
  int l = 0, r = 0;
  for (char c : s) {
    if (c=='L') {
      l++;
    }
    else r++;
  }
  cout << l+r+1 << endl;
  return 0;
}
