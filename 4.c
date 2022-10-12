#include <stdio.h>
int main()
{
int c1=36, c2=24;
while(c1!=c2)
{
if(c1 > c2)
{
c1=c1-c2;
}
else
{
c2=c2-c1;
}
}
printf("HCF = %d",c1);
return 0;
}