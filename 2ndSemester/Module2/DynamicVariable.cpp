#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

int main()
{
    int x = 10; // create stack memory which is static
    int *p = new int; // create heap memory which is dynamic and return address
    *p = 100;
    cout << *p <<endl;
    return 0;

}
