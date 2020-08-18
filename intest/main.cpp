/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,k;
   cin>>n>>k;
   
   int count=0;
   
   while(n--)
   {
       int x;
       cin>>x;
       
       if(x%k==0)
       {
           count++;
       }
   }
   
   cout<<count<<endl;

    return 0;
}
