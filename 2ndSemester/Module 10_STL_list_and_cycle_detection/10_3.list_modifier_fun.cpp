#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long
# define endl '\n'

int main()
{
    //Copy or assign , push_back,push_front,pop_back,pop_front
    list<int> l = {10,20,30};
    list<int>l2;
    //l2 = l;
    l2.assign(l.begin(),l.end());

    // l.push_back(40);  //insert at tail Complexity:O(1
    // l.push_front(100);  //insert at head Complexity:O(1)
                            
    // l.pop_back();
    // l.pop_front();

    //Access the ith element
    //cout<<*next(l.begin(),2)<<endl;

    l.insert(next(l.begin(),2),100);  //Complexity: O(n+k) where k is the number of elements to be inserted
                                        //Complexity: O(n) if 1 element is inserted
                                        //ith position a jete complexity O(n) r insert er complexity O(1)
    //Full list or vector insert 
    list<int>l3={100,200};
    l.insert(next(l.begin(),2),l3.begin(),l3.end());
    for(int val:l)
    {
        cout<<val<<endl;
    }                   
    
    return 0;

}