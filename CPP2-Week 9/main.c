#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//CPP-2 Week 8
// �й�, �̸� , Ű (cm), ü�� (kg) , BMI �����Ͱ� �� �ִ�. 
struct std {
	char name[100];
	int num, height, weight;
	float bmi;
};
struct std data[100];

float avg(int n) {
	int i;
	float temp = 0.0;
	for (i=0; i<=n; i++) {
		temp += data[i].bmi;
	}
	temp = temp/n;
	return temp;
}
//����� ���ϴ� �Լ�  

float devi(float q, int n) {
	int i;
	float b =0;
	for (i=0; i<n; i++) {
		b += (data[i].bmi - q) * (data[i].bmi - q);
	}
	b = b / n;
	b = sqrt(b);
	return b;
}
//ǥ�������� ���ϴ� �Լ�

float zscore (int n, float average, float mean) {
	return (data[n].bmi - average) / mean;
}
//Z���� (ǥ������) ��� 

int main(int argc, char *argv[]) {
	FILE *fp, *fp2;
	char c; int i = 0;
	int n;
	float bmi, bmiavg, mean, tmp;
	//var check
	
	if ((fp = fopen("bmi.txt","r"))== NULL) {
		printf("file open error : %s","bmi.txt");
		exit(1);
	}
	//error check
	
	while (1) {
		fscanf(fp, "%d %s %d %d %f\n",&data[i].num, data[i].name, &data[i].height, &data[i].weight, &data[i].bmi);
		if (feof(fp) != 0) {
			break;
		}
		i++;
	}
	//scan
	
	n=i;
	n++;
	
	bmiavg = avg(n);
	mean = devi(bmiavg,n);
	//avg, stddev
	
	printf("%f %f\n",bmiavg,mean);
	
	for (i=0; i<n; i++) {
		tmp = zscore(i, bmiavg, mean);
		tmp = tmp*10 + 50;
		printf("%d�� %s �л�,  %d kg %d cm, BMI : %f, ǥ������:  %f \n",data[i].num,data[i].name,data[i].weight,data[i].height,data[i].bmi,tmp);
	}
	//print
	fclose(fp);
}
