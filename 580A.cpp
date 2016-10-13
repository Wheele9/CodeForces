#include <string.h>

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >>n ;
    int a,b=0;
    int gooddays=0;
    int max_GD=0;
    for (int i=0; i<n; i++)
    {
        cin >> a;
        if (a>=b)
        {
            gooddays++;
            if (gooddays > max_GD)
                max_GD = gooddays;
        }
        else
            gooddays=1;
        b=a;
    }
    cout << max_GD;
    cout << "\n";
}
