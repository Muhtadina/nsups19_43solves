//NSUPS19 Solution AD: Number Reverse

#include <iostream>
#include <stack>
using namespace std;
int main()
{
    long long int N;
    cin >> N;
    if(N<-1000000000000000000 || N>1000000000000000000)
        exit(0);
    stack<int> digits;
    while(N!=0)
    {
        int digit = N%10;
        digits.push(digit);
        N = N/10;
    }
    long long int R = 0;
    long long int ten = 1;
    while(!digits.empty())
    {
        int top = digits.top();
        R = R + top*ten;
        ten = ten*10;
        digits.pop();
    }
    cout << R;
    return 0;
}
