//NSUPS19 Solution H: Mini-Max Sum

#include <iostream>
using namespace std;
int main()
{
    unsigned long long int*arr = new unsigned long long int[5];
    unsigned long long int*maxMin = new unsigned long long int[2];

    for(int i=0; i<5; i++)
    {
        cin >> arr[i];
    }
    unsigned long long int sum = 0;
    for(int i=0; i<5; i++)
    {
        if(arr[i]>=1 && arr[i]<=1000000000)
            sum += arr[i];
        else
            exit(0);
    }

    unsigned long long int tempX = arr[0];
    for(int i=1; i<5; i++)
    {
        if(tempX<arr[i])
            tempX = arr[i];
    }
    unsigned long long int tempN = arr[0];
    for(int i=1; i<5; i++)
    {
        if(tempN>arr[i])
            tempN = arr[i];
    }

    maxMin[0] = sum - tempX;
    maxMin[1] = sum - tempN;
    for(int i=0; i<2; i++)
    {
        cout << maxMin[i] << " ";
    }
    return 0;
}
