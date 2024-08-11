//PS19 Solution D

#include <iostream>

using namespace std;

int main()
{
    int*a = new int[3];
    int*b = new int[3];
    int*results = new int[2];

    for(int i=0; i<3; i++)
    {
        int A = 0;
        cin >> A;
        if(1<=A && A<=100)
            a[i] = A;
        else
            a[i] = 0;
    }
    for(int i=0; i<3; i++)
    {
        int B = 0;
        cin >> B;
        if(1<=B && B<=100)
            b[i] = B;
        else
            b[i] = 0;
    }

    int aP = 0;
    int bP = 0;
    for(int i=0; i<3; i++)
    {
        if(a[i] > b[i])
           aP++;
        if(a[i] < b[i])
           bP++;

    }
    results[0] = aP;
    results[1] = bP;

    for(int i=0; i<2; i++)
    {
        cout << results[i] << " ";
    }
    return 0;
}
