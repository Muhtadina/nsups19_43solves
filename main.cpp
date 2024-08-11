// NSUPS19 Solution I: Birthday Cake Candles

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n<1 || n>100000)
        exit(0);

    int*candles = new int[n];
    for(int i=0; i<n; i++)
    {
        cin >> candles[i];
    }
    int Count = 0;
    int temp = candles[0];
    for(int i=0; i<n; i++)
    {
        if(candles[i]>=1 && candles[i]<=10000000)
        {
            if(temp<candles[i])
                temp = candles[i];
        }
        else
            exit(0);
    }
    for(int i=0; i<n; i++)
    {
        if(temp == candles[i])
            Count++;
    }
    cout << Count;
    return 0;
}
