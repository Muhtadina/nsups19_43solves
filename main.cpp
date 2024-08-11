//NSUPS19 Solution N: Exams

#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    if(T<1 || T>20000)
        exit(0);

    int Case[T][3];
    for(int i=0; i<T; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> Case[i][j];
        }
    }
    for(int i=0; i<T; i++)
    {
        if(Case[i][0]>=1 && Case[i][0]<=5 && Case[i][1]>=1 && Case[i][1]<=50 && Case[i][2]>=0 && Case[i][2]<= Case[i][0]*Case[i][1])
        {
            float total = Case[i][0]*Case[i][1];
            int Z = Case[i][2];

            float percentage = (Z/total)*100;

            if(percentage>50)
                cout << "YES " << endl;
            else
                cout << "NO" << endl;
        }
        else
            exit(0);
    }
    return 0;
}
