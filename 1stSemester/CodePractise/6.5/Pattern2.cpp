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

    for(int i=n;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

}
