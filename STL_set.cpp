#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s = {3, 4, 5, 6, 9,1};
   
    for(auto x : s)
        cout<<x<<" ";
    
    return 0;
}