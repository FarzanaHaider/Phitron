#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

class Student
{
    public:
    int id;
    char name[100];
    char sec;
    int mark;
};

int main()
{
    opt();

    int t;
    cin>>t;

    while(t--)
    {
        Student a,b,c;
        cin>>a.id>>a.name>>a.sec>>a.mark;
        cin>>b.id>>b.name>>b.sec>>b.mark;
        cin>>c.id>>c.name>>c.sec>>c.mark;

        if(a.mark>=b.mark && a.mark>=c.mark)
        {
            cout<<a.id<<" "<<a.name<<" "<<a.sec<<" "<<a.mark<<endl;
        }
        else  if(b.mark>=c.mark && b.mark>a.mark)
        {
            cout<<b.id<<" "<<b.name<<" "<<b.sec<<" "<<b.mark<<endl;
        }
        else  if(c.mark>a.mark && c.mark>b.mark)
        {
            cout<<c.id<<" "<<c.name<<" "<<c.sec<<" "<<c.mark<<endl;
        }

    }

}
