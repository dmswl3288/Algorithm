#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

// 두 수의 최대공약수와 최소공배수를 구하기
int main()
{
	int a, b, big, small, mok, nmg, gcm, lcm;

	cin >> a >> b;                // 두 수 a, b입력
	if (a > b)                    // a가 더 크면 큰수로 저장
	{
		big = a;
		small = b;
	}
	else                          // b가 더 크면 큰수로 저장
	{
		big = b;
		small = a;
	}
	while (1)
	{
		mok = big / small;         // 몫
		nmg = big - (mok*small);   // 나머지

		if (nmg == 0)              // 나머지가 0이면 
		{
			gcm = small;           // small을 최대공약수로 저장
			lcm = a * b / gcm;     // 원래 두수의 곱을 최대공약수로 나눈 수를 최소공배수로 저장
			cout << gcm << " " << lcm << endl;
			break;
		}
		else
		{
			big = small;           // 작은 수를 큰수로 저장
			small = nmg;           // 나머지를 작은수로 저장
		}
	}
	system("pause");
	return 0;
}