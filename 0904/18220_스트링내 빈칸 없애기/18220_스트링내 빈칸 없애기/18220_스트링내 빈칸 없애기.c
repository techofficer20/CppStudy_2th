/*
문제 설명
주어진 스트링의 앞에 빈칸이나 탭이 있을 경우 이를 모두 삭제하는 함수 trim 을 작성하라.
예를 들어   "    Hello world" 를 "Hello world"로 만드는 것이다.

테스트:

char str[100];
fgets(str, 100, stdin);  // 한 줄을 읽는다. 이건 그냥 쓰면 된다.
printf("Before: %s\n", str);
trim(str);
printf("After: %s\n", str);

기한
09/09 09:00
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str[100];
	int count = 0;
	int i = 0;
	fgets(str, 100, stdin);

	// 입력: **&hello (*: 탭, &: 빈칸)
	// null 값, 엔터키가 아닐 때 검사
	// 빈칸이나 탭이면 count
	// 단, 빈칸이나 탭이 아닌 것이 오면 반복문이 종료되어야 함.

	while (str[i] != '\0' && str[i] != '\n')
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			count++;
		}
		if (str[i] != ' ' && str[i] != '\t')
		{
			break; // 반복문 종료
		}
		i++;
	}
	printf("제거해야 할 탭, 공백 갯수: %d\n", count);
	printf("Before: %s\n", str);

	str[0] = str[3];
	str[1] = str[4];
	str[2] = str[5];
	str[3] = str[6];
	str[4] = str[7];
	str[5] = str[8];
	str[6] = '\0';

	printf("After: %s\n", str);
	return 0;
}