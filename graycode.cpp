#include<iostream>
#include<string>
#include<math.h>
#include<stdlib.h>
using namespace std;

// ù��° �迭�� 1�̸� --> 2����,        0�̸� --> �׷����ڵ�� ��ȯ�ϱ�
int main()
{
	int input[5], cont[4];

	for (int i = 0; i < 5; i++)
	{
		cin >> input[i];         // ���̰� 5�� �迭 ����
	}
	cont[0] = input[1];          // �ι�° �迭���� cont ù �迭�� ����

	if (input[0] == 1)           // ù��° �迭�� 1�̸�, 4���� ��Ʈ�� 2������ ��ȯ 
	{
		for (int i = 0; i < 4; i++)
		{
			if (input[i + 2] == cont[i])             // XOR 2������ ��ȯ
				cont[i + 1] = 0;
			else
				cont[i + 1] = 1;
		}
	}
	else                         // ù��° �迭�� 0�̸�, 4���� ��Ʈ�� �׷����ڵ�� ��ȯ
	{
		for (int i = 0; i < 4; i++)
		{
			if (input[i + 2] == input[i + 1])       // XOR �׷����ڵ�� ��ȯ
			{
				cont[i + 1] = 0;
			}
			else
				cont[i + 1] = 1;
		}
	}
	if (input[0] == 1)
	{
		cout << "������" << endl;
	}
	else
	{
		cout << "�׷����ڵ�" << endl;
	}
	for (int i = 0; i < 4; i++)
	{
		cout << cont[i];           // ��� ���
	}

	system("pause");
	return 0;
}