#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maxo=0;
    sort(a,a+n);
    for(i=0;i<n-1;i++)
    {
        int s=a[i]%a[n-1];
        if(s>maxo)
            maxo=s;
    }
    cout<<maxo<<endl;
    return 0;
}
