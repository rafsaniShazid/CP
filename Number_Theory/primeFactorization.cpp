#include<bits/stdc++.h>
typedef long long ll;
#define forr(i, j, k) for(ll i = j; i < k; i++)
using namespace std;

#define MAXN 1e6+1
vector<int> spf(MAXN,1); // spf means smallest possible factor

void seive(int n){
    for(int i=2;i<=n;i++){
        // spf[i]==1 means it is prime .
        if(spf[i]==1){
            for(int j=i;j<=n;j+=i){
                // spf[j]==1 means its spf hasn't been found yet
                if(spf[j]==1) spf[j]=i;
            }
        }
    }
}
vector<int> getFactorization(int x){ 
    vector<int> ret;
    while(x!=1){
        ret.push_back(spf[x]);
        x/=spf[x];
    }
    return ret;
}

int main(){
    int n; cin>>n;
    seive(n);
    vector<int> arr=getFactorization(n);
    for(auto &i:arr) cout<<i<<" ";
    return 0;
}
