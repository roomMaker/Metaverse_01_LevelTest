#include "Dalpeng.h"

int main()
{
	int inputSize;
	SnailArray snailArray;
	cout << "배열의 크기를 입력하세요 : ";
	cin >> inputSize;
	snailArray.Make(inputSize);
	snailArray.Print();
	snailArray.Clear();
	
	return 0;
}