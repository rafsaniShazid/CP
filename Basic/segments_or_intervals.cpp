// This method is helpful if you need to find overlapping range
// between adjacent segments
    int n,x;cin>>n>>x;
    vi arr(n);

    forr(i,0,n)cin>>arr[i];
    vi prev={arr[0]-x,arr[0]+x};
    int ans=0;

    forr(i,1,n){
        vi cur={arr[i]-x,arr[i]+x};
        vi overlap={max(prev[0],cur[0]), // overlap = max(l1,l2)->max(r1,r2)
            min(prev[1],cur[1])}; 
        if(overlap[0]<=overlap[1]){ // overlaps if (l<=r)
            prev=overlap;
        }
        else{
            ans++;
            prev=cur;
        }
    }
    cout<<ans<<nl;
//https://codeforces.com/problemset/problem/1704/B
