#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

int main()
{
    opt();
    string s;
    getline(cin,s);

    stringstream ss(s);
    string word;

    ss>>word;
    cout<<word;

    while(ss>>word)
    {
        reverse(word.begin(),word.end());
        cout<<" "<<word;
    }
    return 0;
}
