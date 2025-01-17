#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

int main()
{
    opt();
    int n,q;
    cin>>n>>q;

    vector<ll>v(n);
    vector<ll>p(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    p[0]=v[0];
    for(int i=1;i<n;i++)
    {
        p[i]=p[i-1]+v[i];
    }

    while(q--)
    {
        int l,r;
        cin>>l>>r;
        l--,r--;
        if(l>0)
        cout<<p[r]-p[l-1]<<endl;
        else cout<<p[r]<<endl;
    }
}