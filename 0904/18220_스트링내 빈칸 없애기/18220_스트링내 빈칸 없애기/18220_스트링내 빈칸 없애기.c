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
void trim(char* str);
int main(void)
{
	char str[100];
	int count = 0;
	int i = 0;
	fgets(str, 100, stdin);

	printf("Before: %s\n", str);
	trim(str);
	printf("After: %s\n", str);
	return 0;
}
void trim(char* str)
{
	int count = 0; // 전체 길이
	int remove_count = 0; // 삭제 필요 길이
	int i = 0;

	while (str[i] != '\0' && str[i] != '\n')
	{
		count++;
		i++;
	}
	i = 0;

	while (str[i] != '\0' && str[i] != '\n')
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			remove_count++;
		}
		if (str[i] != ' ' && str[i] != '\t')
		{
			break; // 반복문 종료
		}
		i++;
	}
	i = 0;
	while (remove_count + i <= count)
	{
		str[i] = str[remove_count + i];
		i++;
		str[count] = '\0';
	}

}