
    int n,k;cin>>n>>k;
    vi arr(n);ia(arr,n);
    vi ok(n-1,0);

    forr(i,0,n-1){
        ok[i]=(arr[i]<2*arr[i+1]);
    }
    int cnt=0;
    int ans=0;
    // storing the elements of the first slide
    forr(i,0,k){
        if(ok[i])cnt++;
    }
    if(k==cnt)ans++;
// sliding the window
    forr(i,k,n-1){
        cnt+=ok[i];
        cnt-=ok[i-k];
        if(cnt==k)ans++;
    }
    cout<<ans<<nl;
// https://codeforces.com/problemset/problem/1692/G
