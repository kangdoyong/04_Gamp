#include <stdio.h>

// switch문이란?
// 조건식의 결과가 가질 수 있는 다양한 경우를 한 번에 평가하고
// 프로그램의 흐름을 제어할 때 사용합니다.

// switch (결과를 검사할 값)
// {
//		case 상수1 : 
//			값이 상수1 이라면 실행할 코드;
//			break; (실행시키고자 하는 로직이 끝났음을 알림)
//		case 상수2 : 
//			값이 상수2 이라면 실행할 코드;
//			break; (실행시키고자 하는 로직이 끝났음을 알림)
//		default : (위에 열거한 case가 모두 아닐 경우)
//			그 외의 경우 실행할 코드;
//			break;
// }
//

void main()
{
	int n;

	printf("n 입력 :");
	scanf("%d", &n);

	// n이 가질 수 있는 값에 대한 검사
	switch (n)
	{
		// 서로 다른 case에서 하고자 하는 작업이 동일할 때
		// case를 묶어서 표현할 수 있다.
	case 1:
	case 2:
	case 3:
		printf("n은 10보다 작습니다.\n");
		break;
		// alt + 방향키 줄바꿈

	case 10 :
		printf("n은 10\n");
		break;
	case 20:
		printf("n은 20\n");
		break;
	case 30:
		printf("n은 30\n");
		break;
	default :
		printf("n은 10, 20, 30이 아닙니다.\n");
		break;
	}

	// switch문은 일반적으로 enum과 같이 사용 됨
	enum MonsterType {Goblin, Slime, Ork, Dragon};

	enum MonsterType t = Goblin;

	// switch문 자동 완성 기능
	// -> 검사할 값이 enum 일 때 상요 가능
	
	// 인텔리센스 기능 이용
	// sw 입력 -> tab -> switch 기본 형태에서 검사할 값을 넣는 switch_on에 enum 변수 입력 -> tab -> 방향키 아래

	// case 열거 시, 문자열 형태의 enum 값을 이용하면 코드의 가독성이 향상됨
	// -> 따라서, enum과 자주 사용 됨 

	switch (t)
	{
	case Goblin:
		break;
	case Slime:
		break;
	case Ork:
		break;
	case Dragon:
		break;
	default:
		break;
	}
}