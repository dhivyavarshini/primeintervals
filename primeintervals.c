#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,b,c;
printf("enter the intervals");
scanf("%d %d",&a,&b);
while(a<b)
{
c=0;
for(i=2;i<=a/2;++i)
{
if(i%2==0)
{
c=1;
break;
}
}
printf("prime numbers between the intervals:");
if(c==0)
{
printf("%d",a);
}
++a;
}
getch();
}
