#include<iostream>

using namespace std;


int main()
{
	string str;
	while (cin >> str)
	{
		int size = str.size();
		for (int i = 0; i < size; i++)
		{
			if (str[i] >= '0' && str[i] <= '9')
				continue;
			else if (str[i] >= 'A' && str[i] <= 'Z')
			{
				if (str[i] == 'Z')
					str[i] = 'a';
				else
					str[i] = str[i] - 'A' + 'b';
			}
			else if(str[i]>='a'&&str[i]<='z')
			{
				if (str[i] - 'a' <= 2)
					str[i] = '2';
				else if (str[i] - 'a' <= 5)
					str[i] = '3';
				else if (str[i] - 'a' <= 8)
					str[i] = '4';
				else if (str[i] - 'a' <= 11)
					str[i] = '5';
				else if (str[i] - 'a' <= 14)
					str[i] = '6';
				else if (str[i] - 'a' <= 18)
					str[i] = '7';
				else if (str[i] - 'a' <= 21)
					str[i] = '8';
				else if (str[i] - 'a' <= 25)
					str[i] = '9';
			}
		}
		cout << str << endl;
	}
}