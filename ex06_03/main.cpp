#include <iostream>
using namespace std;
#define R 5  //�л���
#define C 3

void main()
{
	int data[R][C]={{90,75,50}, 
					{40,85,60} , 
					{50,50,40},
					{60,60,50},
					{80,80,70}};

	int total[R];
	double avg[R];
	int max[R];
	int min[R];
	int cnt[R];
	int row, col, i;

	//cout << "date[0][0]" << data[0][0] << "\n";
	//cout << "data[4][2]"

	//�� �л����� �ִ�, �ּ�, ���, ���
	for (row=0; row<R; row++){
		total[row]=0;
		max[row]=data[row][1];
		min[row]=data[row][1];
		for(col=0; col<C; col++)
		{
			total[row]+=
			data[row][col];

			if(max[row]<data[row][col])
				max[row] = data[row][col];
			if(min[row]>data[row][col])
				min[row] = data[row][col];

		}
		avg[row] =(double)total[row]/(C); 

	}
	for(i=0; i<R; i++) {
		cnt[i]=1;
		for(int u=0; u<R; u++){
			if(total[i]<total[u])
				cnt[i]++;
		}

	}
	cout << "\n�й�\t����\t���\t\t�ִ�\t�ּ�\t���\n";
	for(i=0; i<R;i++)
		cout << (i+1) << "\t" << total[i]
	<< "\t"<<avg[i] << "\t\t" <<  max[i]
	<<"\t" << min[i] << "\t" << cnt[i] << "\n";

	cout << "\n";

	//�� ���� �ִ�, �ּ� �������
	for(col=0; col<C; col++){
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
	cout << "\t����1\t����2\t����3\n";
	cout << "���� \t ";
	for(i=0; i<C; i++)
		cout << total[i] << "\t";
	cout << "\n���\t";
	for(i=0; i<C; i++)
		cout << avg[i] << "\t";
	cout << "\n�ִ�\t";
	for(i=0; i<C; i++)
		cout << max[i] << "\t";
	cout << "\n�ּ�\t";
	for(i=0; i<C; i++)
		cout << min[i] << "\t";
	cout << "\n";
}