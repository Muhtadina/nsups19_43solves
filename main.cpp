//NSUPS19 Solution AE: Diagonal Difference

#include <iostream>
using namespace std;
int Factorial(int n)
{
    if(n==0 || n==1)
        return 1;
    return n*Factorial(n-1);
}
int main()
{
    int T;
    cin >> T;
    if(T<1 || T>1000)
        exit(0);
    int N[T];
    for(int i=0; i<T; i++)
    {
        cin >> N[i];
        int fact = Factorial(N[i]);
        if(N[i]>=0 && N[i]<=20)
            cout << fact << endl;
        else
            exit(0);
    }
    return 0;
}
