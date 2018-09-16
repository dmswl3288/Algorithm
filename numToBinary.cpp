#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

// 10진수를 2진수로 변환하기
int main()
{
	int a[10], mok, nmg, b, i=0;

	cin >> b;
	while (1)
	{
		mok = b / 2;          // 몫과 나머지 구하기
		nmg = b - mok * 2;

		a[i] = nmg;           // 나머지를 배열에 차례대로 저장
		if (mok == 0)
		{
			break;            // 몫이 0이면 break;
		}
		
		b = mok;              // 몫을 나눌 피제수로 변경
		i++;                  // 배열의 위치 증가
	}
	for (int k = i; k >= 0; k--)     // 역으로 배열 출력
	{
		cout << a[k];            
	}
	system("pause");
	return 0;
}