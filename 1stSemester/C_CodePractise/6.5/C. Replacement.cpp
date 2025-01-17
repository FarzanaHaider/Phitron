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
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0) cout<<0<<" ";
        else if(a[i]>0) cout<<1<<" ";
        else cout<<2<<" ";
    }
}
