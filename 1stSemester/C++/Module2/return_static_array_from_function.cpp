#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

int* fun()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    return a;
}

int main()
{
    int* x = fun();
    for(int i=0;i<5;i++)
    {
        cout<<x[i];
    }
    return 0;
}
