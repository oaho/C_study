#include <stdio.h>
int main()
{
	//��������
	char name[10];
	char gender;
	int eng,math,com;
	double avg, GPA;
	//�ڷ��Է�
	printf("�̸�?");
	scanf("%s",name);
	printf("����(���� M ���� F)?");
	fflush(stdin);
	scanf("%c", &gender);
	printf("���� ���� ��ǻ�� ����?");
	scanf("%d %d %d",&eng, &math, &com);
	//�ڷ�ó��
	avg=double(eng+math+com)/3.0;
	GPA=(avg*4.5)/100;
	//������
	printf("==========================\n");
	printf("�̸�(����) : %s (%c)\n", name,gender);
	printf("--------------------------\n");
	printf("���� : %d��\n",eng);
	printf("���� : %d��\n",math);
	printf("��ǻ�� : %d��\n",com);
	printf("--------------------------\n");
	printf("���(����) : %lf�� (%lf)\n",avg,GPA);

	printf("==========================\n");
	return 0;
}
