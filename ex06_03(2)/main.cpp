#include <iostream>
using namespace std;
#define R 5  //학생수
#define C 4
//e06_03에서 학번추가한거
void main()
{
	int data[R][C]={{123,90,75,50}, 
					{456,40,85,60} , 
					{789,50,50,40},
					{1023,60,60,50},
					{659,80,80,70}};

	int total[R];
	double avg[R];
	int max[R];
	int min[R];
	int cnt[R];
	int row, col, i;

	//cout << "date[0][0]" << data[0][0] << "\n";
	//cout << "data[4][2]"

	//각 학생마다 최대, 최소, 평균, 등수
	for (row=0; row<R; row++){
		total[row]=0;
		max[row]=data[row][1];
		min[row]=data[row][1];
		for(col=1; col<C; col++)
		{
			total[row]=
			total[row]+data[row][col];

			if(max[row]<data[row][col])
				max[row] = data[row][col];
			if(min[row]>data[row][col])
				min[row] = data[row][col];

		}
		avg[row] =(double)total[row]/(C-1); 

	}
	for(i=0; i<R; i++) {
		cnt[i]=1;
		for(int u=0; u<R; u++){
			if(total[i]<total[u])
				cnt[i]++;
		}

	}
	cout << "\n학번\t총점\t평균\t\t최대\t최소\t등수\n";
	for(i=0; i<R;i++)
		cout << data[i][0] << "\t" << total[i]
	<< "\t"<<avg[i] << "\t\t" <<  max[i]
	<<"\t" << min[i] << "\t" << cnt[i] << "\n";

	cout << "\n";

	//각 과목 최대, 최소 평균점수
	for(col=1; col<C; col++){
		total[col]=0;
		max[col]=data[0][col];
		max[col]=data[0][col];
		for(row=0; row<R; row++){
			total[col]
			= total[col] + data[row][col];
			if(max[col]<data[row][col])
				max[col]=data[row][col];
			if(min[col]<data[row][col])
				min[col]=data[row][col];
		}
		avg[col]=(double)total[col]/R;
	}
	cout << "\t과목1\t과목2\t과목3\n";
	cout << "총점 \t ";
	for(i=1; i<C; i++)
		cout << total[i] << "\t";
	cout << "\n평균\t";
	for(i=1; i<C; i++)
		cout << avg[i] << "\t";
	cout << "\n최대\t";
	for(i=1; i<C; i++)
		cout << max[i] << "\t";
	cout << "\n최소\t";
	for(i=1; i<C; i++)
		cout << min[i] << "\t";
	cout << "\n";
}