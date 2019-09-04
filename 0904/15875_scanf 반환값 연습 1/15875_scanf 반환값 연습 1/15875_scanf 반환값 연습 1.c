#define _CRT_SECURE_NO_WARNINGS
/*
문제 설명
표준 입력에서 들어오는 모든 정수를 더하야 합을 출력한다.
단, 입력 개수를 직접 알려주지 않으므로 EOF(End of file)가 되면 그때 까지 입력된
개수 만큼만 처리하면 된다.

기한
09/09 오전 09:00
*/

#include <stdio.h>
int main(void)
{
	int input;
	int sum = 0;

	while (scanf("%d", &input) == 1)
	{
		sum += input;
	}
	printf("합: %d", sum);

	return 0;
}