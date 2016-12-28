//"I declared that the attached assignment is wholly my own work in accordance with Seneca Academic Policy. No part of this assignment has been copied manually or electronically from any other source(including web sites) or distributed to other students."
// Name armasiyava  Student Id 026705145. 
#include<stdio.h>
void first(int);
void second(int);
int main(){
	int studentnumber,a,cents,digit3,digit4,digit43,digit5,digit6;
	char senecaid;
	float inclusive;
	
	printf("Welcome to the IPC cheque Generator...");
	printf("\n Enter a monetary value from $0.01 to $9999.99 inclusive: ");
	scanf("%f",&inclusive);
	if(inclusive<0.01 || inclusive>=10000.00){
	printf("\nSorry, can not create cheque for that amount, try again next time!\n");
	}
	else{
		printf("\nPAY TO THE ORDER OF...armasiyava(026705145)\n");
		a=inclusive*100;
		cents=a%100;
		digit6=inclusive/1000;
		inclusive=inclusive-(digit6*1000);
		digit5=inclusive/100;
		inclusive=inclusive-(digit5*100);
		if(inclusive>19){
			digit4=inclusive/10;
			inclusive=inclusive-(digit4*10);
		}
		else{
			digit4=inclusive;
			
			}
		digit3=inclusive;
		if(digit6>0){
			first(digit6);
			printf(" Thousand ");
			}
		if(digit5>0){
			second(digit5);
			printf(" Hundred ");
			}
			second(digit4);
		if(digit4>0){
			first(digit4);
			printf(" Dollars and...");
			}
		else if(digit4==0){
			printf("Zero  Dollars and ...");
			}
	
		printf(" %d cents\n",cents);
	
	}

}	
	
	

void first(int b){
	if(b==1){
		printf("One ");
		}
	else if(b==2){
		printf("Two ");
		}
	else if(b==3){
		printf("Three ");
		}
	else if(b==4){
		printf("Four ");
		}
	else if(b==5){
		printf("Five ");
		}
	else if(b==6){
		printf("Six ");
		}
	else if(b==7){
		printf("Seven ");
		}
	else if(b==8){
		printf("Eight ");
		}
	else if(b==9){
		printf("Nine ");
		}
}
void second(int c){
	if(c==10){
	printf("Ten ");
	}
	else if(c==11){
		printf("Eleven ");
	}
	else if(c==12){
		printf("Twelve ");
	}
	else if(c==13){
		printf("Thirteen ");
	}
	else if(c==14){
		printf("Fourteen ");
	}
	else if(c==15){
		printf("Fifteen ");
	}
	else if(c==16){
		printf("Sisteen ");
	}
	else if(c==17){
		printf("Seventeen ");
	}
	else if(c==18){
		printf("Eighteen ");
	}
	else if(c==19){
		printf("Nineteen ");
	}
	else if(c==2){
		printf("Twenty ");
	}
	else if(c==3){
		printf("Thirty ");
	}
	else if(c==4){
		printf("Fourty ");
	}
	else if(c==5){
		printf("Fifty ");
	}
	else if(c==6){
		printf("Sixty ");
	}
	else if(c==7){
		printf("Seventy ");
	}
	else if(c==8){
		printf("Eighty ");
	}
	else if(c==9){
		printf("Ninety ");
	}
}
