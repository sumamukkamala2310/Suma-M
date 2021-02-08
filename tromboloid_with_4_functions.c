//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float main()
{
    float h,b,d,volume;
    printf("Enter the input values");
    scanf("%f%f%f",&h,&b,&d);
    volume=((h*b*d)+(d/b))/3;
    printf("%f", volume);
}
