#include<iostream>
#include<Windows.h>

using namespace std;

//int main()
//{
//	const int SIZE = 5;
//	int arr1[SIZE] = { 1,2,3,4,5 };
//	int arr2[SIZE];
//
//	int* Parr1 = arr1;
//	int* Parr2 = arr2;
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		Parr2 = Parr1;
//		cout << *Parr2 << " ";
//		arr2[i] = *Parr2;
//		Parr1++;
//		Parr2++;
//	}
//
//	cout << endl << endl;
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << arr1[i] << " ";
//	}
//
//	cout << endl;
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << arr2[i] << " ";
//	}
//}

//2.

//int main()
//{
//	const int SIZE = 5;
//	int arr[SIZE] = { 1,2,3,4,5 };
//
//	int* Parr = arr;
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << arr[i] << " ";
//	}
//
//	cout << endl;
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		arr[i] = SIZE - i;
//		*Parr = arr[i];
//		cout << *Parr << " ";
//		Parr++;
//	}
//}

//3.

//int main()
//{
//	const int SIZE = 5;
//	int arr1[SIZE] = { 1,2,3,4,5 };
//	int arr2[SIZE];
//
//	int* Parr1 = arr1;
//	int* Parr2 = arr2;
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		Parr2 = Parr1 + ((SIZE - 1) - i);
//		cout << *Parr2 << " ";
//		arr2[i] = *Parr2;
//		Parr2++;
//	}
//
//	cout << endl << endl;
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << arr1[i] << " ";
//	}
//
//	cout << endl;
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << arr2[i] << " ";
//	}
//}
