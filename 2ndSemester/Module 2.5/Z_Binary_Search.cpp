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
    vector<int>v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());

    while(q--)
    {
        int x;
        cin>>x;
        
        int l=0,r=v.size()-1,f=0;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(v[mid]==x) 
            {
                cout<<"found"<<endl;
                f=1;
                break;
            }
            else if(v[mid]>x)
            {
                r=mid-1;
            }
            else 
            {
                l=mid+1;
            }

        }
        if(f==0) cout<<"not found"<<endl;
    }
}