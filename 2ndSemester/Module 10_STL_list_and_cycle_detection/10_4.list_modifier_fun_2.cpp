#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

int main()
{
    list<int> l = {1,2,3,4,5,6,7,8,9,10};

    //l.erase(next(l.begin(),2));
    //l.erase(next(l.begin(),2),next(l.begin(),5));

    //replace(l.begin(),l.end(),2,100);

    auto it = find(l.begin(),l.end(),2);
    if(it == l.end())
    {
        cout<<"Not found"<<endl;
    }
    else cout<<"Found"<<endl;

    for(auto each:l)
    {
        cout<<each<<endl;
    }

}