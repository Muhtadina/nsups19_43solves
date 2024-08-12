//NSUPS19 Solution AA: Slogan Learning of Princess

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    cin.ignore();
    string*slogans = new string[N*2];
    for(int i=0; i<N*2; i++)
    {
        getline(cin, slogans[i]);
    }
    int Q;
    cin >> Q;
    cin.ignore();
    string*firstL = new string[Q];
    for(int i=0; i<Q; i++)
    {
        getline(cin, firstL[i]);
        transform(firstL[i].begin(), firstL[i].end(), firstL[i].begin(),
              ::toupper);
        for(int j=0; j<N*2; j++)
        {
            transform(slogans[j].begin(), slogans[j].end(), slogans[j].begin(),
              ::toupper);
            if(firstL[i] == slogans[j])
            {
                cout << slogans[j+1] << endl;
                break;
            }
            j++;
        }
    }
    return 0;
}
