#include<iostream>
#include<string>
#include<math.h>
#include<stdlib.h>
using namespace std;

// Selection Sort Algorithm �������� �˰��� - �������� ����
int main()
{
	int data[10];
	int temp;

	for (int m = 0; m < 10; m++)
	{
		cin >> data[m];           // ������ ���� �Է�
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (data[i] > data[j])     // ���� �迭���� �� ū ��� switch
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