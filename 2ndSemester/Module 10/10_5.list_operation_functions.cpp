#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

int main()
{
    list<int>l = {20,30,10,50,30,60};
    
    //l.remove(10);

    //l.sort();
    //l.sort(greater<int>());

    //l.unique();  //sorted thakte hobe list

    l.reverse();

    for(auto each:l)
    {
        cout<<each<<endl;
    }
    return 0;

}