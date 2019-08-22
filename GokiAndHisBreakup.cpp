// Author: Mohammad Faisal
/*
    Goki and his breakup[HackerEarth]
    Dated: 22-Aug-2019
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int skills;
    cin >> skills;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin >> x;
        (x>=skills) ? cout<<"YES":cout<<"NO";
        cout<<endl;
    }
    return 0;
}
