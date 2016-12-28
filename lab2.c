#include<stdio.h>
int main(void){
	int i,j;
	float a,b,c,d,e,f,g,h;
	printf("Enter the number of items:");
	scanf("%f",&a);
	printf("\nEnter the unit price:");
	scanf("%f",&b);
	printf("\nPurchase price:");
	c=a*b;
	printf("%f",c);
	d=(c*13)/100;
	printf("\nHST(13%) :");
	printf("%f",d);
	e=c+d;
	printf("\nTotal price:");
	printf("%f",e);
	printf("\nCash tendered:");
	scanf("%f",&f);
	printf("\nChange loonies:");
	i=f-e;
	printf("%d",i);
	printf("\nChange cents:");
	g=f-e;
	h=g*100;
	j=h-(i*100);
	printf("%d\n",j);
	}
