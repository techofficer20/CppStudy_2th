/*
문제 설명
각 학생의 영어 및 수학 성적이 표준 입력파일에 있다.
순서는 학생 1의 영어성적, 학생 1의 수학 성적, 학생 2의 영어 성적, 학생 2의 수학 성적, .... 순서이다.
영어 성적이 더 좋은 학생의 수,
수학 성적이 더 좋은 학생의 수,
영어 수학 성적이 같은 학생의 수를 출력한다.
입력이 더이상 없거나 짝이 맞지 않으면 그 전까지의 결과를 출력하고 종료하면 된다.

기한
09/09 오전 09:00
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int math_score;
	int eng_score;
	int people_math = 0;
	int people_eng = 0;
	int people_same = 0;

	while (scanf("%d %d", &eng_score, &math_score) == 2)
	{
		if (eng_score > math_score)
		{
			people_eng++;
		}
		else if (eng_score < math_score)
		{
			people_math++;
		}
		else
		{
			people_same++;
		}
	}
	printf("영어 성적이 더 좋은 학생의 수: %d\n", people_eng);
	printf("수학 성적이 더 좋은 학생의 수: %d\n", people_math);
	printf("영어 수학 성적이 같은 학생의 수: %d\n", people_same);

	return 0;
}