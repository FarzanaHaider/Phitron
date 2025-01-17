#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

int* p;

void fun()
{
    int x=10;
    p=&x;
    cout<<"Fun-> "<<*p<<endl;
    return;
}

int main()
{
    fun();
    cout<< "Main -> "<< *p <<endl;
    return 0;
}
