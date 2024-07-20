#include <stdio.h>

// if 문의 조건의 결과에 따라,
// 추가적인 검사를 하고 싶다면?
// -> else if문을 사용

// else if
// 단독으로 사용될 수 없고, if문이 선행되어야만 합니다.
// 분기점을 다양하게 만들 때 사용하는 기능
// 선행된 if문과 하나의 구문으로 인식됨

void main()
{
	int a;
	printf("a 입력 :");
	scanf("%d", &a);

	// a가 0보다 큰 지
	if (a > 0)
	{
		printf("양수\n");
	}
	// a가 0보다 작은지
	else if (a < 0)
	{
		printf("음수\n");
	}
	// 위의 두 조건이 모두 아니라면
	else
	{
		printf("0\n");
	}

	// else if는 (if문 다음 or else if문 다음에 사용)
	// else if가 사용될 때, else문을 사용한다면 else는 마지막에 와야 함

	// if, else if, else를 같이 사용 시, 하나의 구문으로 인식되며
	// 어딘간에서 조건에 부합했을 경우, 아래쪽의 else if, else 등은 모두 무시되고
	// 다음 라인으로 이동한다.
}