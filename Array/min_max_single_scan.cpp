#include <bits/stdc++.h>
using namespace std;

int main() {
  
int n;
cin>>n;                  

int a[n];


// 12 15 20 22 15 26 19 7

for(int i=0;i<n;i++)
{
  cin>>a[i];
}

int max=a[0];
int min=a[0];


for(int i=0;i<n;i++)
{
  if(a[i]>max)
  {
    max=a[i];
  }
  else if(a[i]<min)
  {

    min=a[i];
  }
}


cout<<"max : "<<max<<"  "<<"min : "<<" "<<min<<endl;

return 0;

}