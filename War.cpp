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
        int alice=INT_MIN;
        int bob = INT_MIN;
        for(int i=0;i<n;i++)   // BOb army ka maximum
        {
            int x;
            cin >> x;
            bob = max(bob,x);
        }
        for(int i=0;i<n;i++)   // ALice army ka maximum
        {
            int x;
            cin >> x;
            alice = max(alice,x);
        }
        if(alice > bob)
            cout<<"Alice"<<endl;
        else if(alice < bob)
            cout<<"Bob"<<endl;
        else
            cout<<"Tie"<<endl;
    }
    return 0;
}
