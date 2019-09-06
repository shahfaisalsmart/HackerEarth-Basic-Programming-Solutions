// Author: Mohammad Faisal
//Email: mohammad.faisal78612@gmail.com
// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-dice-d4dc5b11/#c196860
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int len = s.size();
    
    int six = count(s.begin(),s.end(),'6');
    
    if(s[len-1]=='6')
        cout<<"-1"<<endl;
    else 
        cout<<(len-six)<<endl;
    return 0;
}
