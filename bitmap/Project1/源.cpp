#include<iostream>
#include<vector>

using namespace std;

class Bitmap
{
private:
	const int N;
	vector<int> arr;
public:
	Bitmap() :N(10000000)
	{
		//1 int = 4 byte = 32 bit
		arr.resize(N / 32 + 1);
	}
	void addValue(int n)
	{
		arr[n >> 5] |= 1 << (n & 0x1F);
	}
	bool exist(int n)
	{
		//int x = (arr[n >> 5] & (1 << (n & 0x1F)));
		//cout << x << endl;
		return arr[n >> 5] & (1 << (n & 0x1F));
	}
	void display(int row)
	{
		cout << "Bitmapλͼչʾ" << endl;
		for (int i = 0; i < row; i++)
		{
			int temp = arr[i];
			cout << "arr[" << i << "]:";
			for (int j = 0; j < 32; j++)
			{
				int x = temp & 1;
				cout << x << " ";
				temp >>= 1;
			}
			cout << endl;
		}
	}
	void clear()
	{
		arr.clear();
		arr.resize(N / 32 + 1);
	}
};

int main()
{
	vector<int> num = { 1,5,30,32,64,56,159,120,21,17,35,45 };
	Bitmap bmap = Bitmap();
	for (int i = 0; i < num.size(); i++)
		bmap.addValue(num[i]);
	int temp = 4;
	if (bmap.exist(temp))
		cout << temp << " exists" << endl;
	bmap.display(5);
	bmap.clear();
	bmap.display(5);
}