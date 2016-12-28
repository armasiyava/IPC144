#include<stdio.h>
int main(void){
	int SIN,checkdigit,digit1,digit2,digit3,digit4,digit5,digit6,digit7,digit8,digit9,alt1,alt2,alt3,alt4,altdigitsum,othersum,sepalt1,sepalt11,sepalt2,sepalt22,sepalt3,sepalt32,sepalt4,sepalt42,total,highmul,highdigit,diff;
	float a,b,c,d;
	printf("SIN Validator");
	
	
	do{
		printf("\nEnter SIN(0 to quit)");
		scanf("%d",&SIN);
		if(SIN!=0){
			checkdigit=SIN%10;
digit2=(SIN%100)/10;
digit3=(SIN%1000)/100;
digit4=(SIN%10000)/1000;
digit5=(SIN%100000)/10000;
digit6=(SIN%1000000)/100000;
digit7=(SIN%10000000)/1000000;
digit8=(SIN%100000000)/10000000;
digit9=(SIN%1000000000)/100000000;
	//add the first set of alternates to themselves.
	alt1=digit8+digit8;{
		sepalt1=alt1%10;
		sepalt11=alt1/10;}
	alt2=digit6+digit6;{
		sepalt2=alt2%10;
		sepalt22=alt2/10;}
	alt3=digit4+digit4;{
		sepalt3=alt3%10;
		sepalt32=alt3/10;}
	alt4=digit2+digit2;{
		sepalt4=alt4%10;
		sepalt42=alt4/10;}
		//add the digits of each sum.
	altdigitsum=sepalt1+sepalt11+sepalt2+sepalt22+sepalt3+sepalt32+sepalt4+sepalt42;
	othersum=digit9+digit7+digit5+digit3;
	total=altdigitsum+othersum;
	//highest integer multiple of 10
	highdigit=(total/10)+1;
			highmul=highdigit*10;
				diff=highmul-total;

	if(diff==checkdigit){
		printf("\nThis is a valid SIN");
	}
	else
	{
		printf("This is not a valid SIN");	
	}
	 }
}
while(SIN!=0);

printf("\nHave a nice day!");
}
