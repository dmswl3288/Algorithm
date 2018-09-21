#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

int main()
{
	
	//---------------- int형 2차원 배열 동적 할당 ------------------
	int size;
	cin >> size;

	int **a = new int*[size];      // row size 할당
	
	for (int i = 0; i < size; i++)
	{
		a[i] = new int[size];    // col size 할당
		//a[i] = { 0 };
	}
	//---------------------------------------------------------------

	// 배열의 마지막 인덱스 저장
	int end = size - 1;
	int k = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j <= end; j++)
		{
			k++;
			a[i][j] = k;
		}

		if (i < size / 2)
		{
			end--;
		}
		else
		{
			end++;
		}
	}

	// 배열에 있는 값 출력
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (a[i][j] >= 0)
				cout << a[i][j] << " ";
			else
				cout << 0 << " ";       // 음수이면 0으로 출력
		}
		cout << endl;
	}

	// int 형 2차원 배열 동적 해제
	if (a != NULL)
	{
		for (int i = 0; i < size; i++)
		{
			delete[] a[i];
		}
		delete[] a;
	}
	system("pause");
	return 0;
}