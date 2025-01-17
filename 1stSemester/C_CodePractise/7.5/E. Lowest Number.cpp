#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

int main()
{
    opt();
    int n;
    cin>>n;

    int a[n];
    int m = INT_MAX,j=0;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<m)
        {
            m=a[i];
            j=i+1;
        }
    }

    cout<<m<<" "<<j;

}
