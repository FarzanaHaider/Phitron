#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();

        int f=s[0]-'0'+s[1]-'0'+s[2]-'0';
        int l=s[n-3]-'0'+s[n-2]-'0'+s[n-1]-'0';

        if(f==l)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    
}