//NSUPS19 Solution L: IQ Test

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n<3 || n>100)
        exit(0);

    int*arr = new int[n];
    int even = 0, odd = 0;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i]<=100)
        {
            if(arr[i]%2 == 0)
                even++;
            else
                odd++;
        }
        else
            exit(0);
    }

    if(even == 1)
    {
        for(int i=0; i<n; i++)
        {
            if(arr[i]%2 == 0)
                cout << i+1;
        }
    }
    else if(odd == 1)
    {
        for(int i=0; i<n; i++)
        {
            if(arr[i]%2 != 0)
                cout << i+1;
        }
    }
    return 0;
}
