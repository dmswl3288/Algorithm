#include<iostream>
#include<string>
#include<math.h>
#include<stdlib.h>
using namespace std;

// Bubble Sort Algorithm �������� �˰��� - �������� ����
int main()
{
	int data[10];
	int temp;

	for (int m = 0; m < 10; m++)
	{
		cin >> data[m];           // ������ ���� �Է�
	}

	for (int i = 1; i < 10; i++)            // i�� �迭 ÷�ڷ� ������ �����Ƿ� 0���� �������� �ʾƵ� �ȴ�.
	{
		for (int j = 0; j < 10-i; j++)
		{
			if (data[j] > data[j + 1])      // ���� �迭���� �� ū ��� ��ȯ�Ѵ�.
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