#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

int main()
{
    opt();
    int a,b,c;
    cin>>a>>b>>c;

    cout<<min({a,b,c})<<" ";
    cout<<max({a,b,c});

}
