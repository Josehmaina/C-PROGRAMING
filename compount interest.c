//program to calculate compound interest
#include<stdio.h>
#include<math.h>

int main()
{
	int p,t;
	float r,ci;
	
	printf("Enter principal amount/n");
	scanf("%d", &p);
	
	printf("Enter time/n");
	scanf("%d", &t);
	
	printf("Enter rate/n");
	scanf("%f", &r);
	
	ci = p * pow( (1 + r / 100), t );
	
	return 0;
}
