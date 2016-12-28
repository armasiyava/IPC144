#include<stdio.h>
#define size 40 
int main(){
	double bar[size];
	int quantity[size],a=0,b=0,c=0;
	float price[size],value[size],total=0;
	printf("Grocery STORE Inventory\n");
	do{
//		while(bar[a]!=0){
//		for(a=0;bar[a]!=0;a++){
		printf("\nBarcode: ");
		scanf("%lf",&bar[a]);
		if(bar[a]!=0){
		printf("\nPrice: ");
		scanf("%f",&price[a]);
		printf("\nQuantity: ");
		scanf("%d",&quantity[a]);
}
		a++;
		
	//	}
		
	}
	while(a<size && bar[a-1]!=0);
	printf("\n Goods In Stock");
	printf("\nBarcode\t\tPrice\tQuantity\tValue\n" );
//for(c=0;c<a-1;c++){
//printf("%.lf\n",bar[c]);
//}
	for(b=0;b<a-1;b++){

		value[b]=price[b]*quantity[b];
		total=total +value[b];
		printf("\n%.lf\t%.2f\t%d\t\t%.2f ",bar[b],price[b],quantity[b],value[b]);	
}
	printf("\n");
	printf("\nTotal value goods  IN STOCK \t\t%.2f\n",total);
}
