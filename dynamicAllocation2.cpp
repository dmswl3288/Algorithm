#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

int main()
{
	
	//---------------- int�� 2���� �迭 ���� �Ҵ� ------------------
	int size;
	cin >> size;

	int **a = new int*[size];      // row size �Ҵ�
	
	for (int i = 0; i < size; i++)
	{
		a[i] = new int[size];    // col size �Ҵ�
		//a[i] = { 0 };
	}
	//---------------------------------------------------------------

	// �迭�� ������ �ε��� ����
	int end = size - 1;
	int k = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j <= end; j++)
		{
			k++;
			a[i][j] = k;
		}

		if (i < size / 2)
		{
			end--;
		}
		else
		{
			end++;
		}
	}

	// �迭�� �ִ� �� ���
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (a[i][j] >= 0)
				cout << a[i][j] << " ";
			else
				cout << 0 << " ";       // �����̸� 0���� ���
		}
		cout << endl;
	}

	// int �� 2���� �迭 ���� ����
	if (a != NULL)
	{
		for (int i = 0; i < size; i++)
		{
			delete[] a[i];
		}
		delete[] a;
	}
	system("pause");
	return 0;
}