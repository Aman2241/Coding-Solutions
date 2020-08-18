/******************************************************************************

Codeforce Problem-231(A)
*******************************************************************************/
#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    int k;
    cin>>k;
    int count=0;
    while(k--)
    {
    ll n,m,a;
    cin>>n>>m>>a;
    
    if(n==1 && m==1)
    {
        count++;
    }
    else if(n==1 && a==1)
    {
        count++;
    }
    else if(m==1 && a==1)
    {
        count++;
    }
    else if(n==1 && a==1 && m==1)
    {
        count++;
    }
    
    
    
    }
    
    cout<<count<<endl;
    return 0;
}
