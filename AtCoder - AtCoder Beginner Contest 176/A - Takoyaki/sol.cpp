#include <iostream>

using namespace std;

int main(){

    float n,x,t;

    cin>>n>>x>>t;

    int ans=0;
  
    
    while(n>=x)
    {
        n=n-x;
        ans+=t;
    }
    

    if(n<x && n!=0)
    {
        ans+=t;
    }
    cout<<ans<<endl;

    
    return 0;
}