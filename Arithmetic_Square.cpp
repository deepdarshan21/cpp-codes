#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double lf;
typedef pair<ll, ll> ii;
#define REP(i, n) for (ll i = 0; i < n; i++)
#define REP1(i, n) for (ll i = 1; i <= n; i++)
#define FILL(i, n) memset(i, n, sizeof i)
#define X first
#define Y second
#define SZ(_a) (int)_a.size()
#define ALL(_a) _a.begin(), _a.end()
#define pb push_back
#ifdef brian
#define debug(...)                                                                       \
    do                                                                                   \
    {                                                                                    \
        fprintf(stderr, "%s - %d (%s) = ", __PRETTY_FUNCTION__, __LINE__, #__VA_ARGS__); \
        _do(__VA_ARGS__);                                                                \
    } while (0)
template <typename T>
void _do(T &&_x)
{
    cerr << _x << endl;
}
template <typename T, typename... S>
void _do(T &&_x, S &&..._t)
{
    cerr << _x << " ,";
    _do(_t...);
}
template <typename _a, typename _b>
ostream &operator<<(ostream &_s, const pair<_a, _b> &_p) { return _s << "(" << _p.X << "," << _p.Y << ")"; }
template <typename It>
ostream &_OUTC(ostream &_s, It _ita, It _itb)
{
    _s << "{";
    for (It _it = _ita; _it != _itb; _it++)
    {
        _s << (_it == _ita ? "" : ",") << *_it;
    }
    _s << "}";
    return _s;
}
template <typename _a>
ostream &operator<<(ostream &_s, vector<_a> &_c) { return _OUTC(_s, ALL(_c)); }
template <typename _a>
ostream &operator<<(ostream &_s, set<_a> &_c) { return _OUTC(_s, ALL(_c)); }
template <typename _a, typename _b>
ostream &operator<<(ostream &_s, map<_a, _b> &_c) { return _OUTC(_s, ALL(_c)); }
template <typename _t>
void pary(_t _a, _t _b)
{
    _OUTC(cerr, _a, _b);
    cerr << endl;
}
#define IOS()
#else
#define debug(...)
#define pary(...)
#define endl '\n'
#define IOS()                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#endif // brian
//}

int main()
{
    int t;
    cin >> t;
    int test = 1;
    while (t--)
    {
        ll G[3][3];
        cin >> G[0][0] >> G[0][1] >> G[0][2];
        cin >> G[1][0] >> G[1][2];
        cin >> G[2][0] >> G[2][1] >> G[2][2];
        // cout << G[0][0] << " " << G[0][1] << " " << G[0][2] << endl;
        // cout << G[1][0] << "   " << G[1][2] << endl;
        // cout << G[2][0] << " " << G[2][1] << " " << G[2][2] << endl;
        int cnt = 0;

        if ((2 * G[0][1]) == (G[0][0] + G[0][2]))
        {
            cnt++;
        }
        if ((2 * G[2][1]) == (G[2][0] + G[2][2]))
        {
            cnt++;
        }
        if ((2 * G[1][0]) == (G[0][0] + G[2][0]))
        {
            cnt++;
        }
        if ((2 * G[1][2]) == (G[0][2] + G[2][2]))
        {
            cnt++;
        }
        // cout << cnt << endl;
        ll a1, a2, a3, a4;
        a1 = (G[1][0] + G[1][2]) / 2;
        // cout << "a1=" << a1 << endl;
        a2 = (G[0][1] + G[2][1]) / 2;
        // cout << "a2=" << a2 << endl;
        a3 = (G[0][0] + G[2][2]) / 2;
        // cout << "a3=" << a3 << endl;
        a4 = (G[2][0] + G[0][2]) / 2;
        // cout << "a4=" << a4 << endl;
        set<ll> s = {a1, a2, a3, a4};
        // cout << s.size() << endl;
        cnt += 4 - s.size() + 1;
        cout << "Case #" << test++<<": " << cnt << endl;
    }
}