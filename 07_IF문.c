#include <stdio.h>

// ���� ������ �Է¹ް�, ����� ���

// ���� 0 ~ 100 ������ ����

// �� ��     - E
// 60�� �̻� - D
// 70�� �̻� - C
// 80�� �̻� - B
// 90�� �̻� - A

void main()
{
	int score;
	printf("���� :");
	scanf("%d", &score);

	// �Է� ���� ���� ����ó��
	if (score >= 0 && score <= 100)
	{
		if (score >= 90) printf("��� A");
		else if (score >= 80) printf("��� B");
		else if (score >= 70) printf("��� C");
		else if (score >= 60) printf("��� D");
		else printf("��� E");
	}
	else
	{
		printf("�߸��� �� �Դϴ�\n");
	}


	/* ���� �� ��
	int test;
	printf("���� ���� �Է�:");
	scanf("%d", &test);

	if (test >= 90)
		printf("A���\n");
	else if (test >= 80)
		printf("B���\n");
	else if (test >= 70)
		printf("C���\n");
	else if (test >= 60)
		printf("D���\n");
	else
		printf("E���\n");*/
}