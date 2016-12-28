#include<stdio.h>
#include<string.h>
int main(){
	char words[101];
	int cnt=0,a;
	printf("Word Counter\n");
	printf("Text to be analyzed: ");
	scanf("%[^\n]",words);
	printf("\nWords count:\t");
	for(a=0;words[a]!='\0';a++){
		if(words[a]==' '){
		cnt=cnt+1;
		}
	}
	printf("%d\n",cnt+1);
}
