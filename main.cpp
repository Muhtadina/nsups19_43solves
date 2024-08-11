//NSUPS19 Solution C: A Very Big Sum

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n>=1 && n<=10)
    {
        long long int*ar = new long long int[n];
        long long int sum = 0;
        for(int i=0; i<n; i++)
        {
            cin >> ar[i];
            if((ar[i]>=0) && (ar[i]<=10000000000))
                sum += ar[i];
            else
                exit(0);
        }
        cout << sum;
    }
    else
        exit(0);
    return 0;
}
