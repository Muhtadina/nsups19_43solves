// NSUPS19 Solution B: Simple Array Sum

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n<0)
        exit(0);

    int*Array = new int[n];
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        cin >> Array[i];
        if(Array[i]>1000)
            exit(0);

        sum += Array[i];
    }
    cout << sum;
    return 0;
}
