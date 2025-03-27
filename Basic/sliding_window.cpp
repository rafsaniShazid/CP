    int n,k;cin>>n>>k;
    string s;cin>>s;
    int l=0,r=0;
    int ans=n;
    int whites=0;

    while(r<n){
        if(s[r]=='W')whites++;
        // creating window of size k
        if((r-l+1)<k){
            r++;
            continue;
        }
        // sliding the window forward 
        ans=min(ans,whites); // counting the white elements within the slide 
        r++;
        if(s[r]=='W')whites--;
        l++;
    }
    cout<<ans<<nl;
//https://codeforces.com/contest/1690/problem/D
