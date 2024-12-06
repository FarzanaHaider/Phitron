#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

int main()
{
    int *a = new int[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    int *b = new int[5];
    for(int i=0;i<3;i++)
    {
        b[i] = a[i];
    }
    b[3]=40;
    b[4]=50;
    delete[] a;    // Deleting array a
    for(int i=0;i<5;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}
