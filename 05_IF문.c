#include <stdio.h>

void main()
{
	// if문을 중첩시켜서 프로그램의 흐름을 제어할 수도 있습니다.
	// -> 너무 많은 중첩은 코드의 가독성이 떨어지며, 좋은 코딩 스타일은 아님
	
	int a;
	printf("a 입력 :");
	scanf("%d", &a);

	// a가 0보다 큰 지
	if (a > 0)
	{
		printf("a는 양수 입니다.\n");

		if (a % 2 == 0)
			printf("a는 짝수 입니다.\n");
		else
			printf("a는 홀수 입니다.\n");
	}
	else
	{
		printf("0보다 작거나 같습니다.\n");
	}
}