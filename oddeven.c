// Developer Krasi
#include<stdio.h>
#include<stdlib.h>
int main(int argc , char * argv[])
{
int num;
if(argc != 2)
{
return 2;
}
num = atoi(argv[1]);
if(num %2 == 0)
{
printf("EVen\n");
}
else
{
printf("Odd\n");
}
return 0;
}
