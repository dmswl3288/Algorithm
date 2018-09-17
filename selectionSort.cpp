#include<iostream>
#include<string>
#include<math.h>
#include<stdlib.h>
using namespace std;

// Selection Sort Algorithm 선택정렬 알고리즘 - 오름차순 정렬
int main()
{
	int data[10];
	int temp;

	for (int m = 0; m < 10; m++)
	{
		cin >> data[m];           // 정렬할 숫자 입력
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (data[i] > data[j])     // 이전 배열값이 더 큰 경우 switch
			{
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
	}

	for (int x = 0; x < 10; x++)
	{
		cout << data[x] << " ";
	}

	system("pause");
	return 0;
}