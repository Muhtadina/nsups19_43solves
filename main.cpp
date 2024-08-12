//NSUPS19 Solution W: Fair Share Settlement
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int T;
    cin >> T;
    if(T<1 || T>10000)
        exit(0);

    int nk[T][2];
    for(int i=0; i<T; i++)
    {
        cin >> nk[i][0];
        cin >> nk[i][1];
        if((nk[i][0]>=1 && nk[i][0]<=1000) && (nk[i][1]>=1 && nk[i][1]<=10))
        {
            double dept = nk[i][0]/(nk[i][1] + 1);
            int each = floor(dept);
            int paid = nk[i][0] - each*nk[i][1];
            cout << paid << endl;
        }
        else
            exit(0);
    }
    return 0;
}
