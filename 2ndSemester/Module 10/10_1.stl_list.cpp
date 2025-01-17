#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

int main()
{
    //list<int>l;
    //list<int>l(10);  // 10 size er list create hobe
    // list<int> l(10,3); // 10 size er list and every value is 3
    //cout<<l[0]<<endl; avabe index diye print kora jabe na

    //cout<<l.size()<<endl;

    //Print list:
    // for(auto it=l.begin();it!=l.end();it++)
    // {
    //     cout<<*it<<endl;
    // }

    // for(int val : l)
    // {
    //     cout<<val<<endl;
    // }

    //Copy list:
    // list<int> l = {1,2,3,4,5};
    // list<int>l2(l);

    // for(int val : l2)
    // {
    //     cout<<val<<endl;
    // }

    //Copy array into a list:
    // list<int> l = {1,2,3,4,5};
    // int a[] = {10,20,30};
    // list<int>l2(a,a+3);

    // for(int val : l2)
    // {
    //     cout<<val<<endl;
    // }

    //Copy vector into a list:
    list<int> l = {1,2,3,4,5};
    vector<int>v = {10,20,30};
    list<int>l2(v.begin(),v.end());

    for(int val : l2)
    {
        cout<<val<<endl;
    }

    return 0;
}