#include <bits/stdc++.h>

using namespace std;

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];

    if (n % 2)
      cout << "Mike\n";
    else {
      int small = 0;
      for (int i = 1; i < n; i++) {
        if (a[i] < a[small])
          small = i;
      }
      if (small % 2)
        cout << "Mike\n";
      else
        cout << "Joe\n";
    }
  }
}