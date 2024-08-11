// NSUPS19 Solution G: Staircase

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n<=0 || n>100)
        exit(0);

    int j;
    for(int i=1; i<=n; i++)
    {
        j=1;
        while(j<=n-i)
        {
            cout << " ";
            j++;
        }
        while(j<=n)
        {
            cout << "#";
            j++;
        }
        cout << endl;
    }
    return 0;
}
