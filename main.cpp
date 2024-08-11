//NSUPS19 Solution F: Plus Minus

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    float pos = 0, neg = 0, zero = 0;

    if(n<0 || n>100)
        exit(0);

    int*arr = new int[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i]>=-100 && arr[i]<=100)
        {
            if(arr[i]>0)
                pos++;
            else if(arr[i]<0)
                neg++;
            else
                zero++;
        }
        else
            exit(0);
    }
    float positive, negative, zeros;
    positive = pos/n;
    negative = neg/n;
    zeros = zero/n;

    printf("%.6f\n", positive);
    printf("%.6f\n", negative);
    printf("%.6f\n", zeros);

    return 0;
}
