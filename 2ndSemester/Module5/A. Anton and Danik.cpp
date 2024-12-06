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

    string s;
    cin>>s;

    int a=0,d=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
            a++;
        else d++;
    }

    if(a>d) cout<<"Anton";
    else if(a<d) cout<<"Danik";
    else cout<<"Friendship";

}
