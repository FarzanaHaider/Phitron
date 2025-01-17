#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;

        map<int,int>cnt;

        for(int i=0;i<s.size();i++)
        {
            cnt[s[i]]++;
        }

        int ans=0;
        for(auto u:cnt)
        {
            ans+=u.second+1;
        }
        cout<<ans<<endl;
    }
}