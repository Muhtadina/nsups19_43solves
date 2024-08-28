//PS Solution AF

#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    if(T<1 || T>10000)
        exit(0);
    int*N = new int[T];
    for(int i=0; i<T; i++)
    {
        cin >> N[i];
    }
    for(int i=0; i<T; i++)
    {
        if(N[i]<1 || N[i]>10000)
        {
            exit(0);
            break;
        }
        /*while(N[i]>=4)
        {
            N[i] = N[i] - 4;
        }
        while(N[i]>=3)
        {
            N[i] = N[i] - 3;
        }*/
        if(N[i]==1 || N[i]==2 || N[i]==5)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
