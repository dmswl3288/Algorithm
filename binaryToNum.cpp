#include<iostream>
#include<string>
#include<math.h>
#include<stdlib.h>
using namespace std;

// (10�ڸ��� ������)�Ҽ����� ���Ե� 2������ 10������ ��ȯ�ϱ�
int main()
{
	char arr[11];
	double a[10], sum = 0; 
	int i = 0;

	cin >> arr;     // 2���� 10�ڸ� �Է¹޴´�.
	
	while (i<10)
	{
		a[i] = arr[i]-'0';            // �迭 ���� �ϳ��� ������ ��ȯ
		a[i] = a[i] * pow(2, 4 - i);
		sum += a[i];
		i++;
	}
	cout << sum << endl;
	system("pause");
	return 0;
}