#include<iostream>
#include<string>
#include<math.h>
#include<stdlib.h>
using namespace std;

// Bubble Sort Algorithm 버블정렬 알고리즘 - 오름차순 정렬
int main()
{
	int data[10];
	int temp;

	for (int m = 0; m < 10; m++)
	{
		cin >> data[m];           // 정렬할 숫자 입력
	}

	for (int i = 1; i < 10; i++)            // i는 배열 첨자로 사용되지 않으므로 0부터 시작하지 않아도 된다.
	{
		for (int j = 0; j < 10-i; j++)
		{
			if (data[j] > data[j + 1])      // 이전 배열값이 더 큰 경우 교환한다.
			{
				temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
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