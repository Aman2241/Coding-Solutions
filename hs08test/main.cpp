/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int x;
   float y;
   
   
   cin>>x>>y;
   
   
   if(x%5==0 && x<=y-0.50)
   {
       cout<<fixed<<setprecision(2)<<(y-x-0.50)<<endl;
   }
   else
   {
       cout<<fixed<<setprecision(2)<<y<<endl;
   }

    return 0;
}

