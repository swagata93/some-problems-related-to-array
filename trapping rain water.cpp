#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    vector<int> lm(n);
    lm[0]=v[0];
    vector<int> rm(n);
    rm[n-1]=v[n-1];
    for(int i=1; i<=n-1; i++)
        lm[i]=max(lm[i-1],v[i]);
    for(int i=n-2; i>=0; i--)
        rm[i]=max(rm[i+1],v[i]);
    int res=0;
    for(int i=1; i<=n-2; i++)
        res+=min(lm[i],rm[i])-v[i];
    cout<<res;
    return 0;
}
