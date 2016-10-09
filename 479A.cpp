#include <iostream>
using namespace std;

int main()
{
    int a, b ,c;
    cin >> a >> b >> c;
    int result=a*b*c;
    if (a==1)
        result = (a+b)*c;
    if (c==1)
        result = (c+b)*a;
    if (b==1)
        result =max( (c+b)*a,(a+b)*c);
    if ((a==1)&&(c==1))
        result = (a+b+c);

    cout<<result << "\n";
}
