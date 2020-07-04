#include <bits/stdc++.h>

using namespace std;

/* Algorithm: 
1. calculate the maximum sum of the array not considering circular sum (Kadane's algorithm)
2. calculate the minimum sum of the array and subtract it from total sum of the array (using Kadane's algo only). it will give the maximum sum considering the circular part
3. result is maximum of these two
*/

//this function returns the maximum sum of the array
int max_normal_sum(vector<int>& a, int n){

    // me is used to store maximum sum at a particular index
    int me=a[0], res=a[0];
    for(int i=1; i<n; i++){
        me=max(a[i], me+a[i]);
        res=max(res,me);
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    int nsum=max_normal_sum(v, n);
    int res=0;
    
    //if maximum sum is 0 after calculating the normal sum, array contains only negative elements, no need to consider circular part
    if(nsum<0)
        res=nsum;
    else{
        int arr_sum=0;
        for(int i=0; i<n; i++){
            arr_sum+=v[i];
            v[i]=-v[i];
        }
        int csum=arr_sum+max_normal_sum(v, n); //calculating maximum circular sum
        res=max(nsum, csum);
    }
    cout<< res;
    return 0;
}
