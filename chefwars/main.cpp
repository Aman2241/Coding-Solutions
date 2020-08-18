/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#define ll long long int
using namespace std;
void solve(ll p,ll q)
{
         while(q>0)
      {
          if(p<=0)
          {
                break;
          }
          p=p-q;
          q=q/2;
      }
      
      if(p<=0)
     {
         cout<<1<<endl;
     }
     else
     {
         cout<<0<<endl;
     }
      
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      ll p,q;
      cin>>p>>q;
      
      solve(p,q);
   
      
   }

    return 0;
}
