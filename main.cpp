//NSUPS19 Solution U: Harmony

#include <iostream>
using namespace std;
int main()
{
    int*AB = new int[2];
    for(int i=0; i<2; i++)
        cin >> AB[i];

    for(int i=0; i<2; i++)
    {
        if(AB[i]>=0 && AB[i]<=1000000000)
        {
            if(AB[0] == AB[1])
                exit(0);
            else
                continue;
        }
        else
            exit(0);
    }

    int sum = AB[0] + AB[1];
    int K = sum/2;
    double Q = sum%2;
    if(Q==0)
        cout << K;
    else
        cout << "IMPOSSIBLE";

    return 0;
}
