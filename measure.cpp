#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

// ����� ������� �迭�� �����ϱ�
int main()
{
	int a[100], b; // ����� ����� �迭, �Է¹��� ����
	int c = 1; // 1�� �����Ǵ� ���� ����, 1���� b���� ����ȴ�.
	int d = 0; // ����� ����� a�迭�� ��ġ

	cin >> b;
	while (c <= b)
	{
		if (b%c == 0)
		{
			a[d] = c;   // ���� �迭�� ����
			d++;        // �迭 ��ġ ����
		}
		c++;            // ���� ���� 
	}
	for (int i = 0; i < d; i++)
	{
		cout << a[i] << endl;
	}
	system("pause");
	return 0;
}