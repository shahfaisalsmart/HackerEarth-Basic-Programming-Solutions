///==================================================///
///               !! HELLO WORLD !!                  ///
///                 >>IT'S ME<<                      ///
///               MOHAMMAD FAISAL                    ///
///==================================================///
//THIS CODE IS IMPLEMENTED BY DUGGU_123(MOHAMMAD FAISAL)
// author: MOHAMMAD FAISAL (email: mohammad.faisal78612@gmail.com)
#include<bits/stdc++.h>
using namespace std ;
#define ll long long
#define ull unsigned long long int
#define ld long double
#define loop(x, n) for(ll x = 0; x < n; ++ x)
#define rep(x,n) for(ll x=1;x<=n;x++)
#define mp make_pair
#define pb push_back
#define I cin>>
#define O cout<<
#define W(x) while(x--)
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define sc(x) scanf("%s",x)
#define pc(x) printf("%s",x)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define F first
#define S second
#define inf 1e18
#define MAX 10000000
#define M 1000000007
#define prec(x) fixed<<setprecision(15)<<x
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define magic ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0)
#define XXX return 0;
#define br cout<<endl;
//const ll inf = 1000000000;
//const ll MOD = 1000000007;
vector<bool> chkprime (MAX,true);
unsigned primearray[5761459];


void n_primes(){
    chkprime[0]=chkprime[1]=false;
    for(unsigned i=2;i*i<=MAX;i++){
        if(chkprime[i]){
            for(unsigned j=i;j*i<=MAX;j++) chkprime[i*j]=false;
        }
    }
    unsigned id = 1;
    primearray[0]=2;

    for(int i=3;i<=MAX;i+=2){
        if(chkprime[i]){
            primearray[id++]=i;
        }     
    }
}

bool primity(long long n)
{
    if(n<=1)    
        return false;
    if(n<=3)    
        return true;
    
    if(n%2==0 || n%3==0)
        return false;

    for(auto i=5; i*i<=n; i+=6)
        if(n%i==0 || n%(i+2)==0)
            return false;

    return true; 
}

int power_x(int x, unsigned y)
{
    if(y==0)
        return 1;
    if(!(y&1))
        return power_x(x,y>>1)*power_x(x,y>>1);
    return x*power_x(x,y>>1)*power_x(x,y>>1); 
}

int order_x(long long x)
{
    int n=0;
    while(x)
    {
        n++;
        x/=10;
    }
    return n;
}

/*bool isArm(long long n)
{
    int pow=order_x(n);
    long long temp=n,sum=0;
    while(temp)
    {
        int r=temp%10;
        sum+=power_x(r,pow);
        temp/=10;
    }
    if(sum==n)
        return true;
    else 
        return false;
}*/

int main ()
{
	magic;
    /*
     
      O
     <C>
      /\
     
     */
    string s;
    I s;
    int a[7],j=0,flag=1,flag2=0;
    for(int i=0;s[i];i++)
    {
        if(i==2 || i==6)
            continue;
        else{
            a[j]=s[i]-48;j++;}
    }
 //   for(int i=0;i<7; i++)
 //       cout<<a[i]<<" ";
 //   br
    if(s[2]=='A' || s[2]=='E' || s[2]=='O'|| s[2]=='U' || s[2]=='I' || s[2]=='Y')
        flag=0;
    if(((a[0]+a[1])%2==0) && ((a[2]+a[3])%2==0) && ((a[3]+a[4])%2==0) && ((a[5]+a[6])%2==0))
        flag2=1;
   // O flag <<" "<<flag2;
    (flag==1 && flag2==1)?O "valid":O "invalid"; 
    XXX
}
