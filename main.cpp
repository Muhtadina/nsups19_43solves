//NSUPS19 Solution AP: Fox and Number Game

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    int num[T];
    int gcd[T-1];
    for(int i=0; i<T; i++)
    {
        cin >> num[i];
    }
    for(int i=0; i<T-1; i++)
    {
        gcd[i] = __gcd(num[i], num[i+1]);
    }
    int common = gcd[0];
    for(int i=0; i<T-1; i++)
    {
        if(gcd[i]!=common)
            common = __gcd(common, gcd[i]);
    }
    cout << common*T;
    return 0;
}
