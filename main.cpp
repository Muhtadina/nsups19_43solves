//NSUPS19 Solution AG: Staircase

#include <iostream>
using namespace std;
int Sum(int n)
{
    int s = 0;
    while (n!=0)
    {
        s = s + n % 10;
        n = n / 10;
    }
    return s;
}
bool CheckSelf(int n)
{
    for(int i=1; i<=n; i++)
    {
        if(i+Sum(i) == n)
            return false;
    }
    return true;
}
int main()
{
    for(int j=1; j<=1000000; j++)
    {
        if(CheckSelf(j))
            cout << j << endl;
    }
    return 0;
}
