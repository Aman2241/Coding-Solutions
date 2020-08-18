/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve(ll n,ll k)
{
    int a[n];
    ll max=INT_MAX,answer;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
        
        if(a[i]<=k)
        {
            if(k%a[i]==0)
            {
                ll x=k/a[i];
                
                
                if(x<max)
                {
                    max=x;
                    answer=a[i];
                }
            }
        }
    }
    
    
    if(max==INT_MAX)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<answer<<endl;
    }
    
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       ll n,k;
       cin>>n>>k;
       
       solve(n,k);
    }

    return 0;
}
