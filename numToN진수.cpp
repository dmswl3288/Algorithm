#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

// 10������ b(2~16)������ ��ȯ�ϱ�
int main()
{
	char a[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E', 'F'}; // 0~9, A~F���� ����Ǿ� �ִ� �迭
	int b; // ��ȯ�� ������ ���� ����� ����, 2~16�� �ϳ��� ����
	int c; // 10������ ����� ����
	int d; // c�� ���� ����� b�� ������ ����� ����
	int e; // c�� d�� ���� ���� ����� ����
	int f; // c�� d�� ���� ������ ����

	cin >> b >> c;
	d = 1;
	while (d <= c)
	{
		d = d * b;   // ���� ����
	}
	while (1)
	{
		if (d > 1)     // ������ 1���� ũ��
		{
			d = d / b;    // ������ ������ ������.
		}
		e = c / d;      // ��
		f = c - e * d;  // ������
		cout << a[e];

		if (d != 1)
			c = f;
		else
			break;
	}

	system("pause");
	return 0;
}