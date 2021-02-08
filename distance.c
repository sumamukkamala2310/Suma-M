//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
int main()
{
	float x1, x2, y1, y2, distance;
	printf("Enter x1 value:");
	scanff("%f", &x1);
	printf("Enter x2 value:");
	scanf("%f", &x2); 
	printf("Enter y1 value:");
	scanf("%f", &y1);
	printf("Enter y2 value:");
	scanf("%f", y2);

	distance=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	printf("Distance between the points is %f", distance);
	return 0;
}
