﻿/*
문제 설명
1부터 시작하여
1, 2, 4, 7, .. 처럼 앞 수와의 차이가 일정하게 증가하는
수열을 출력하라. (100 이하만)
단계별 작성 방법을 활용하여 4개 버전을 제출하라.
(실제 실행은 최종 단계에서만 되면 된다)

기한
09/09 09:00
*/
#include <stdio.h>
int main(void)
{
	int number = 1;
	int n = 1;

	while (number <= 100)
	{
		printf("%d\n", number);
		number += n;
		n++;
	}
}