#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

int main()
{
    list<int>l={10,20,30,40,50};
    
    cout<<l.back()<<endl;
    cout<<l.front()<<endl;
    cout<<*l.begin()<<endl;
    cout<<*next(l.begin(),2)<<endl;

    return 0;
}