#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
int main(){
	
	//PART - 1
	printf("Part-1 Output\n");
	printf("========================\n\n");
	printf("Array of random numbers:\n");
	int fahr[30],i,sum=0;
	float avg;
	for( i=0; i<30; i++){
		fahr[i] = rand()%61;
	}
	for( i=0; i<30; i++){
		printf("fahr[%d] = %d\n", i, fahr[i]);
	}
	for( i=0; i<30; i++){
		sum = sum + fahr[i];
	}
	avg =(sum/30.00);
	printf("\nAverage temperature = %.2f\n", avg);
	
	//PART - 2
	printf("\n\n\nPart-2 Output\n");
	printf("========================\n\n");
	int entry=0;
	float chk,sump=0,avgp;
	float price[30] = {0};
	for( i=0; i<30; i++){
		printf("Enter a price, use -100 to stop data entry: ");
		scanf("%f",&chk);
		if(chk==-100)
			break;
		else{
			price[i]=chk;
			entry++;
		}
	}
	printf("No. of entries = %d\n\n", entry);
	printf("Partially filled array:\n");
	for(i=0;i<30;i++){
		if(price[i]!=0)
			printf("$%.2f\n",price[i]);
	}
	for( i=0; i<30; i++){
		sump = sump + price[i];
	}
	avgp = (sump/(float)entry);
	printf("\nAverage price = $%.2f\n", avgp);
	getch();
	}
