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

    for(int i=1;i<=n;i++)
    {
        int x=n-i;
        int y=2*i-1;

       while(x--)
       {
           cout<<" ";
       }

       while(y--)
       {
           cout<<'*';
       }

       x=n-i;
       while(x--)
       {
           cout<<" ";
       }
       cout<<endl;
    }

}
