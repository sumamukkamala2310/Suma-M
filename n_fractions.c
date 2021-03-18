#include<stdio.h>
int main()
{
int n, i, sum;
 int sum=0;
printf("Enter a positive integer:");
scanf("%d", &n);
for(i = 1; i<= n; i++)
{
sum += 1;
}
printf("Sum = %d", sum);
return 0;
} 
