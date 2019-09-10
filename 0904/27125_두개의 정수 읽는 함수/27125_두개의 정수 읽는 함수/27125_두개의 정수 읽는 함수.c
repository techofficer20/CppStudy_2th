﻿/*
문제 설명
두개의 정수, 학생수와 과목수를 입력해주는 합수 getSize를 작성하여 활용하라. 
getSize함수는 “학생 수를 입력하세요” 안내를 하고 학생 수를 읽는다.
만일 학생 수가 0이하거나 100을 초과하면 “틀렸습니다.”라고 출력하고 다시 입력을 받는다. 
만일 EOF이거나 숫자가 아닌 문자가 오가 되면 0 을 돌려줌으로써 종료한다. 
과목 수도 같은 방식으로 읽어들인다. (과목 수는 1~10 만 허용) 
getSize내부에서는 scanf를 이용한다.
main:
int numStu; //학생 수
int numCourse; // 과목 수

if (getSize( ... ) == 1 ){
	  printf("학생 수: %d 과목 수: %d\n", numStu, numCourse);
} else {
	  printf("실패\n");
}

기한
09/11 오전 09:00
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int getSize(int* numStu, int* numCourse);
int main(void)
{
	int numStu = 0; // 학생 수
	int numCourse = 0; // 과목 수

	if (getSize(&numStu, &numCourse) == 1)
	{
		printf("학생 수: %d 과목 수: %d\n", numStu, numCourse);
	}
	else
	{
		printf("실패\n");
	}
	return 0;
}
int getSize(int* numStu, int* numCourse)
{
	if (scanf("%d %d", numStu, numCourse) != 2)
	{
		return 0;
	}
	else
	{
		while (*numStu <= 0 || *numStu > 100 || *numCourse <= 0 || *numCourse > 10)
		{
			printf("틀렸습니다.\n");
			scanf("%d %d", numStu, numCourse);
		}
		return 1;
	}
}