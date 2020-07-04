#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    for(int i=1; i<n; i++){
        if(v[i]!=v[i-1]){
            if(v[i]!=v[0])
                cout<< "from index "<< i << " to index ";
            else cout<< i-1<< endl;
        }
    }
    if(v[n-1]!=v[0])
        cout<< n-1<< endl;
    return 0;
}
