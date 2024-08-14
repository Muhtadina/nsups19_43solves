//NSUPS19 Solution AZ: Colourful Flowers

#include <bits/stdc++.h>
using namespace std;
#define PI acos(-1)
/*double Height(int a, int b, int c)
{
    double x = (a*a + b*b - c*c)/(2*b);
    double H2 = a*a - x*x;
    double H = sqrt(H2);
    return H;
}*/
double Circle(double r)
{
    return r*r*PI;
}
int main()
{
    double a, b, c;
    while(cin >> a >> b >> c)
    {
        double s = (a+b+c)/2;
        double areaT = sqrt(s*(s-a)*(s-b)*(s-c));
        double rc = areaT/s;
        double rC = a*b*c/sqrt(2*s*(b+c-a)*(c+a-b)*(a+b-c));
        double areac = Circle(rc);
        double areaC = Circle(rC);
        printf("%.4f %.4f %.4f\n", areaC-areaT, areaT-areac, areac);
    }
    return 0;
}
