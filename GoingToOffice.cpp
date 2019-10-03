// Author: Mohammad Faisal
// Beginning with the name of Almighty GOD ALLAH
// HackerEarth: Going To Office 
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    long long  oc,of,od;
    cin >> oc >> of >> od;
    long long cs,cb,cm,cd;
    cin >> cs >> cb >> cm >> cd;
    long long online = oc + (n-of)*od;
    long long classsic = cb;
    classsic+=floor(n/cs)*cm;
    classsic+=(n*cd);
    if(online<=classsic)
        cout<<"Online Taxi";
    else
        cout<<"Classic Taxi";
    
    return 0;
}
