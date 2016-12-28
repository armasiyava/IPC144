#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int ran1,ran2,ans,s,i=0;
	printf("Game of Dice \n");
	printf("Enter total Sought:");
	scanf("%d",&s);
	while(s>12){
		printf("**Invalid Input ! Try Again! **\n");
		printf("Enter total sought:");
		scanf("%d",&s);
	}
	do{
		i++;
		ran1=rand() % 6 + 1;
		ran2=rand() % 6 + 1;
		ans=ran1+ran2;
		printf("Result of throw %d : %d + %d\n",i,ran1,ran2);
		}
	while(s!=ans);
	printf("You got your total in %d throws!",i);
}

