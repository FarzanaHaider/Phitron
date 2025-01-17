#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int e=0,g=0,y=0,p=0,t=0;

    for(auto u:s)
    {
        if(u=='e' || u=='E')
        {
            e++;
        }
        else if(u=='g' || u=='G')
        {
            g++;
        }
        else if(u=='y' || u=='Y')
        {
            y++;
        }
        else if(u=='p' || u=='P')
        {
            p++;
        }
        else if(u=='t' || u=='T')
        {
            t++;
        }
    }

    int ans=min({e,g,y,p,t});

    cout<<ans;
}