#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

// 10진수를 b(2~16)진수로 변환하기
int main()
{
	char a[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E', 'F'}; // 0~9, A~F까지 저장되어 있는 배열
	int b; // 변환할 진수의 밑이 저장될 변수, 2~16중 하나가 저장
	int c; // 10진수가 저장될 변수
	int d; // c에 가장 가까운 b의 누승이 저장될 변수
	int e; // c를 d로 나눈 몫이 저장될 변수
	int f; // c를 d로 나눈 나머지 저장

	cin >> b >> c;
	d = 1;
	while (d <= c)
	{
		d = d * b;   // 누승 저장
	}
	while (1)
	{
		if (d > 1)     // 누승이 1보다 크면
		{
			d = d / b;    // 누승을 진수로 나눈다.
		}
		e = c / d;      // 몫
		f = c - e * d;  // 나머지
		cout << a[e];

		if (d != 1)
			c = f;
		else
			break;
	}

	system("pause");
	return 0;
}