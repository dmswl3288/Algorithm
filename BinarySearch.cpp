#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

// Binary Search 이분 검색
int main()
{
	int data[10] = {8,15,35,55,60,61,90,80,92,99};
	int num, start, end, middle;

	cin >> num;             // 찾고자 하는 숫자 입력
	start = 0;
	end = 9;

	while (1)
	{
		if (start <= end)
		{
			middle = (start + end) / 2;             // 중간 인덱스 

			if (num == data[middle])
			{
				cout << num << " " << middle;       // 숫자를 찾은 경우 숫자와 인덱스 출력
				break;
			}
			else
			{
				if (num < data[middle])             // 숫자가 가운데 값보다 작다면 end를 왼쪽으로 이동
				{
					end = middle - 1;
				}
				else                                // 숫자가 가운데 값보다 크다면 start를 오른쪽으로 이동
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