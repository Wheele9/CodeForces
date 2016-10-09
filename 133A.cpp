#include <iostream>
using namespace std;

int main()
{
    string result = "NO";
    string input;
    cin >> input;
    int n = input.length();
    for (int i=0; i<n; i++)
    {
        if (input[i]=='H')
            result="YES";
        if (input[i]=='Q')
            result="YES";
        if (input[i]=='9')
            result="YES";
    }
    cout << result;
    cout << "\n"  ;

}
