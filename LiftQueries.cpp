// Author: Mohammad Faisal
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n;
    int ground=0;
    int top =7;
    while(t--)
    {
        cin >> n;
        if(abs(n-top) >= abs(n-ground))
        {
            cout<<'A';
            ground = n;
        }
        else if(abs(n-ground)>=abs(n-top))
        {
            cout<<'B';
            top=n;
        }
        cout<<endl;
    }
    return 0;
}
