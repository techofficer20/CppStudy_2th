/*
문제 설명
최대 20개의 스트링을 저장할 수 있는 2차원 char 배열을 이용하여 20개 이하의 스트링을 읽어들인다.
(20개 혹은 EOF가 되면 읽기를 멈춘다)
포인터 배열 char *ptr[20]; 을 이용하여 최초에는 각 포인터가 순서대로 스트링을 가리키게 두고,
오름차순 ( "aaa"가 "bbb"보다 먼저)으로 정렬한다. (비교는 strcmp 함수로 하면 된다.)
단, 스트링 자체를 교환하지 않고 포인터만 교환하는 방식으로 정렬한다.
스트링 하나의 길이는 최대 99글자(영문자 기준)으로 제한한다.

* 출력은 현재 배열에 있는 순서대로 먼저 출력해보고,
다음에 포인터를 이용하여 순서대로 출력해본다.

기한
09/11 09:00
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[20][100]; //20 개의 문자열 배열 (각각 최대 99자)
	char* ptr[20]; // 포인터 배열
	char* ptr_2; // 교환 위한 포인터 배열
	int i = 0, j = 0; // 반복문 위한 변수
	int count = 0; // EOF 전까지 얼마나 있는지 카운트

	while (count < 20 && scanf("%s", str[count]) != -1)
	{
		ptr[count] = str[count];
		count++;
	}

	for (j = 0; j < count; j++)
	{
		for (i = 0; i < count - 1; i++)
		{
			if (strcmp(ptr[i], ptr[i + 1]) == 1)
			{
				ptr_2 = ptr[i];
				ptr[i] = ptr[i + 1];
				ptr[i + 1] = ptr_2;
			}
		}
	}

	printf("배열에 있는 순서\n");
	for (i = 0; i < count; i++)
	{
		printf("%s\n", str[i]);
	}

	printf("포인터를 이용해 순서대로 출력\n");
	for (i = 0; i < count; i++)
	{
		printf("%s\n", ptr[i]);
	}

	return 0;
}