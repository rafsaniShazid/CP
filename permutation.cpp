#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vector={0,1,2};
    do
    {
        for(auto i:vector) cout<<i<<" ";
        cout<<endl;
    }while(next_permutation(vector.begin(),vector.end()));

    return 0;
}