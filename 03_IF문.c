#include <stdio.h>

// 국영수 점수(정수)를 사용자 입력받고
// 3과목의 평균을 구하여, 아래와 같이 출력
// 평균 값이 80.5 이상이라면, "평균은 80.5 이상입니다.:
// 아니라면 "평균은 80.5 이상이 아닙니다."라고 출력

void main()
{
	// 국영수 점수를 담을 변수 선언
	int kor, eng, math;

	printf("국어 : ");
	scanf("%d", &kor);
	printf("영어 : ");
	scanf("%d", &eng);
	printf("수학 : ");
	scanf("%d", &math);

	// 평균 값 연산

	// double avg = (double)(kor + eng + math) / 3;
	double avg = (kor + eng + math) / 3.0;

	// 조건식 확인 후, 결과 출력
	if (avg >= 80.5)
		printf("평균은 80.5 이상입니다. \n");
	else
		printf("평균은 80.5 이상이 아닙니다. \n");



	/* 내가 한 거
	int a, b, c;
	printf("국어 점수를 입력 : \n");
	scanf("%d", &a);
	printf("영어 점수를 입력 : \n");
	scanf("%d", &b); 
	printf("수학 점수를 입력 : \n");
	scanf("%d", &c);

	if ((a + b + c) / 3 > 80.5)
	{
		printf("평균은 80.5 이상입니다. \n");
	}
	else
	{
		printf("평균은 80.5 이상 아닙니다. \n");
	}*/
}