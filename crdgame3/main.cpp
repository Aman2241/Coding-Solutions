/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
#define ll long long int
using namespace std;
/*
int count(ll x)
{
    int count1=0;
    
    while(x>0)
    {
        x=x%10;
        count1++;
        x=x/10;
    }
return count1;    
}

int sum(int m)
{
    int sum3=0;
    while(m>0 || sum3>9)
    {
        if(m==0)
        {
           m=sum3;
           sum3=0;
        }
        sum3=sum3+m%10;
        m=m/10;
    }
return sum3;    
}*/
void solve(ll m,ll n)
{

ll first=ceil(double(m)/9.0);
    
ll second=ceil(double(n)/9.0);


if(first>=second)
{
    cout<<1<<" "<<second<<endl;
}
else{
    cout<<0<<" "<<first<<endl;
}

}
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        ll m,n;
        cin>>m>>n;
        
        solve(m,n);
    }
    return 0;
}
