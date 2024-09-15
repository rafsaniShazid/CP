// Author: RafsaniShazid
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forr(i, j, k) for(ll i = j; i < k; i++)
#define rforr(i, j, k) for(ll i = j; i >= k; i--)
#define all(v) v.begin(), v.end()

typedef vector<ll> vl;
typedef vector<int> vi;

void solve()
{
    int n; cin>>n;
    string s="aeiou";
    forr(i,0,5){
        cout<<string((n/5)+(n%5!=0 && n%5>i),s[i]); // string(n,s[i]) means repeat s[i] character for n times.
      // check bellow for details
      // https://chatgpt.com/share/66e68fa5-4a20-8010-8c2c-1cdb92f226ab
    }
    cout<<"\n";
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    ll t; cin>>t;
    while(t--)
{
    solve();
}
    return 0;
}
// https://codeforces.com/contest/2005/problem/A
