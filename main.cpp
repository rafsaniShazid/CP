#include<bits/stdc++.h>
using namespace std;
void printBinary(int num){
    for(int i=31;i>=0;i--){
        cout<< ((num>>i)&1);
    }
    cout<<endl;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int num_workers;
    cin>>num_workers;
    vector<int> masks(num_workers,0);
    for(int i=0;i<num_workers;i++){
        int work_days; cin>>work_days;
        int mask=0;
        for(int j=0;j<work_days;j++){
            int day;cin>>day;
            mask= (mask | (1<<day));
        }
        masks[i]=mask;
    }
    int mx=0;
    int person1=0;
    int person2=0;
    int countBits=0;
    for(int i=0;i<num_workers;i++){
        for(int j=i+1;j<num_workers;j++){
            int intersection= masks[i] &masks[j];
            countBits= __builtin_popcount(intersection);
            if(countBits>mx){
                person1=i; person2=j;
                mx= countBits;
            }       
        }
    }
    cout<<"person1 :"<<person1<<" person2 :"<<person2;
    cout<<"\nCommon days: "<<mx;
    return 0;
}