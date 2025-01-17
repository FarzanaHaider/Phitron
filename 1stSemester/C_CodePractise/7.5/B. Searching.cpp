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
    }

    int x,found=0;
    cin>>x;

    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            cout<<i;
            found=1;
            break;
        }
    }
    if(found==0) cout<<-1;

}
