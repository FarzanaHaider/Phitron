#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }

}