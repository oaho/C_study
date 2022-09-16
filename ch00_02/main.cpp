#include <stdio.h>
int main()
{
	//변수선언
	char name[10];
	char gender;
	int eng,math,com;
	double avg, GPA;
	//자료입력
	printf("이름?");
	scanf("%s",name);
	printf("성별(남자 M 여자 F)?");
	fflush(stdin);
	scanf("%c", &gender);
	printf("영어 수학 컴퓨터 점수?");
	scanf("%d %d %d",&eng, &math, &com);
	//자료처리
	avg=double(eng+math+com)/3.0;
	GPA=(avg*4.5)/100;
	//결과출력
	printf("==========================\n");
	printf("이름(성별) : %s (%c)\n", name,gender);
	printf("--------------------------\n");
	printf("영어 : %d점\n",eng);
	printf("수학 : %d점\n",math);
	printf("컴퓨터 : %d점\n",com);
	printf("--------------------------\n");
	printf("평균(평점) : %lf점 (%lf)\n",avg,GPA);

	printf("==========================\n");
	return 0;
}
