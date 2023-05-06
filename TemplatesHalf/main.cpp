//Thomas McGinley
//06 May,2023
//CIS1202 N01

#include<iostream>

using namespace std;

template<typename type>
type half(type num)
{
	num = num / 2;
	return num;
}

int half(int num)
{
	num = round(static_cast<double>(num) / 2);
	return num;
}

int main()
{
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;

	system("pause");
	return 0;
}