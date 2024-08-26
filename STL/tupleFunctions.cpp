// uncomment a particular portion and comment other portion
#include<bits/stdc++.h>
typedef long long ll;
#define forr(i, j, k) for(ll i = j; i < k; i++)
using namespace std;
int main(){
    // tuple<int,char,float> t1(14,'N',33.7);
    // tuple<int,char,float> t2(45,'F',35.7);
    // to swap to two tuples
    // t1.swap(t2);
    /* 
    cout<<get<0>(t1)<<"\n";
    cout<<get<1>(t1)<<"\n";
    cout<<get<2>(t1)<<"\n";
    cout<<get<0>(t2)<<"\n";
    cout<<get<1>(t2)<<"\n";
    cout<<get<2>(t2)<<"\n";   
    */

    // tuple decomposition.
    // this " tie" function will decompose the tuple
    // and assign them in the varibales inside the 'tie' function.
    // int x; char y; float z;
    // tie(x,y,z)=t1;
    // cout<<x<<" "<<y<<" "<<z<<"\n";

    /* tuple concatenation
    tuple<int,char> t1={25,'B'};
    tuple<char,float> t2={'A',78.9};
    auto t3= tuple_cat(t1,t2);
    cout<<get<0>(t3)<<" ";
    cout<<get<1>(t3)<<" ";
    cout<<get<2>(t3)<<" ";
    cout<<get<3>(t3)<<" ";      
    */


    return 0;
}
