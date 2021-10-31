// Author : Deepdarshan

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
#define For(i, a, n, k) for (ll i = a; i < n; i += k)
void solve();

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;

}

void solve()
{
    ll D, d, P, Q;
    cin >> D >> d >> P >> Q;
    ll amount = 0;
    int i = 1;
    if (D % d == 0)
    {
        amount = d * ((D / d) * P + Q * ((D / d - 1) * (D / d) / 2));
        cout << amount << endl;
    }
    else
    {
        ll temp;
        temp = D % d;
        amount = d * ((D / d) * P + Q * ((D / d - 1) * (D / d) / 2));
        // cout << "P " << P << endl;
        amount += (P + (D / d) * Q) * temp;
        cout << amount << endl;
    }
    // cout << amount << endl;
}