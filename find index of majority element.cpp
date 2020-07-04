#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    int res=0, cnt=1;

    //the first loop finds the index of the majority element which and stores it in res
    for(int i=1; i<n; i++){
        if(v[i]==v[res]) cnt++;
        else cnt--;
        if(cnt==0){
            res=i;
            cnt=1;
        }
    }

    //the second loop finds whether the majority element is really a majority element
    cnt=0;
    for(int i=0; i<n; i++){
        if(v[i]==v[res])
            cnt++;
    }
    if(cnt<=n/2)
        res=-1;
    cout<< res;
    return 0;
}
