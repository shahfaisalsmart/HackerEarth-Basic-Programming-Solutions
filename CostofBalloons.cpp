// Author: Mohammad Faisal
/*
    Cost of Ballon 
    category: basic programming
    Dated: 22-Aug-2019
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l=0,r=0;
        int g,p;
        cin >> g >> p;
        int n;
        cin >> n;
        while(n--)
        {
            int a,b;
            cin >> a >> b;
            if(a==1)
                l++;
            if(b==1)
                r++;
        }
        
        cout<< max(l,r)*min(g,p) + min(l,r)*max(g,p)<<endl;
    }
    return 0;
}
