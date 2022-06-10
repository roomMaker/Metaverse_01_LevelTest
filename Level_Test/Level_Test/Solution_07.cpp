//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	srand(time(NULL));
//	int saveRandNum[25] = { 0 };
//	int bingo[5][5] = { 0 };
//	bool isInsert = true;
//
//	for (int i = 0; i < 25;)
//	{
//		saveRandNum[i] = 1 + rand() % 25;
//		for (int j = 0; j < i; j++)
//		{
//			if (saveRandNum[i] != saveRandNum[j])
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
//			isInsert = false;
//			i++;
//		}
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			bingo[i][j] = saveRandNum[j + (i * 5)];
//		}
//	}
//
//	int inputNum = 0;
//	int bingoCount = 0;
//
//	while (1)
//	{
//		bingoCount = 0;
//		for (int i = 0; i < 5; i++)
//		{
//			for (int j = 0; j < 5; j++)
//			{
//				if (inputNum == bingo[i][j])
//				{
//					bingo[i][j] = 0;
//				}
//				cout << bingo[i][j] << '\t';
//			}
//			cout << endl << endl;
//		}
//		for (int i = 0; i < 5; i++)
//		{
//			if (bingo[i][0] == 0 && bingo[i][1] == 0 && bingo[i][2] == 0 && bingo[i][3] == 0 && bingo[i][4] == 0)
//			{
//				++bingoCount;
//			}
//			if (bingo[0][i] == 0 && bingo[1][i] == 0 && bingo[2][i] == 0 && bingo[3][i] == 0 && bingo[4][i] == 0)
//			{
//				++bingoCount;
//			}
//		}
//		if (bingo[0][0] == 0 && bingo[1][1] == 0 && bingo[2][2] == 0 && bingo[3][3] == 0 && bingo[4][4] == 0)
//		{
//			++bingoCount;
//		}
//		if (bingo[0][4] == 0 && bingo[1][3] == 0 && bingo[2][2] == 0 && bingo[3][1] == 0 && bingo[4][0] == 0)
//		{
//			++bingoCount;
//		}
//		if (bingoCount == 12)
//		{
//			break;
//		}
//		cout << "현재 " << bingoCount << "줄의 빙고가 완성되었습니다."<< endl;
//		cout << "숫자를 입력해주세요 : ";
//		scanf_s("%d", &inputNum);
//		system("cls");
//		
//	}
//	
//	cout << "BINGO!!!!";
//	return 0;
//}	