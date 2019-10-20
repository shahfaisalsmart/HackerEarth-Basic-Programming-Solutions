// Author: Mohammad Faisal
// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH SUBHANA-WA-TAALLAH
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n,m;
    cin >> n >> m;
    int * arr = new int[m+1];
    for(int i=1;i<=m;i++)
        arr[i] = 0;
        
    for(int i=0;i<n;i++)
    {
        int p,b;
        cin >> p >> b;
        
        if(arr[b] < p)
        {
            arr[b] = p;
        }
    }
    int sum =0;
    for(int i=1;i<=m;i++)
        sum+=arr[i];
      
    cout<<sum<<endl;
    return 0;
}
