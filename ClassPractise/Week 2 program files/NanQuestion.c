#include <stdio.h>
#include <math.h>
double velocityCalc(double,double,double, double);
double velocityCalc(double v,double u,double a, double t){
	double result;
	if(isnan(v)){
		result = u+a*t;
		printf("Final Velocity:%lf m/s",result);
	}else if(isnan(u)){
		result = v-a*t;
		printf("Initial Velocity:%lf m/s",result);
	}else if(isnan(a)){
		result = (v-u)/t;
		printf("acceleration:%lf m/s2",result);
	}else if(isnan(t)){
		result = (v-u)/a;
		printf("time:%lf sec",result);
	}
	return result;
}

void main(){
	double v,u,a,t;
	printf("Enter v, u, a ,t:");
	scanf("%lf %lf %lf %lf",&v,&u,&a,&t);
	if(v==999){
		v=NAN;
	}else if(u==999){
		u=NAN;
	}else if(a==999){
		a=NAN;
	}else if(t==999){
		t=NAN;
	}
	velocityCalc(v,u,a,t);
}
