#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

// �������� �˰��� - �������� ����
int main()
{
	int a[10];
	int key, count = -1, k;

	do
	{
		count++;
		cin >> a[count];             // �迭�� ���� �Է�
	} while (count < 9);

	for (int i = 1; i < 10; i++)
	{
		key = a[i];                    // ó���� �ι�° ���� key������ ����
		for (k = i - 1; k >= 0; k--)   // �Ųٷ� 0���� ���ϴ� ���� key���� ��
		{
			if (a[k] > key)         
 			{
				a[k + 1] = a[k];
			}
			else
				break;
		}
		a[k + 1] = key;               // for���� �� ���Ҵٸ�, k�� -1�� �ǰ� a[0]�� key���� ����ȴ�.
	}

	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	system("pause");
	return 0;
}