#include <bits/stdc++.h>

using namespace std;

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    string s;
    int ans = 0;
    set<char> letters;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
      letters.insert(s[i]);
      if (letters.size() > 3) {
        letters.clear();
        ans++;
        letters.insert(s[i]);
      }
    }
    if (!letters.empty())
      ans++;

    cout << ans << endl;
  }
}
