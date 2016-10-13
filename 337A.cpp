#include <string.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >>n >>m;
    vector<int> puzzles(m);
    for (int i=0; i<m; i++)
    cin >> puzzles[i];
    int diff;
    int biggest=*max_element(puzzles.begin(),puzzles.end());
    int smallest=*min_element(puzzles.begin(),puzzles.end());
    int mindiff =biggest - smallest;
    std::sort(puzzles.begin(),puzzles.end());
    for (int i=0; i<m-n+1;i++)
    {
        diff=puzzles[n+i-1]-puzzles[i];
        if (diff < mindiff)
            mindiff=diff;
    }

    cout <<mindiff;
    cout << "\n";
}
