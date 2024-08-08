// generating subsets using bit manipulation
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=3;
    vector<vector<int>> subset(1<<(n));
    for(int b=0;b<(1<<n);b++){
        for(int i=0;i<n;i++)
            if(b&(1<<i)) subset[b].push_back(i);
    }
    for(int b=0;b<(1<<n);b++){
        for(int i=0;i<subset[b].size();i++)
            cout<<subset[b][i]<<" ";
            cout<<endl;
    }
    return 0;
}