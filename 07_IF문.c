#include <stdio.h>

// 시험 점수를 입력받고, 등급을 출력

// 점수 0 ~ 100 사이의 정수

// 그 외     - E
// 60점 이상 - D
// 70점 이상 - C
// 80점 이상 - B
// 90점 이상 - A

void main()
{
	int score;
	printf("점수 :");
	scanf("%d", &score);

	// 입력 값에 대한 예외처리
	if (score >= 0 && score <= 100)
	{
		if (score >= 90) printf("등급 A");
		else if (score >= 80) printf("등급 B");
		else if (score >= 70) printf("등급 C");
		else if (score >= 60) printf("등급 D");
		else printf("등급 E");
	}
	else
	{
		printf("잘못된 값 입니다\n");
	}


	/* 내가 한 거
	int test;
	printf("시험 점수 입력:");
	scanf("%d", &test);

	if (test >= 90)
		printf("A등급\n");
	else if (test >= 80)
		printf("B등급\n");
	else if (test >= 70)
		printf("C등급\n");
	else if (test >= 60)
		printf("D등급\n");
	else
		printf("E등급\n");*/
}