// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.size();
    int j=0;
    int count=1;
    int * arr = new int[len];
    arr[0] = 1;
    for(int i=1;i<=len;i++)
    {
        if(s[i]!=s[j])
        {
            if(count ==0)
            {
                count=1;
            }
            count++;
            arr[i]=count;
            j++;
        }
        else
        {
            count=0;
            arr[i]=count;
            j++;
        }
    }
    // for(int i=0;i<len;i++)
    // 	cout<<arr[i]<<" ";
    // cout<<endl;
    cout<<*max_element(arr,arr+len)<<endl;
    delete[] arr;
    return 0;
}
