#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

int main()
{
    opt();
    char a;
    cin>>a;

    if(isdigit(a))
        cout<<"IS DIGIT"<<endl;
    else
    {
        if(a>=65 && a<97)
        {
            cout<<"ALPHA"<<endl;
            cout<<"IS CAPITAL"<<endl;
        }
        else
        {
            cout<<"ALPHA"<<endl;
            cout<<"IS SMALL"<<endl;
        }
    }

}
