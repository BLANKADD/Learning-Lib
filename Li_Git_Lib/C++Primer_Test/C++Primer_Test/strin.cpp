/*#include<iostream>
using namespace std;

void LeftShiftOne(char *s, int n)
{
	char t = s[0];
	for (int i = 0; i < n; i++)
	{
		s[i - 1] = s[i];
	}
	s[n - 1] = t;
}

void LeftRotateString(char *s, int n, int m)
{
	while (m--)
	{
		LeftShiftOne(s, n);
	}

}
int main()
{
	//
	char arry[] = "asadaf";
	//cout<<sizeof(arry)<<endl;
	LeftRotateString(arry, sizeof(arry) - 1, 3);

	for (int i = 0; i < sizeof(arry) - 1; i++)
	{
		cout << "arry[" << i << "] = " << arry[i] << endl;
	}
	return 0;
}*/