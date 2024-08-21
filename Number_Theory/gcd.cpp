#include<bits/stdc++.h>
typedef long long ll;
#define forr(i, j, k) for(ll i = j; i < k; i++)
using namespace std;
int gcd(int a,int b){
    if(a%b==0) return b;
    a=a%b;
    gcd(b,a);
}
int main(){
    cout<<gcd(32,16);
    return 0;
}