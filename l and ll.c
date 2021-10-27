#include<stdio.h>
#include<limits.h>
void main()
{
	printf("long int:\nsigned:%ld to %ld\n",LONG_MIN,LONG_MAX);
	printf("unsigned:%d to %lu\n",0,ULONG_MAX);
	printf("long long int:\nsigned:%lld to %lld\n",LONG_LONG_MIN,LONG_LONG_MAX);
	printf("signed:%d to %llu",0,LONG_LONG_MAX);
}
