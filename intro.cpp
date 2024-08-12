#include <bits/stdc++> // Konnichiwa
using namespace std;
int main() // Dou zo woro shiku
{
  cout << "Welcome to my skribble for NSUPS Season 19!" << endl; // Ohaio
  bool view = true; // Ara Ara
  int coder;
  cout << "Type 1 if you're a coder/ 0 if you're not a coder:";
  cin >> coder;
  while(view)
  {
    if(coder == 1)
      cout << "Help me with coding, please! I'm too much of a newbie!!!" << endl;
    else if(coder == 0)
      cout << "I'd recommand you to look at the codes those have been submitted and accepted. I've commented out the wrong ones. You're welcome." << endl;
    else 
      cout << "I get it. You're a Joke." << endl;

    view = false; //Seems like you ended up reading the most useless code. 
  }
  cout << "Let's start with the master branch. This is the main branch which is nothing but the overview written in the README file." << endl;
  return 0; // Sayonara
}
