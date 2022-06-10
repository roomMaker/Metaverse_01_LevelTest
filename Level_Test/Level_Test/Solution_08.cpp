#include <iostream>

using namespace std;

int main()
{
	int N = 0, j = 0, k = 0, insertArr = 1;
	int flag = 0;
	int len;
	scanf_s("%d", &N);

	int** arr = new int*[N];
	for (int i = 0; i < N; i++)
	{
		arr[i] = new int[N];
	}
	int jUp = 0, kUp = 1;
	len = N - 1;
	while(len >= 0)
	{
		switch (flag)
		{
		case 0:
			for (j = jUp ; j <= len; j++)
			{
				arr[k][j] = insertArr;
				insertArr++;
			}
			flag++;
			jUp++;
			j--;
			break;
		case 1:
			for (k = kUp; k <= len; k++)
			{
				arr[k][j] = insertArr;
				insertArr++;
			}
			flag++;
			kUp++;
			len--;
			k--;
			break;
		case 2:
			for (j = len; j >= jUp - 1; j--)
			{
				arr[k][j] = insertArr;
				insertArr++;
			}
			flag++;
			j++;
			break;
		case 3:
			for (k = len; k >= kUp - 1; k--)
			{
				arr[k][j] = insertArr;
				insertArr++;
			}
			flag = 0;
			k++;
			break;
		};
		
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << arr[i][j] << '\t';
		}
		cout << endl << endl;
	}
	return 0;
}