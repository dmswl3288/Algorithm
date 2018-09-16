#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

// 어떤수의 약수들을 배열에 저장하기
int main()
{
	int a[100], b; // 약수가 저장될 배열, 입력받을 변수
	int c = 1; // 1씩 증가되는 제수 변수, 1부터 b까지 변경된다.
	int d = 0; // 약수가 저장될 a배열의 위치

	cin >> b;
	while (c <= b)
	{
		if (b%c == 0)
		{
			a[d] = c;   // 제수 배열에 저장
			d++;        // 배열 위치 증가
		}
		c++;            // 제수 증가 
	}
	for (int i = 0; i < d; i++)
	{
		cout << a[i] << endl;
	}
	system("pause");
	return 0;
}