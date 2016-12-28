#include<stdio.h>
void simplify(int *numerator,int *denominator){
	int gcd,a,b,c,d,reminder,e,f,g,b1,d1;
	b=*numerator;
	b1=b;
	d=*denominator;
	d1=d;
	while(b==0 || d==0){
		a=b/d;
		reminder=b%d;
		     
		
		b=d;
	
		d=reminder;
	}
	if(b!=0){	
	e=b1/b;

	f=d1/b;
	}
	else{
	e=b1/d;
	f=d1/d;
	}
	*numerator=e;
	*denominator=f;
	
	
}
int main(){
	int num,den;
	printf("Function Simplifire\n");
	printf("Numerator:");
	scanf("%d",&num);
	printf("Denominator:");
	scanf("%d",&den);
	printf("%d /%d",num,den);
	simplify(&num,&den);
	printf("= %d / %d",num,den);
	
}
