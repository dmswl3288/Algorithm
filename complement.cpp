#include<iostream>
#include<string>
#include<math.h>
#include<stdlib.h>
using namespace std;

// 2������ 1�� ����, 2�� ������ �����
int main()
{
	int a[5], b1[5], b2[5];
	int i = -1, c = 1;

	do
	{  // 1�� ���� ���ϱ�
		i++;
		cin >> a[i];
		b1[i] = 1 - a[i];
	} while (i < 4);

	do
	{  // 2�� ���� ���ϱ�
		b2[i] = b1[i] + c;
		b2[i] = b2[i] % 2;
		c = b1[i] * c;
		i--;
	} while (i >= 0);

	system("pause");
	return 0;
}