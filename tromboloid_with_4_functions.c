//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float input()
{
    float h;
    printf("Enter a value\n");
    scanf("%f", &h);
    return h;
}

float find_volume(float h, float d, float b)
{
    float volume;
    volume= ((h*d*b)+(d/b))/3;
    return volume;
}

void output(float h, float d, float b, float volume)
{
    printf("volume of tromboloid with values %f,%f,%f is %f", h,d,b,volume);
}

float main()
{
    float x,y,z,k;
    x=input();
    y=input();
    z=input();
    k=find_volume(x,y,z);

    input(x,y,z);
    return 0;
}
