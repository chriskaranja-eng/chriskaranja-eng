// a program to calculate area of rectangle
#include<stdio.h>
int main ()
{
	int length,width,area;
	printf("enter length");
	scanf("%d",& length);
	printf("enter width");
	scanf("%d",& width);
	length=20;
	width=10;
	area= length*width;
	printf("the area is %d",area);
	return 0;
}