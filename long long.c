#include<stdio.h>
#include<limits.h>
void main()
{
	printf("long long int:\nsigned:%lld to %lld\n",LONG_LONG_MIN,LONG_LONG_MAX);
	printf("unsigned:%d to %llu",0,ULONG_LONG_MAX);
}
