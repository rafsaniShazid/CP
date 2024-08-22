// Author: RafsaniShazid
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forr(i, j, k) for(ll i = j; i < k; i++)
#define rforr(i, j, k) for(ll i = j; i >= k; i--)
#define all(v) v.begin(), v.end()

typedef vector<ll> vl;
typedef vector<int> vi;

vector<int> arr(1e6+1);

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    ll t; cin>>t;
    for(int i=1;i<=1e6;i++){
            for(int j=i;j<=1e6;j+=i) 
            arr[j]++;
    }
    while(t--)
{
    int n; cin>>n;
    cout<<arr[n]<<"\n";
}
    return 0;
}
// https://cses.fi/problemset/task/1713/