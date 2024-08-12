//NSUPS19 Solution R: 10:6:2 Flag

#include <iostream>
#include <cmath>
#include <queue>
using namespace std;
int main()
{
    const double Pi = acos(-1);
    int T;
    cin >> T;

    if(T>100 ||T<1)
        exit(0);

    for(int i=0; i<T; i++)
    {
        int L;
        cin >> L;
        if(L<=1000 && L>=1)
        {
            double w = (L/10.00)*6.00;
            double r = (L/10.00)*2.00;
            double red = Pi*r*r;
            double green = (L*w) - red;

            printf("%.2f %.2f \n", red, green);
        }
        else
            exit(0);
    }
    return 0;
}
