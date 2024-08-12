//NSUPS19 Solution P: Relational Operator

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    if(t<0 || t>=15)
        exit(0);

    int Case[t][2];
    for(int i=0; i<t; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin >> Case[i][j];
        }
    }
    for(int i=0; i<t; i++)
    {
        if(Case[i][0]<=1000000001 && Case[i][0]>=-1000000001 && Case[i][1]<=1000000001 && Case[i][1]>=-1000000001)
        {
            if(Case[i][0] < Case[i][1])
                cout << "<" << endl;
            else if(Case[i][0] > Case[i][1])
                cout << ">" << endl;
            else
                cout << "=" << endl;
        }
        else
            exit(0);
    }
    return 0;
}
