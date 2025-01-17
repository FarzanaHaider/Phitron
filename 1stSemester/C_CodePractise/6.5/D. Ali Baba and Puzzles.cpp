#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

int main()
{
    opt();
    string s = "+-*";
    long long a,b,c,d,done=0;
    cin>>a>>b>>c>>d;

    /*for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a s[i] b s[j] c == d)
            {
                cout<<"YES";
                done = 1;
                break;
            }
        }
        if(done==1) break;
    }

    if(done==0)
        cout<<"NO";
    */

    if(a+b-c==d) cout<<"YES";
    else if(a+b*c==d) cout<<"YES";
    else if(a-b*c==d) cout<<"YES";
    else if(a-b+c==d) cout<<"YES";
    else if(a*b+c==d) cout<<"YES";
    else if(a*b-c==d) cout<<"YES";
    else cout<<"NO";

}
