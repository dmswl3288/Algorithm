#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void quickSort(int left, int right, int* data)
{
	int pivot = left;
	int j = pivot;
	
	if (left < right)
	{
		for (int i = left + 1; i <= right; i++)
		{
			// �� ���i��° ���� pivot��ġ�� ������ ���� ��� ��ȯ
			if (data[i] < data[pivot])
			{
				// j�� ���������� �̵���Ų �� swap
				j++;                      
				swap(&data[j], &data[i]);
			}
		}
		swap(&data[left], &data[j]);
		pivot = j;

		// ����� �� pivot�� �߽����� ���� ���� ���
		quickSort(left, pivot - 1, data);
		// ����� �� pivot�� �߽����� ������ ���� ���
		quickSort(pivot + 1, right, data);
	}
}
int main()
{
	int arr[10] = { 5,4,3,2,1,9,8,7,6,10 };

	// left, right, array
	quickSort(0, 9, arr);

	for (int i = 0; i < 10; i++)
		cout << arr[i] << " ";

	system("pause");
	return 0;
}