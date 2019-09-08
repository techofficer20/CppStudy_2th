/*
문제 설명
2이상의 자연수 N 이 있을 때, 1과 N이 아닌 어떤 수 m 으로도 나누어 떨어지지 않으면
그 수는 소수(prime number)라고 한다.
예를 들어 7은 2,3,4,5,6 어떤 수로도 나누면 나머지가 남는다. 따라서 7은
소수이다.
표준입력에서 입력한 정수가 소수인지를 판단하여 "소수" 또는 "아님"으로
출력하는 프로그램을 작성하라.
* 힌트: 만일 N/2 로 나누는 것 까지 안되면 그 이상은 해 볼 필요가 없이 prime이다

기한
09/09 09:00
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int number;
	int test_number = 2;
	int compare = 1;

	scanf("%d", &number);
	if (number >= 2)
	{
		while (test_number <= number - 1)
		{
			if (number % test_number == 0)
			{
				compare--;
			}
			test_number++;
		}
		if (compare == 1)
		{
			printf("소수");
		}
		else
		{
			printf("아님");
		}
	}
	return 0;
}