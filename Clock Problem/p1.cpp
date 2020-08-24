#include<bits/stdc++.h>
using namespace std;
 
typedef vector <int> vi;
typedef pair< int ,int > pii;
#define endl "\n"
#define sd(val) scanf("%d",&val)
#define ss(val) scanf("%s",&val)
#define sl(val) scanf("%lld",&val)
#define debug(val) printf("check%d\n",val)
#define all(v) v.begin(),v.end()
#define PB push_back
#define MP make_pair
#define FF first
#define arr_ip for(int i=0;i<n;i++){cin>>a[i]}
#define arr_op for(int i=0;i<n;i++) {cout<<a[i]}
#define SS second
#define ll long long int
#define MOD 1000000007
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl; 
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 

void solve()
{
    ll h,m;
    char c;

    cin>>h>>c>>m;


    if(h>12)
    {
        h=h-12;
    }

    double hour_angle=0.5*(h*60+m);

    double min_angle= 6*m;

    double angle=abs(hour_angle-min_angle);

    angle=min(360-angle,angle);
                                                
    cout<<angle<<" "<<"degree"<<endl;                
    
    
    
                                                    //In 1 min hour hand moved by 0.5 degree(as in 12 hours moved by 360)

}                                                    //In 1 min minute hand moved by 6 degree

int main() 
{
 
 int t;
 cin>>t;
 while (t--)
 {
     /* code */
     solve();
 }
 
 
 
 
return 0;
   
}