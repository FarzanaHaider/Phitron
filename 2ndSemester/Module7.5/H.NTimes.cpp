#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

void solve(int a,char b)
{
    for(int i=0;i<a;i++)
    {
        cout<<b<<" ";
    }
    cout<<endl;
}

int main()
{
    opt();
    int t;
    cin>>t;

    while(t--)
    {
        int a;
        char b;
        cin>>a>>b;

        solve(a,b);

    }

}