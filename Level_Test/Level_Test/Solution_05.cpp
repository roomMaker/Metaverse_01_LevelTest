//#include <iostream>
//
//using namespace std;
//int main()
//{
//	srand(time(NULL));
//	int maxNum = 0, numCount = 0;
//	bool isInsert = true;
//	cout << "�ִ밪 : ";
//	cin >> maxNum;
//	cout << "�������� : ";
//	cin >> numCount;
//
//	if (maxNum < numCount)
//	{
//		cout << "�����Ұ�";
//		return 0;
//	}
//
//	int* result = new int[numCount]; // numCount ��ŭ�� ũ���� ����� ��� �� �迭 ����
//
//	for (int i = 0; i < numCount;)
//	{
//		result[i] = 1 + rand() % maxNum;
//		for (int j = 0; j < i; j++)
//		{
//			// ������ ���� ���ڸ� true ��ȯ
//			if (result[i] != result[j])
//			{
//				isInsert = true;
//			}
//			else
//			{
//				isInsert = false;
//				break;
//			}
//		}
//		if (isInsert)
//		{
//			cout << result[i] << endl;
//			isInsert = false;
//			i++;
//		}
//		
//	}
//
//	delete[] result;
//	return 0;
//}