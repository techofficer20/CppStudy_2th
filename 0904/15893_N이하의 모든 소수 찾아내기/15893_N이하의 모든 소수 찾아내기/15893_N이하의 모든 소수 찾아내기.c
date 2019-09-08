/*
문제 설명
N 이하의 모든 소수를 순서대로 출력하는 프로그램을 작성하라.
(* 어떤 수가 소수인지 판별하는 함수를 만들어서 작성한다.)
N 값은 표준 입력에서 받도록 한다. (힌트: 2부터 N까지 차례로 소수 인지를 판단하여 소수이면 출력하고 아니면 다음으로 넘어간다.)

예시:
입력:  50

정답은:
2
3
5
7
11
13
17
19
23
29
31
37
41
43
47

기한
09/09 09:00
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int number; // 사용자의 입력값
	int test = 2; // 2부터 사용자 입력값 - 1까지 반복하는 숫자
	int number_2 = 2; // 2부터 입력값까지 반복하는 숫자
	int compare = 1; // 소수 판별 여부 숫자

	scanf("%d", &number);
	printf("입력: %d\n", number);

	if (number >= 2)
	{
		while (number_2 <= number)
		{
			while (test <= number_2 - 1)
			{
				if (number_2 % test == 0)
				{
					compare--;
				}
				test++;
			}
			if (compare == 1)
			{
				printf("%d\n", number_2);
			}
			number_2++;
			compare = 1;
			test = 2;
		}
	}

	return 0;
}