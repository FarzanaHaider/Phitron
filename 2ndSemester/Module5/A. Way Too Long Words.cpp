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

    while(n--)
    {
        string s;
        cin>>s;

        if(s.size()<=10)
        {
            cout<<s<<endl;
            continue;
        }

        cout<<s[0];
        int cnt=0;

        for(int i=1;i<s.size()-1;i++)
        {
            cnt++;
        }

        cout<<cnt<<s[s.size()-1]<<endl;
    }

}
