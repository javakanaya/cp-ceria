/**
 * @brief 
 * 
 * Competitive Programming Template
 * 
 * Includes common libraries, macros, and optimizations
 * needed for most competitive programming contests.
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <cmath>
#include <numeric>
#include <utility>
using namespace std;

// Type definitions for shorter coding
typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef set<int> si;
typedef map<int, int> mii;

// Macros for loops and common operations
#define REP(i, a, b) for (int i = a; i < b; i++)
#define REPI(i, a, b) for (int i = a; i <= b; i++)
#define REPR(i, a, b) for (int i = a; i > b; i--)
#define REPRI(i, a, b) for (int i = a; i >= b; i--)
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define ALL(x) x.begin(), x.end()
#define SZ(x) ((int)x.size())
#define INF 1000000007
#define MOD 1000000007

int myOwnGcd(int a, int b) {
    if (b == 0)
        return a;
    return myOwnGcd(b, a % b);
}

// Fast I/O
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// Solution starts here
void solve() {
    // Write your solution here
    string word1, word2;
    cin >> word1 >> word2;

    if (word1 + word2 == word2 + word1)
        cout <<  word1.substr(0, myOwnGcd(word1.length(), word2.length())) << endl;
    else
        cout << "" << endl;
}

int main() {
    fastIO();
    
    // For multiple test cases
    int tc = 1;
    // cin >> tc;  // Uncomment for input-driven test cases
    while (tc--) {
        solve();
    }
    
    return 0;
}

