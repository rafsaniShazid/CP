// tuple with vectors
#include<bits/stdc++.h>
typedef long long ll;
#define forr(i, j, k) for(ll i = j; i < k; i++)
using namespace std;
int main(){
    int n; cin>>n;
vector<tuple<int,char,float>> v(n);

forr(i,0,n){
    int a; char b; float c;
    cin>>a>>b>>c;
    // get<0>(v[i])=a;
    // get<1>(v[i])=b;
    // get<2>(v[i])=c; or
    v[i]= make_tuple(a,b,c);
}
forr(i,0,n){
    cout<< get<0>(v[i])<<" "
    <<get<1>(v[i])<<" "<<
    get<2>(v[i])<<"\n";

}

    return 0;
}
