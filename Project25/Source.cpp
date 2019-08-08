# include <iostream>
using namespace std;

int schet(int);

int main()
{
	int a;
	cout << "Please! Enter number: ";
	cin >> a;
	if (a > 10)
	{
		schet(a);
		int fact = schet(a);
		cout << fact << endl;
	}
	else
		cout << "Please! Enter number more 10!!!!!!!" << endl;
	system("pause");
	return 0;
}

int schet(int b)
{
	if (b > 10)
		return 5;
}