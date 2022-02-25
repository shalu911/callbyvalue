#include<stdio.h>
void swap(int x,int y);

main()
{
int a,b;
a=10;
b=20;
swap(a,b);
printf("a=%d",a);
printf("b=%d",b);

    
return 0;
}
void swap(int x,int y)
{
    int z;
    z=x;
    x=y;
    y=z;
}