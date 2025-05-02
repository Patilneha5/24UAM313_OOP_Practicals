#include <bits/stdc++.h>
using namespace std;

int main() {
    
    map<int, string> m {{1, "Neha"},
             {2,"Rajgonda"}, {3,"Patil"}};

    for (auto & p : m)
        cout << p.first << " " << p.second<< "\n";
    return 0;
}
