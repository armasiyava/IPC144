//I declare that the attached assignment is wholly my own work in accordance with seneca Academic policy .No part of this assignment has been copid mannually or electronically from any other source(including websites)or distributed to other students."
//Name Arohi Masiyava  Student Id:026705145 
#include<stdio.h>
#include<math.h>
int containersize(int);
int nutrientlevelcoeffi(int);
int temprature(int);
double maxgeneration(float,double);
double maxhours(double,float,double);
int main(){
	int size=0,a,level=4,b,temp=1,c;
        float initialtime=1,maxtime;
	double f,g, k=0.005,initial=0.1000,n,maximum,maximumhours,hours,p;
	printf("Welcome to the population growth program..\n");
	printf("What is the size of container(in feet)?\n");
	a=containersize(size);
	printf("What is the nutrient level of coefficient?\n");
	b=nutrientlevelcoeffi(level);
	printf("What is the incubating temprature (in degree C.)\n");
	c=temprature(temp);
	if(a<8){
	k=k+(0.003000*(8-a)); 
	}
	if(b<=3){
	k=k+(0.004825*(3-b));   
	}
	if(c<=37){
	k=k+(0.001000*(37-c));  
	}
	else if(c<37){
	k=k+(0.0010000*(c-37));
	}
	do{

	f=(1-initial)*initialtime;
	g=pow(M_E,f);
	n=1*g;
	initial=initial+k;
	initialtime++;
	if(n>maximum){
		maximum=n;
		maxtime=initialtime;
	}
	}
	while((int)n!=0);
	initialtime--;
	hours=((initialtime*20)/60);
	maximumhours=((maxtime*20)/60);
	maxgeneration(maxtime,maximum);
	maxhours(maximumhours,initialtime,hours);
	return 0;
}
int containersize(int s){
	while(s<=0||s>=9){
		printf("Enter value --->");
		scanf("%d",&s);
		if(s<=0||s>=9){
			printf("\n%d is an unacceptable value for this data..\n",s);
			printf("The value must be between 1 and 8\n");
	}
	else{
		printf("\n");
	}
	s=s;
}
	return s;
}
	int nutrientlevelcoeffi(int l){
		while(l<0||l>3){
			printf("Enter value --->");
			scanf("%d",&l);
			if(l<0||l>3){
				printf("\n %d is an unacceptable value for this data..\n",l);
				printf("The value must be between 0and 3\n");   
		}
			else{
				printf("\n");
			}
			l=l;    
}
		return l;
	}
	int temprature(int temp){
		while(temp<20||temp>54){
			printf("Enter value --->");
			scanf("%d",&temp);
			if(temp<20||temp>54){
				printf("\n %d is an unacceptable value for this data..\n",temp);
				printf("The value must be between 20 and 54\n");
		}
		temp=temp;
}
		return temp;
}
		double maxgeneration(float maximumtime,double max){
		float hr=maximumtime-1;
		printf("Maximum population reached after %.0f generation\n",hr);
		printf("Maximum population %.0lf\n",max);
		return 0;
		}
		double maxhours(double maxihours,float time,double hours){
			int hour=time-1;
			printf("Maximum population reached after %.2lf hours\n ",maxihours);
			printf("Population reaches 0 after %.0f generation\n",time);
			printf("Colony lived for %.2lf hours\n",hours);
			return 0;       
}

