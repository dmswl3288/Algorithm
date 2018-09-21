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
			// 비교 대상i번째 값이 pivot위치의 값보다 작은 경우 교환
			if (data[i] < data[pivot])
			{
				// j를 오른쪽으로 이동시킨 후 swap
				j++;                      
				swap(&data[j], &data[i]);
			}
		}
		swap(&data[left], &data[j]);
		pivot = j;

		// 가운데가 된 pivot을 중심으로 왼쪽 영역 재귀
		quickSort(left, pivot - 1, data);
		// 가운데가 된 pivot을 중심으로 오른쪽 영역 재귀
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