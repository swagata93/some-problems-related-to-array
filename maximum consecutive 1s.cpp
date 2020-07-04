#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    int c=0, maxc=0;
    for(int i=0; i<n; i++){
        if(v[i]==1) c++;
        else{
            maxc=max(maxc,c);
            c=0;
        }
    }
    maxc=max(maxc,c);
    cout<< maxc;
    return 0;
}
