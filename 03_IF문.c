#include <stdio.h>

// ������ ����(����)�� ����� �Է¹ް�
// 3������ ����� ���Ͽ�, �Ʒ��� ���� ���
// ��� ���� 80.5 �̻��̶��, "����� 80.5 �̻��Դϴ�.:
// �ƴ϶�� "����� 80.5 �̻��� �ƴմϴ�."��� ���

void main()
{
	// ������ ������ ���� ���� ����
	int kor, eng, math;

	printf("���� : ");
	scanf("%d", &kor);
	printf("���� : ");
	scanf("%d", &eng);
	printf("���� : ");
	scanf("%d", &math);

	// ��� �� ����

	// double avg = (double)(kor + eng + math) / 3;
	double avg = (kor + eng + math) / 3.0;

	// ���ǽ� Ȯ�� ��, ��� ���
	if (avg >= 80.5)
		printf("����� 80.5 �̻��Դϴ�. \n");
	else
		printf("����� 80.5 �̻��� �ƴմϴ�. \n");



	/* ���� �� ��
	int a, b, c;
	printf("���� ������ �Է� : \n");
	scanf("%d", &a);
	printf("���� ������ �Է� : \n");
	scanf("%d", &b); 
	printf("���� ������ �Է� : \n");
	scanf("%d", &c);

	if ((a + b + c) / 3 > 80.5)
	{
		printf("����� 80.5 �̻��Դϴ�. \n");
	}
	else
	{
		printf("����� 80.5 �̻� �ƴմϴ�. \n");
	}*/
}