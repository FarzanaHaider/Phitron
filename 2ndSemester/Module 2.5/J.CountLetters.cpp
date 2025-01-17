#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

int main()
{
    opt();
    string s;
    cin>>s;

    map<char,int>c;
    for(int i=0;i<s.size();i++)
    {
        c[s[i]]++;
    }

    for(auto u:c)
    {
        cout<<u.first<<" : "<<u.second<<endl;
    }
}