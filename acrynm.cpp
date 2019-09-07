// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   string* st = new string[n];
 
    for(int i=0;i<n;i++)
    {
        string t;
        cin >> t;
        st[i]=t;
    }
    int m;
    cin >> m;
 
    string* lis = new string[m];
 
    for(int j=0;j<m;j++)
    {
        string x;
        cin >> x;
        lis[j] = x;
    }
 
    for(int i=0;i<m;i++)
    {
        for(int j=0; j<n;j++)
        {
            if(st[j]==lis[i])
            {
                lis[i] = "-1";
            }
        }
    }
 
    // for(int i=0;i<m;i++)
    //     cout<<lis[i]<<" ";
    string y;
    for(int i=0;i<m;i++)
    {
        if(lis[i]=="-1")
            continue;
        string temp;
        temp = lis[i];
        y+=(char(temp[0]-32));
    }
    int len = y.size();
    for(int i=0;i<len;i++)
    {
        if(i==len-1)
            cout<<y[i];
        else
        {
        cout<<y[i]<<".";
        }
 
    }
    return 0;
}
