#include<iostream>
#include<string>
#include<math.h>
#include<stdlib.h>
using namespace std;

// (10자리로 구성된)소수점이 포함된 2진수를 10진수로 변환하기
int main()
{
	char arr[11];
	double a[10], sum = 0; 
	int i = 0;

	cin >> arr;     // 2진수 10자리 입력받는다.
	
	while (i<10)
	{
		a[i] = arr[i]-'0';            // 배열 문자 하나를 정수로 변환
		a[i] = a[i] * pow(2, 4 - i);
		sum += a[i];
		i++;
	}
	cout << sum << endl;
	system("pause");
	return 0;
}