#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

int main()
{
    stack<int>st;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        st.push(val);
    }

    if(!st.empty())
    {
        cout<<st.top()<<endl;
    }
    
    if(!st.empty())
    {
        st.pop();
    }

    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;

}