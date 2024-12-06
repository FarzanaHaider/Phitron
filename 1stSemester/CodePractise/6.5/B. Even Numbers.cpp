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

    if(n<=1) cout<<-1;
    else
    {
        int a=2;
        while(a<=n)
        {
            cout<<a<<endl;
            a+=2;
        }
    }

}
