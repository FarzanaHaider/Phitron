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

    int a = n%10;
    int b = n/10;

    if(a%b==0 || b%a==0)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
