#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

int main()
{
    opt();
    string s1,s2;
    getline(cin, s1);
    cin>>s2;

    int cnt=0;
    stringstream ss(s1);
    string word;
    while(ss>>word) 
    {
        if(word==s2)
            cnt++;
    }
    cout<<cnt<<endl;

}