// Author: Mohammad Faisal
// mohammad.faisal78612@gmail.com
#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t--){
int n,k,q,ans=0;
cin>>n>>k>>q;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
if(k==1)
{
ans=(*std::max_element(a,a+n));
}
else
{
ans=(*std::min_element(a,a+n));
}
if(ans<q)
{
cout<<ans<<endl;
}
else
{
cout<<"NO"<<endl;
}
}
}
