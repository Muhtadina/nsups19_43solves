//NSUPS19 Solution S: 0 or 1 Swap

#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;

    if(N<2 || N>50)
        exit(0);

    int*p = new int[N];
    for(int i=0; i<N; i++)
    {
        cin >> p[i];
    }

    int one, two;
    int temp1, temp2;
    bool c = true;
    for(int i=0; i<N; i++)
    {
        if(p[i]>p[i+1] && i+1<N)
        {
            c = false;
            temp1 = p[i];
            p[i] = 0;
            one = i;
            break;
        }
        else if(p[i]<p[i+1])
            continue;
    }

    if(c)
    {
        cout << "YES";
        exit(0);
    }

    for(int i=0; i<N; i++)
    {
        if(p[i+1] == 0)
            continue;

        else if(p[i]>p[i+1] && i+1<N)
        {
            temp2 = p[i+1];
            p[i+1] = 0;
            two = i+1;
            break;
        }
        else if(p[i]==0 && i+1==N-1)
        {
            temp2 = p[i+1];
            p[i+1] = 0;
            two = i+1;
            break;
        }

        else if(p[i]<p[i+1])
            continue;
    }

    if(temp1<temp2)
    {
        p[one] = temp1;
        p[two] = temp2;
    }
    else if(temp1>temp2)
    {
        p[two] = temp1;
        p[one] = temp2;
    }

    for(int i=0; i<N-1; i++)
    {
        if(p[i]<=p[i+1] && i+1<N)
            c = true;
        if(p[i]>p[i+1] && i+1<N)
        {
            c = false;
            break;
        }
    }

    if(c)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
