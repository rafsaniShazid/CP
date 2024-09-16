// This code will print diamond start pattern for any odd number
// greater than 1
#include<bits/stdc++.h>
typedef long long ll;
#define forr(i, j, k) for(ll i = j; i < k; i++)
using namespace std;
int main(){
    cout<<"Enter any odd number n (n>=3)\n";
    int n; cin>>n;
    int count=1;
    forr(i,0,n){
        forr(j,0,abs(n/2-i)) cout<<" ";
        forr(j,0,count) cout<<"*";
        (i<n/2)? count+=2:count-=2;
        forr(j,0,abs(n/2-i)) cout<<" ";
        cout<<"\n";
    }
    return 0;
}
