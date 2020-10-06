#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t[2000],sum=0,count=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>t[i];
    }
    sort(t,t+n);
    for(int i=0;i<m;i++){
        sum+=t[i];
        // cout<<sum<<" "<<count<<endl;
        if(sum<=count)
            count=sum;
        else 
            break;
    }
    if(count<0)
        cout<<-count;
    else
        cout<<count;
    return 0;
}
