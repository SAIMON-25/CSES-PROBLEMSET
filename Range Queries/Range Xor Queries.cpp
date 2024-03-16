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
    int n,q;
    cin >> n >> q;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    vector<int>prefix(n+1);
    for(int i=1;i<=n;i++){
        prefix[i] = prefix[i-1] ^ v[i-1];
    }

    while(q--){
        int a,b;
        cin >> a >> b;
        cout<<(prefix[b] ^ prefix[a-1])<<endl;
    }
    return 0;
}