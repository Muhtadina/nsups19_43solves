//NSUPS19 Solution AG: Self Number

#include <bits/stdc++.h>
using namespace std;
int Sum(int n)
{
    int s = 0;
    while(n!=0)
    {
        s = s + n%10;
        n = n/10;
    }
    return s;
}
int main()
{
    const int MAX = 1000000;
    vector<bool> SelfNumber(MAX+1, false);
    for (int i=1; i<=MAX; i++)
    {
        int n = i + Sum(i);
        if (n<=MAX)
        {
            SelfNumber[n] = true;
        }
    }
    for (int j=1; j<=MAX; j++)
    {
        if (!SelfNumber[j])
        {
            cout << j << endl;
        }
    }
    return 0;
}
