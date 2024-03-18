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

    string s;
    cin >> s;

    sort(s.begin(), s.end());
    vector<string> ans;

    do
    {
        ans.push_back(s);
    } while (next_permutation(s.begin(), s.end()));

    cout << ans.size() << endl;

    for (auto x : ans)
        cout << x << endl;
    
    return 0;
}