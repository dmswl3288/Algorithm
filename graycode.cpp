#include<iostream>
#include<string>
#include<math.h>
#include<stdlib.h>
using namespace std;

// 첫번째 배열이 1이면 --> 2진수,        0이면 --> 그레이코드로 변환하기
int main()
{
	int input[5], cont[4];

	for (int i = 0; i < 5; i++)
	{
		cin >> input[i];         // 길이가 5인 배열 저장
	}
	cont[0] = input[1];          // 두번째 배열값을 cont 첫 배열에 저장

	if (input[0] == 1)           // 첫번째 배열이 1이면, 4개의 비트는 2진수로 변환 
	{
		for (int i = 0; i < 4; i++)
		{
			if (input[i + 2] == cont[i])             // XOR 2진수로 변환
				cont[i + 1] = 0;
			else
				cont[i + 1] = 1;
		}
	}
	else                         // 첫번째 배열이 0이면, 4개의 비트는 그레이코드로 변환
	{
		for (int i = 0; i < 4; i++)
		{
			if (input[i + 2] == input[i + 1])       // XOR 그레이코드로 변환
			{
				cont[i + 1] = 0;
			}
			else
				cont[i + 1] = 1;
		}
	}
	if (input[0] == 1)
	{
		cout << "이진수" << endl;
	}
	else
	{
		cout << "그레이코드" << endl;
	}
	for (int i = 0; i < 4; i++)
	{
		cout << cont[i];           // 결과 출력
	}

	system("pause");
	return 0;
}