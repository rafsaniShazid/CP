// need to verify this with chatGPT
#include<bits/stdc++.h>
using namespace std;
int main(){
    char line[1000];
    while(gets(line))
    {
        stringstream ss(line);
        int num; vector<int> v;
        while(ss>>num) v.push_back(num);
        sort(v.begin(),v.end());
    }
    return 0;
}