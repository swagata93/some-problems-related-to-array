#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    int shouldbe, is;
    if(v[0]%2==0) shouldbe=1;
    else shouldbe=0;
    int c=1, maxc=1;
    for(int i=1; i<n; i++){
        is=v[i]%2;
        if(shouldbe==is){
            c++;
            maxc=max(maxc,c);
        }
        else c=1;
        if(v[i]%2==0) shouldbe=1;
        else shouldbe=0;
    }
    cout<< maxc;
    return 0;
}
