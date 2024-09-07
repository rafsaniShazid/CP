// square root using binary search
#include<bits/stdc++.h>
typedef long long ll;
#define forr(i, j, k) for(ll i = j; i < k; i++)
#define eps .0001
using namespace std;
int main(){
    double x; cin>>x;
    if(x<0){
        cout<<"Can't find root of a negative number\n";
        return 0;
    }
    double lo=1; double hi= x,mid;
    while(hi-lo>eps)
    {
        mid= (lo+hi)/2;
        if(mid*mid<x) lo=mid;
        else{ hi= mid;}
    }
    if(abs(ceil(mid)-mid)<eps) mid= ceil(mid);
    if(abs(floor(mid)-mid)<eps) mid= floor(mid);
    cout<< setprecision(6)<< mid;
    return 0;
}
