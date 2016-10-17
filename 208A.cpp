#include <string.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string word;
    cin >>word ;
    int length=word.length();
    for (int i=0; i<length; i++)
        if (word.substr(i,3)=="WUB")
        {
            if (i!=0) 
                cout << " ";
            i+=2;
        }
        else
        {
            cout << word[i];
        }
    cout << endl;
}
