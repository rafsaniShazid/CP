#include<bits/stdc++.h>
typedef long long ll;
#define forr(i, j, k) for(ll i = j; i < k; i++)
const int N= 1e7+10;
using namespace std;
int main(){
vector<bool> arr(N,true);
    // precomputation using sieve algorithm
    arr[0]=arr[1]=false;
    forr(i,2,N){
        if(arr[i]==true){
        for(int j=2*i;j<N;j+=i){
            arr[j]=false;
        }
        }
    }
    // Enter queries
    int q; cin>>q;
    while(q--){
        int n; cin>>n;
        cout<<n<<" : "<<((arr[n])? "prime\n":"not prime\n");
    }
    return 0;
}