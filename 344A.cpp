#include <iostream>
using namespace std;

int main()
{
    string word;
    int n;
    cin >>n;
    int length=word.length();
    int former_magnet=2;
    int groupnr = 0;
    for (int i=0; i<n; i++)
    {
           int magnet;
           cin >> magnet;

           if (magnet!=former_magnet)
               groupnr++;
           former_magnet=magnet;
    }
    cout << groupnr;
    cout << endl;
}
