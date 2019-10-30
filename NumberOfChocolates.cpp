// Author:: Mohammad Faisal
// Email:: mohammad.faisal78612@gmail.com
// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int a,b,d1,d2;
    cin >> a >> b >> d1 >> d2;
    
    int temp = (a%d1==0) ? (a/d1) : (a/d1)+1;
    
    int inc = temp*d2;
    
    cout<<inc+b<<endl;
    return 0;
}
