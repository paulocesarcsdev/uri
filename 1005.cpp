#include<stdio.h>
	int main(){
		double x, y, A=3.5, B=7.5, MEDIA;
		scanf("%lf %lf", &x, &y);
		MEDIA = (x*A+y*B) / (A+B);
		printf("MEDIA = %.5lf\n",MEDIA);
		
		return 0;
	}

