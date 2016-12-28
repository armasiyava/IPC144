#include<stdio.h>
#define SIZE 100
//struct record{
//	char str[SIZE];
//	char num[SIZE];
//};
int main(){
	char ch,str[SIZE],num[SIZE],filename[30] ;
//	struct record temp;
	int i=0;
        printf("please enter the file name :");
        //scanf("%[^\n]",filename);
	printf("Chanaage Case\n");
	printf("===========\n");
	printf("Case (U for upper, L for lower) :");
//	scanf("%c",&ch);
	FILE *fp=NULL;
        fp=fopen("original.txt","r");
	if(fp==NULL){
              printf("\nERROR| can not open file");
	}
        else {	
              while(!feof(fp)){
			fscanf(fp,"%s:%s\n",str[i],num[i]);
			printf("%s : %s\n",str[i],num[i]);
			i++;		
	      }
        }
	
}
