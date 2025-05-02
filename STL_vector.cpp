#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int>& v)
{
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v1 = {1, 4, 2, 3, 5};
    vector<int> v2 (3, 5);

    printVector(v1);
    printVector(v2);

    return 0;
}

