//NSUPS19 Solution Q: Middle of the Contest

#include<iostream>
using namespace std;
void MidTime(string s1, string s2)
{
	int h11 = (int)s1[1] - '0';
	int h21 = (int)s1[0] - '0';
	int hh1 = (h21*10 + h11%10); /// string-1 hour

    int h12 = (int)s2[1] - '0';
	int h22 = (int)s2[0] - '0';
	int hh2 = (h22*10 + h12%10); /// string-2 hour

	int m11 = (int)s1[4] - '0';
	int m21 = (int)s1[3] - '0';
	int mm1 = (m21*10 + m11%10); /// string-1 minute

    int m12 = (int)s2[4] - '0';
	int m22 = (int)s2[3] - '0';
	int mm2 = (m22*10 + m12%10); /// string-2 minute

	int M1 = hh1*60 + mm1;
	int M2 = hh2*60 + mm2;
	int half = (M2-M1)/2;
	int M3 = M1+half;

	int hh3 = M3/60;
	int mm3 = M3%60;
	if(hh3>=0 && hh3<10)
        cout << "0" << hh3 << ":";
    else cout << hh3 << ":";
    if(mm3>=0 && mm3<10)
        cout << "0" << mm3;
    else cout << mm3;
}

int main()
{
    string f,e;
    cin >> f >> e;
    MidTime(f,e);
    return 0;
}
