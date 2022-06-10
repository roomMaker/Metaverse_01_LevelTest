#include <iostream>

using namespace std;
int main()
{
	char space = ' ', star = '*';

	for (int i = 0; i < 5; i++)
	{
		for (int j = 4 - i; j > 0; j--)
		{
			cout << space;
		}

		for (int k = 0; k <= i + i; k++)
		{
			cout << star;
		}
		cout << endl;
	}
 
	return 0;
}