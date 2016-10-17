#include <iostream>
using namespace std;

string to_string2(int x){
    string ans;
    while(x){
    ans += char(x % 10 +'0');
    x /= 10;
    }
    return ans;
}


int main()
{

    int n;
    cin >> n;
    string year;
    for (int i=n+1; i<9999; i++)
    {

        year=to_string2(i);
        if( (year[0]!=year[1]) &&   (year[0]!=year[2])&&   (year[0]!=year[3])
            &&   (year[1]!=year[2])&&   (year[1]!=year[3])    &&   (year[2]!=year[3]))
        {
            cout << i << "\n";
            break;
        }
    }
}
