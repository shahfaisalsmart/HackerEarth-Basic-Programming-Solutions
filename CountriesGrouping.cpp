// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        map<int,int> group;
        int count1=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            group[x]++;
            if(x==1){
                count1++;
            }
        }
        map<int,int>:: iterator it;
        bool flag=true;
        int c=0;
        for(it=group.begin();it!=group.end();it++)
        {
            if(it->first==1)
                continue;
            if(it->first!=it->second)
            {
                flag=false;
                if((it->second)%(it->first)==0)
                {
                    c+=((it->second)/(it->first))-1;
                    flag=true;
                }
                //break;
            }
            // cout<<it->first<<" "<<it->second<<endl;
        }
        // cout<<"count1: "<<count1<<" "<<endl;
        if(flag==false)
            cout<<"Invalid Data"<<endl;
        else
        {
            int ans = group.size();
            if(ans==1 && count1<=1)
            {
                cout<<ans+c<<endl;
            }
            else if(ans==1 && count1>1)
            {
                cout<<count1+c<<endl;
            }
            else if(ans >=1 && count1>0){
                cout<<ans+(count1-1)+c<<endl;
            }
            else
            {
            	cout<<ans+c<<endl;
            }
        }
    }
    return 0;
}
