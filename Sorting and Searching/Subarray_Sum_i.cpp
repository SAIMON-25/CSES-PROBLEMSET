#include <bits/stdc++.h>
using namespace std;
#define saimon()                 \
    ;                            \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define endl '\n'
#define ll long long

int main()
{
    saimon();
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll sum = 0;
    int i = 0, j = 0, cnt = 0;
    while (i < n)
    {
        sum += v[i];
        while (sum >= x)
        {
            if (sum == x)
                cnt++;
            sum -= v[j];
            j++;
        }
        i++;
    }
    cout << cnt << endl;
    return 0;
}