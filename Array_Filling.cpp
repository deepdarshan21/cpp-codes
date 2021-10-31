/*
        𝐵𝓎:- 𝒟𝑒𝑒𝓅𝒹𝒶𝓇𝓈𝒽𝒶𝓃
*/
#include <bits/stdc++.h>
using namespace std;
#define For(i, a, n, k) for (ll i = a; i < n; i += k)
#define F first
#define S second
#define MP make_pair
#define PB push_back
typedef long long ll;
typedef vector<ll> vi;
typedef vector<vector<ll>> vii;
typedef vector<pair<int, int>> vpi;
typedef pair<int, int> pi;
typedef set<ll> si;
#define usi unordered_set<ll>
typedef map<ll, ll> mi;
typedef unordered_map<ll, ll> umi;
void solve();
bool sortcol(const vi &v1, const vi &v2) {
    return v1[0] > v2[0];
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        vi arr(n, 0);
        vii opr(m);
        For(i, 0, m, 1) {
            ll x, y;
            cin >> x >> y;
            opr[i].PB(x);
            opr[i].PB(y);
        }
        sort(opr.begin(), opr.end(), sortcol);
        For(i, 0, m, 1) {
            For(j, 0, n, 1) {
                if (arr[j] != 0 || (j + 1) % opr[i][1] == 0)
                    continue;
                arr[j] = opr[i][0];
            }
        }
        // for (auto i : arr) {
        //     cout << i << " ";
        // }
        // cout << "\n";
        int ans;
        ans = accumulate(arr.begin(), arr.end(), 0);
        cout << ans << "\n";
    }
    return 0;
}

// void solve() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll n, m;
//     cin >> n >> m;
//     vi arr(n, 0);
//     vii opr(m);
//     For(i, 0, m, 1) {
//         ll x, y;
//         cin >> x >> y;
//         opr[i].PB(x);
//         opr[i].PB(y);
//     }
//     sort(opr.begin(), opr.end(), sortcol);
//     For(i, 0, m, 1) {
//         For(j, 0, n, 1) {
//             if (arr[j] != 0 || (j + 1) % opr[i][1] == 0)
//                 continue;
//             arr[j] = opr[i][0];
//         }
//     }
//     // for (auto i : arr) {
//     //     cout << i << " ";
//     // }
//     // cout << "\n";
//     int ans;
//     ans = accumulate(arr.begin(), arr.end(), 0);
//     cout << ans << "\n";
// }