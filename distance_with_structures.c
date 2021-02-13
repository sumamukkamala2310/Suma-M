//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct point {
	int x,y;
};

double getdistance(struct point x, struct point y);
{
	double distance;
	distance = sqrt((x1-x2)*(x1-x2)+((y1-y2)*(y1-y2));
}


int main()
{
	struct point a,b;
	printf("Enter the value of x1:);
	scanf("%d", &x1);
	printf("Enter the value of x2:");
	scanf("%d", &x2);
	printf("Enter the value of y1:");
	scanf("%d", &y1);
	printf("Enter the value of y2:");
	scanf("%d", &y2);
	printf("Distance between the two points is: %lf", getdistance(x , y));

	return 0;
}
