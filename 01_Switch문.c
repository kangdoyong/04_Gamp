#include <stdio.h>

// switch���̶�?
// ���ǽ��� ����� ���� �� �ִ� �پ��� ��츦 �� ���� ���ϰ�
// ���α׷��� �帧�� ������ �� ����մϴ�.

// switch (����� �˻��� ��)
// {
//		case ���1 : 
//			���� ���1 �̶�� ������ �ڵ�;
//			break; (�����Ű���� �ϴ� ������ �������� �˸�)
//		case ���2 : 
//			���� ���2 �̶�� ������ �ڵ�;
//			break; (�����Ű���� �ϴ� ������ �������� �˸�)
//		default : (���� ������ case�� ��� �ƴ� ���)
//			�� ���� ��� ������ �ڵ�;
//			break;
// }
//

void main()
{
	int n;

	printf("n �Է� :");
	scanf("%d", &n);

	// n�� ���� �� �ִ� ���� ���� �˻�
	switch (n)
	{
		// ���� �ٸ� case���� �ϰ��� �ϴ� �۾��� ������ ��
		// case�� ��� ǥ���� �� �ִ�.
	case 1:
	case 2:
	case 3:
		printf("n�� 10���� �۽��ϴ�.\n");
		break;
		// alt + ����Ű �ٹٲ�

	case 10 :
		printf("n�� 10\n");
		break;
	case 20:
		printf("n�� 20\n");
		break;
	case 30:
		printf("n�� 30\n");
		break;
	default :
		printf("n�� 10, 20, 30�� �ƴմϴ�.\n");
		break;
	}

	// switch���� �Ϲ������� enum�� ���� ��� ��
	enum MonsterType {Goblin, Slime, Ork, Dragon};

	enum MonsterType t = Goblin;

	// switch�� �ڵ� �ϼ� ���
	// -> �˻��� ���� enum �� �� ��� ����
	
	// ���ڸ����� ��� �̿�
	// sw �Է� -> tab -> switch �⺻ ���¿��� �˻��� ���� �ִ� switch_on�� enum ���� �Է� -> tab -> ����Ű �Ʒ�

	// case ���� ��, ���ڿ� ������ enum ���� �̿��ϸ� �ڵ��� �������� ����
	// -> ����, enum�� ���� ��� �� 

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