#include <iostream>
using namespace std;

int main()
{
    int numofCars=0;
    int groupnr;
    cin >> groupnr;
    int a,b,c,d;
    a=b=c=d=0;
    for (int i=0; i<groupnr; i++)
    {
        int h;
        cin >>h; 
        switch(h)
        {
            case 4:
                a++;
                break;
            case 3:
                b++;
                break;
            case 2:
                c++;
                break;
            case 1:
                d++;
                break;
        }
    }
    numofCars += a;
    numofCars += b;
    d = max(d-b,0);
    if (c%2==0)
        numofCars+=c/2+(d+3)/4;
    else
        numofCars+= (c+1)/2+(d+1)/4;
    cout << numofCars << "\n";
}
