#include <bits/stdc++.h>
using namespace std;
#define For(i, a, n, k) for (int i = a; i < n; i += k)

/* void rankfinder(set<int> &S1, int size, int n)
{
    // set<int> S1(S.begin(), S.end());
    vector<int> S2(S1.begin(), S1.end());
    int p = upper_bound(S2.begin(), S2.end(), n) - S2.begin();
    cout << size - p + 1 << endl;
} */

int main()
{
    int n;
    cin >> n;
    set<int> ranked;
    For(i, 0, n, 1)
    {
        int a;
        cin >> a;
        ranked.insert(a);
    }
    int m;
    cin >> m;
    int *player = new int[m];
    int size = ranked.size();
    vector<int> S2(ranked.begin(), ranked.end());
    For(i, 0, m, 1)
    {
        cin >> player[i];
        int p = upper_bound(S2.begin(), S2.end(), player[i]) - S2.begin();
        cout << size - p + 1 << endl;
    }
}
