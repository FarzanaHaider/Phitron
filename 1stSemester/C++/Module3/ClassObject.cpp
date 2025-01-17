#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

class Student
{
public:
    char name[100];
    int roll;
    double gpa;
};

int main()
{
    Student a,b;
    cin.getline(a.name,100);
    cin>>a.roll>>a.gpa;
    cin.ignore();
    cin.getline(b.name,100);
    cin>>b.roll>>b.gpa;

    cout<<a.name<<" "<<a.roll<<" "<<a.gpa<<endl;
    cout<<b.name<<" "<<b.roll<<" "<<b.gpa<<endl;
    return 0;
}
