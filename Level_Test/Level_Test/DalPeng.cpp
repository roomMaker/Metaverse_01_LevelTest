#include "Dalpeng.h"

int main()
{
	int inputSize;
	SnailArray snailArray;
	cout << "�迭�� ũ�⸦ �Է��ϼ��� : ";
	cin >> inputSize;
	snailArray.Make(inputSize);
	snailArray.Print();
	snailArray.Clear();
	
	return 0;
}