//NSUPS19 Solution M: Hajj-e-Akbar

#include <algorithm>
#include <cctype>
#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main()
{
    queue<string> hajj;
    string H = " ";
    while(H!="*")
    {
        cin >> H;
        hajj.push(H);
    }
    int i = 1;
    while(!hajj.empty())
    {
        string hh = hajj.front();
        transform(hh.begin(), hh.end(), hh.begin(),
              ::toupper);
        if(hh == "HAJJ")
            cout << "Case " << i << ": Hajj-e-Akbar" << endl;
        else if(hh == "UMRAH")
            cout << "Case " << i << ": Hajj-e-Asghar" << endl;
        else if(hh == "*")
            exit(0);

        hajj.pop();
        i++;
    }
    return 0;
}
