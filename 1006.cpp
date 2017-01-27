#include<stdio.h>
	int main(){
		double x, y , u, A=2, B=3, C=5, MEDIA;
		scanf("%lf %lf %lf", &x, &y, &u);
		MEDIA = x*A + y*B + u*C ;
		MEDIA = MEDIA / (A+B+C);
		printf("MEDIA = %.1lf\n", MEDIA);
		return 0;
	}

