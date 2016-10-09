#include <iostream>
using namespace std;
int luckynums[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
int main()
{
    int a;
    cin >> a;
    string result="NO";
    for (int i=0; i<14; i++)
    {
        if( a%luckynums[i]==0)
        {
            result="YES";
            break;
        }
    }
    cout<<result << "\n";
}
