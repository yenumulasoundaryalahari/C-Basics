#include<stdio.h>
#include<limits.h>
void main()
{
	printf("long int:\nsigned:%ld to %ld\n",LONG_MIN,LONG_MAX);
	printf("unsigned:%d to %lu\n",0,ULONG_MAX);
	printf("int:\nsigned:%d to %d\n",INT_MIN,INT_MAX);
	printf("signed:%d to %u",0,UINT_MAX);
}
