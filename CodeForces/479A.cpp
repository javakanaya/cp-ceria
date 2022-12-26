#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;

    int res = a + b + c;
    res = max(res, (a + b) * c);
    res = max(res, a + b * c);
    res = max(res, a * (b + c));
    res = max(res, a * b + c);
    res = max(res, a * b * c);

    cout << res << endl;
}