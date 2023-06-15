#include"bits/stdc++.h"
using namespace std;
 
void solve() {
 int n; cin >> n;
 string s; cin >> s;
 int m[7][7] = {};
 for (int i = 1; i < n; i++) {
  m[s[i - 1] - 'a'][s[i] - 'a'] = 1;
 }
 int ans = 0;
 for (int i = 0; i < 7; i++) {
  for (int j = 0; j < 7; j++) {
   ans += m[i][j];
  }
 }
 cout << ans << '\n';
}
int main() {
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 int tc = 1;
 cin >> tc;
 while (tc--) {
  solve();
 }
 return 0;
}