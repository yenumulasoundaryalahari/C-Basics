#include<stdio.h>
void main()
{
	int eng,mat,phy,che,cs,tot,perc;
	printf("enter the marks");
	scanf("%d%d%d%d%d",&eng,&mat,&phy,&che,&cs);
		tot = eng+mat+phy+che+cs;
		perc =(tot/5);
	if(eng>=35 && mat>=35 && phy>=35 && che>=35 && cs>=35)
	{
		printf("pass\n");
	     printf("total marks out of %d is %d\n",500,tot);
	     printf("percentage :%d\n",perc);
	     if(perc>=90)
	     {
	     	printf("O");
		 }
	     else if(perc>=80)
	     {
	     	printf("A");
		 }
	     else if(perc>=70)
	     {
	     	printf("B");
		 }
	     else if(perc>=60)
	     {
	     	printf("C");
		 }
	     else if(perc>=50)
	     {
	     	printf("D");
		 }
	     else if(perc>=40)
	     {
	     	printf("E");
		 }
	     else if(perc>=35)
	     {
	     	printf("F");
		 }
	
	}
	else
	{
		printf("fail\n");
	}
}
