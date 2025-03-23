    int n,x;cin>>n>>x;
    vi arr(n);

    forr(i,0,n)cin>>arr[i];
    vi prev={arr[0]-x,arr[0]+x};
    int ans=0;

    forr(i,1,n){
        vi cur={arr[i]-x,arr[i]+x};
        vi overlap={max(prev[0],cur[0]),
            min(prev[1],cur[1])};
        if(overlap[0]<=overlap[1]){
            prev=overlap;
        }
        else{
            ans++;
            prev=cur;
        }
    }
    cout<<ans<<nl;
//https://codeforces.com/problemset/problem/1704/B
