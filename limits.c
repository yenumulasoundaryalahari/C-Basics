#include<stdio.h>
#include<limits.h>
void main()
{
	printf("short int :\n signed :%hd to %hd\n",SHRT_MIN,SHRT_MAX);
	printf("unsigned : %d to %hu\n",0,USHRT_MAX);
	printf("int :\n signed :%d to %d\n",INT_MIN,INT_MAX);
	printf("unsigned : %d to %u\n",0,UINT_MAX);
	printf("long int :\n signed :%ld to %ld\n",LONG_MIN,LONG_MAX);
	printf("unsigned : %d to %lu\n",0,ULONG_MAX);
	printf("long long int :\n signed :%lld to %lld\n",LONG_LONG_MIN,LONG_LONG_MAX);
	printf("unsigned : %d to %llu",0,LONG_LONG_MAX);
	}
