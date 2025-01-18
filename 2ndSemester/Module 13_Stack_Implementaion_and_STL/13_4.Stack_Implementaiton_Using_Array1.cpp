#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

class myStack
{
    public:
        vector<int>v;
    
    void push(int val)                   //O(1)
    {
        v.push_back(val);
    }

    void pop()                   //O(1)
    {
        v.pop_back();
    }

    int top()                           //O(1)
    {
        return v.back();
    }

    int size()                          //O(1)
    {
        return v.size();
    }

    bool empty()                        //O(1)
    {
        return v.empty();
    }
};

int main()
{
    
    myStack st;   //static object nilei hobe karon function gulo te amra notun kono stack create korchi na
    st.push(10);
    st.push(20);
    st.push(30);

    if(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }

    if(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }

    return 0;

}