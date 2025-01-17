#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll,int cls,double gpa)
    {
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;
    }
};

int main()
{
    Student rahim(45,5,3.2);
    Student karim(2,5,5.0);

    cout<<rahim.roll<<" "<<rahim.gpa<<endl;
    cout<<karim.roll<<" "<<karim.gpa<<endl;
    return 0;
}
