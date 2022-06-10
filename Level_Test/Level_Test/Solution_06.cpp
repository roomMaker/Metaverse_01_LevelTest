//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	srand(time(NULL));
//
//	bool isInsert = true;
//    const char* shape[4] = {"♠", "♣", "♥", "◆"};
//	const char* cardNum[13] = {"1","2","3","4","5","6","7","8","9","10","J","Q","K"};
//	const char* randShape[14] = {0};
//	const char* randCardNum[14] = { 0 };
//	int joker;
//	bool haveJoker = true;
//
//	
//	bool endline = true;
//
//	cout << "Player 1 : ";
//	for (int i = 0; i < 14;)
//	{
//		randShape[i] = shape[rand() % 4];
//		randCardNum[i] = cardNum[rand() % 13];
//		joker = rand() % 53;
//		for (int j = 0; j < i; j++)
//		{
//			// 기존에 없던 카드면 true 반환
//			if (randShape[i] != randShape[j] || randCardNum[i] != randCardNum[j])
//			{
//				isInsert = true;
//			}
//			else
//			{
//				isInsert = false;
//				break;
//			}
//		}
//		if (joker == 0 && haveJoker)
//		{
//			cout << "Joker";
//			if (i != 6)
//			{
//				cout << ", ";
//			}
//			i++;
//			haveJoker = false;
//			isInsert = false;
//		}
//		if (isInsert)
//		{
//			cout << randShape[i] << randCardNum[i]; 
//			if (i != 6 && i != 13)
//			{
//				cout << ", ";
//			}
//			isInsert = false;
//			i++;
//		}
//		if (i == 7 && endline)
//		{
//			cout << endl << "Player 2 : ";
//			endline = false;
//		}
//	}
//		
//	
//	
//
//	return 0;
//}
//
