//NSUPS19 Solution Y: The Department of Redundancy Department

#include <iostream>
#include <queue>
#include <map>
using namespace std;
int main()
{
    queue<int> numbers;
    map<int, int> place;
    int n;
    while(cin>>n && n!=EOF)
    {
        if(place.count(n)==0)
        {
            numbers.push(n);
            place[n] = 1;
        }
        else
            place[n]++;
    }
    while(!numbers.empty())
    {
        cout << numbers.front() << " " << place[numbers.front()] << endl;
        numbers.pop();
    }
    return 0;
}
