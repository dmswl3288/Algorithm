#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

// 삽입정렬 알고리즘 - 오름차순 정렬
int main()
{
	int a[10];
	int key, count = -1, k;

	do
	{
		count++;
		cin >> a[count];             // 배열에 숫자 입력
	} while (count < 9);

	for (int i = 1; i < 10; i++)
	{
		key = a[i];                    // 처음에 두번째 값을 key값으로 저장
		for (k = i - 1; k >= 0; k--)   // 거꾸로 0까지 변하는 동안 key값과 비교
		{
			if (a[k] > key)         
 			{
				a[k + 1] = a[k];
			}
			else
				break;
		}
		a[k + 1] = key;               // for문을 다 돌았다면, k는 -1이 되고 a[0]에 key값이 저장된다.
	}

	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	system("pause");
	return 0;
}