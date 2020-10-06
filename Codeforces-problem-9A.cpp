#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k=0;
    cin>>i>>j;
    if(i>j){
        for(int m=i;m<=6;m++){
            k++;
        }
    }
    else
    {
        for(int m=j;m<=6;m++){
            k++;
        }
    }
    if (k==0)
    {
        cout<<"0/1";
    }
    else if(k==6){
        cout<<"1/1";
    }
    else if(k==2 || k==3){
        cout<<1<<"/"<<6/k;
    }
    else if(k==4)
    {
        cout<<"2/3";
    }
    else
    {
        cout<<k<<"/"<<6;
    }
    
    
}
