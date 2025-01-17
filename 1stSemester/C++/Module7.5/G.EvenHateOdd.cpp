#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

int main()
{
    opt();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        int e=0,o=0;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2)
                o++;
            else e++;
        }

        if(n%2) 
        {
            cout<<-1<<endl;
            continue;
        }

        if(o==e)
            cout<<0<<endl;
        else 
        {
            cout<<abs(o-(n/2))<<endl;
        }

    }
    return 0;

}