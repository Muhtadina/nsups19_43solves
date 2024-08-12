//NSUPS19 Solution AC: Sets-STL

#include <iostream>
#include <set>
using namespace std;
int main()
{
    int Q;
    cin >> Q;
    set<int> s;
    while(Q--)
    {
        int y;
        int x;
        cin >> y >> x;
        if(y==1)
        {
            s.insert(x);
        }
        else if(y==2)
        {
            s.erase(x);
        }
        else if(y==3)
        {
            set<int>::iterator itr=s.find(x);
            if(itr == s.end())
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }
    }
    return 0;
}
