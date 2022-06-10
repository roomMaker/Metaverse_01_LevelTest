//#include <iostream>
//
//void soltArray(int* arr, int n);
//
//int main()
//{
//	int arr[5] = { 5, 2, 4, 1, 3 };
//
//	soltArray(arr, sizeof(arr) / 4);
//	for (int i = 0; i < 5; i++)
//	{
//		std::cout << arr[i];
//	}
//	
//	return 0;
//}
//
//void soltArray(int* arr, int n)
//{
//	int temp;
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 1; j < n; j++)
//		{
//			if (arr[j - 1] > arr[j])
//			{
//				temp = arr[j - 1];
//				arr[j - 1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}