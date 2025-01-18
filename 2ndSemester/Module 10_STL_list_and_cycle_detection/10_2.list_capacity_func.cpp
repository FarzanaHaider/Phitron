#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

int main()
{
    list<int> l = {1,2,3,4,5};

    //Clear,empty Function:
    // l.clear();
    
    // if(l.empty())
    // {
    //     cout<<"Empty";
    // }

    //Resize function:
    l.resize(2);
    for(int val : l)
    {
        cout<<val<<endl;
    }

    l.resize(10);
    for(int val : l)
    {
        cout<<val<<endl;
    }

    return 0;

}