#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

class Student
{
    public:
    string name;
    int roll;
    int marks;
};

int main()
{
    opt();
    int n;
    cin>>n;
    Student s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i].name>>s[i].roll>>s[i].marks;
    }
    reverse(s,s+n);
    for(int i=0;i<n;i++)
    {
        cout<<s[i].name<<" "<<s[i].roll<<" "<<s[i].marks<<endl;
    }
}
