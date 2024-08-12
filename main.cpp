//NSUPS19 Solution AB: Maps-STL

#include <iostream>
#include <map>
using namespace std;
int main()
{
    int Q;
    cin >> Q;
    if(Q<1 || Q>100000)
        exit(0);
    map<string, int> marksheet;
    while(Q--)
    {
        int query;
        cin >> query;
        int marks;
        string name;
        if(query==1)
        {
            cin >> name;
            cin >> marks;
            if(marks<1 || marks>1000)
            {
                exit(0);
                break;
            }
            map<string,int>::iterator itr = marksheet.find(name);
            if(itr == marksheet.end())
            {
                marksheet.insert(make_pair(name, marks));
            }
            else
                marksheet[name] += marks;
        }
        else if(query==2)
        {
            cin >> name;
            marksheet.erase(name);
        }
        else if(query==3)
        {
            cin >> name;
            cout << marksheet[name] << endl;
        }
        else
        {
            exit(0);
            break;
        }
    }
    return 0;
}
