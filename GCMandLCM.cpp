#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

// �� ���� �ִ������� �ּҰ������ ���ϱ�
int main()
{
	int a, b, big, small, mok, nmg, gcm, lcm;

	cin >> a >> b;                // �� �� a, b�Է�
	if (a > b)                    // a�� �� ũ�� ū���� ����
	{
		big = a;
		small = b;
	}
	else                          // b�� �� ũ�� ū���� ����
	{
		big = b;
		small = a;
	}
	while (1)
	{
		mok = big / small;         // ��
		nmg = big - (mok*small);   // ������

		if (nmg == 0)              // �������� 0�̸� 
		{
			gcm = small;           // small�� �ִ������� ����
			lcm = a * b / gcm;     // ���� �μ��� ���� �ִ������� ���� ���� �ּҰ������ ����
			cout << gcm << " " << lcm << endl;
			break;
		}
		else
		{
			big = small;           // ���� ���� ū���� ����
			small = nmg;           // �������� �������� ����
		}
	}
	system("pause");
	return 0;
}