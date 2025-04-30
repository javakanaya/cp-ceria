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

// Fast I/O
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// Solution starts here
void solve() {
    // Write your solution here
    int nums[] = {12, 345, 2, 6, 7896};

    int evenDigit = 0;
    for (auto num : nums) {
        int digitCount = 0;
        while (num > 0) {
            digitCount++;
            num /= 10;
        }
        if (digitCount % 2 == 0) {
            evenDigit++;
        }
    }
    
    cout << "Result: " << evenDigit << "\n";
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