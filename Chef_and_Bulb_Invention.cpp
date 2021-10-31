#include <bits/stdc++.h>
using namespace std;
#define For(i, a, n, k) for (int i = a; i < n; i += k)

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, p, k;
        cin >> n >> p >> k;
        int n_mod_k, n_divide_k, p_mod_k, p_divide_k;
        n_mod_k = n % k;
        n_divide_k = n / k;
        p_mod_k = p % k;
        p_divide_k = p / k;
        int ans = 0;
        ans = (n_divide_k * p_mod_k) + p_divide_k + 1;
        if (n_mod_k >= p_mod_k)
            ans += p_mod_k;
        else
            ans += n_mod_k;
        cout << ans << endl;
    }
    return 0;
}