//NSUPS19 Solution E: Diagonal Difference

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum1 = 0, sum2 = 0;
    int arr[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if((arr[i][j] >= -100) && (arr[i][j] <= 100))
            {
                if(i==j)
                    sum1 += arr[i][j];

                if(j==(n-i-1))
                    sum2 += arr[i][j];
            }
            else
                exit(0);
        }
    }
    if(sum1<=sum2)
        cout << sum2 - sum1;
    else if(sum2<=sum1)
        cout << sum1 - sum2;

    return 0;
}
