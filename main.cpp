//NSUPS19 Solution Z: Andy's First Dictionary
/*
#include <bits/stdc++.h>
#include <queue>
using namespace std;
int main()
{
    string s, str;
    getline(cin, s);
    stringstream ss(s);
    queue<string> word;
    int c;
    while (getline(ss, str, ' '))
    {
        word.push(str);
        c++;
    }
    string*words = new string[c];
    for(int i=0; i<c; i++)
    {
        words[i] = word.front();
        word.pop();
    }
    queue<char> alphabets;
    alphabets.push('a'); alphabets.push('b'); alphabets.push('c');
    alphabets.push('d'); alphabets.push('e'); alphabets.push('f');
    alphabets.push('g'); alphabets.push('h'); alphabets.push('i');
    alphabets.push('j'); alphabets.push('k'); alphabets.push('l');
    alphabets.push('m'); alphabets.push('n'); alphabets.push('o');
    alphabets.push('p'); alphabets.push('q'); alphabets.push('r');
    alphabets.push('s'); alphabets.push('t'); alphabets.push('u');
    alphabets.push('v'); alphabets.push('w'); alphabets.push('x');
    alphabets.push('y'); alphabets.push('z');
    char alphabet[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    for(int i=0; i<c; i++)
    {

        for(int j=0; j<(int)perword.size(); j++)
        {
            for(int k=0; k<26; k++)
            {

            }
        }
    }

    for(int i=0; i<c; i++)
    {
        string perword = words[i];
        for(int j=i+1; j<c; j++)
        {
            int d = 0;
            while(d<26)
            {
                if(perword[0]==alphabet[c])
                {
                string temp = words[i];
                words[i] = words[j];
                words[j] = temp;
                break;
                }
                d++;
            }
        }
    }
    for(int i=0; i<c; i++)
    {
        cout << words[i] << endl;
    }
    return 0;
}*/

#include <iostream>
#include <set>
#include <string>

using namespace std;

inline bool IsLowerCharacter(char c)
{
    return c >= 'a' && c <= 'z';
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string line;

    while (getline(cin, line))
    {
        s += line + ' ';
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

/*#include<bits/stdc++.h>
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
}*/
