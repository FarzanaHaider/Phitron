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

bool cmp(Student l,Student r)
{
    if(l.marks==r.marks)
    {
        return l.roll<r.roll;
    }
    else return l.marks<r.marks;
}

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
    sort(s,s+n,cmp);
    Student s[n];
    for(int i=0;i<n;i++)
    {
        cout<<s[i].name<<" "<<s[i].roll<<" "<<s[i].marks<<endl;
    }
}