// NSUPS19 Solution Z: Andy's First Dictionary

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string line;
    int blankLineCount = 0;

    while (true)
    {
        getline(cin, line);
        if (line.empty())
        {
            blankLineCount++;
            if (blankLineCount == 2) break;
        }
        else
        {
            blankLineCount = 0;
            s += line + ' ';
        }
    }

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    string result;
    for (char c : s)
    {
        if (isalnum(c) || isspace(c))
        {
            result = result + c;
        }
    }

    stringstream ss(result);

    string word;
    const int Limit = 5000;
    string Text[Limit];
    int wordCount = 0;

    while (ss >> word && wordCount < Limit)
    {
        Text[wordCount] = word;

        wordCount++;
    }

    for (int i = 0; i < wordCount - 1; i++)
    {
        for (int j = 0; j < wordCount - i - 1; j++)
        {

            if (Text[j] > Text[j + 1])
            {
                swap(Text[j], Text[j + 1]);
            }

            if (Text[j] == Text[j + 1])
            {
                for (int k = j + 1; k < wordCount - 1; k++)
                {
                    Text[k] = Text[k + 1];
                }

                wordCount--;

                j--;
            }
        }
    }

    for (int i = 0; i<wordCount; i++)
    {
        cout << Text[i] << endl;
    }

    return 0;
}
