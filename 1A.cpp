#include <iostream>
using namespace std;

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;


    long long ss1, ss2;
    if( n%a==0)
    ss1=n/a;
    else 
    ss1 = n/a+1;

    if( m%a==0)
    ss2=m/a;
    else 
    ss2 = m/a+1;
    cout << ss1*ss2 <<"\n";
}
