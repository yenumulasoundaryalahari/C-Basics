#include<stdio.h>
#include<limits.h>
void main()
{
	printf("long int:\nsigned:%ld to %ld\n",LONG_MIN,LONG_MAX);
	printf("unsigned:%d to %lu",0,ULONG_MAX);
}
