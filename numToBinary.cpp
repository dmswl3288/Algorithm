#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

// 10������ 2������ ��ȯ�ϱ�
int main()
{
	int a[10], mok, nmg, b, i=0;

	cin >> b;
	while (1)
	{
		mok = b / 2;          // ��� ������ ���ϱ�
		nmg = b - mok * 2;

		a[i] = nmg;           // �������� �迭�� ���ʴ�� ����
		if (mok == 0)
		{
			break;            // ���� 0�̸� break;
		}
		
		b = mok;              // ���� ���� �������� ����
		i++;                  // �迭�� ��ġ ����
	}
	for (int k = i; k >= 0; k--)     // ������ �迭 ���
	{
		cout << a[k];            
	}
	system("pause");
	return 0;
}