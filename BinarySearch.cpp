#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

// Binary Search �̺� �˻�
int main()
{
	int data[10] = {8,15,35,55,60,61,90,80,92,99};
	int num, start, end, middle;

	cin >> num;             // ã���� �ϴ� ���� �Է�
	start = 0;
	end = 9;

	while (1)
	{
		if (start <= end)
		{
			middle = (start + end) / 2;             // �߰� �ε��� 

			if (num == data[middle])
			{
				cout << num << " " << middle;       // ���ڸ� ã�� ��� ���ڿ� �ε��� ���
				break;
			}
			else
			{
				if (num < data[middle])             // ���ڰ� ��� ������ �۴ٸ� end�� �������� �̵�
				{
					end = middle - 1;
				}
				else                                // ���ڰ� ��� ������ ũ�ٸ� start�� ���������� �̵�
				{
					start = middle + 1;
				}
			}
		}
		else
		{
			cout << num << " " << "Not FOUND" << endl;
			break;
		}
	}
	
	system("pause");
	return 0;
}