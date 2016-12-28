
#include<stdio.h>
float futurevalue(float principal, float rate, float periods){
	float i, result, futurevalue;
	result=1;
	for(i=0;i<periods;i++){
		result=result*(1+ rate);
	}
	futurevalue=principal*result;
	return futurevalue;
}
int main(void){
	float principal,rate,periods,answer;
	printf("Investment calculator");
	printf("\nPrincipal:");
	scanf("%f",&principal);
	printf("\nAnnual Rate:");
	scanf("%f",&rate);
	printf("\nNo of Years:");
	scanf("%f",&periods);
	answer=futurevalue(principal, rate, periods);
	printf("\nThe future value is $%.2f ",answer);
}
