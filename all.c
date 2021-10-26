#include<stdio.h>
void main()
{
	short signed int a;
	short unsigned int b;
	signed int c;
	unsigned int d;
	long long signed int e;
	long long unsigned int f;
	a=32767;
	b=65525;
	c=2147483645;
	d=67291;
	e=-9223372036854775808;
	f=18446744073709551615;
	printf("%hd\n%hu\n%d\n%u\n%lld\n%llu",a,b,c,d,e,f);
	
	
}
