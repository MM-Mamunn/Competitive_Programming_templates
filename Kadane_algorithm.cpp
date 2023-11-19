
ll n;
cin>>n;
vi v(n);
forc(0,n)
  cin>>v[i];
ll cur=0,maxTillNow= 0;
forc(0,n);
  {
      cur+=v[i];
      maxTillNow=max(maxTillNow,cur);
      if(cur<0)
        cur=0;
  }
cout<<maxTillNow<<endl;