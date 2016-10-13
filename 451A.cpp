#include <string.h>

#include <vector>
#include <iostream>
#include <algorithm>
//std::reverse(str.begin(), str.end());
using namespace std;

int main()
{
    int n, m;
    cin >>n >>m;
//    cout << min(n,m) << "\n";
    vector<int> puzzles(m);
    if (min(n,m)%2==1)
        cout << "Akshat" ;
    else
        cout << "Malvika";
    cout << "\n";
}
