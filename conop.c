#include<stdio.h>
void main()
{
    int a,b,c,d,e;
    printf("\aEnter two value\n");
    scanf("%d%d%d",&a,&c,&b);
    printf("Enter value is\na=%d\nb=%d\nc=%d\n",a,b,c);
    d=5+c;
    e=d;
    d*=a;
    printf("d=5+c d=%d then calculat ,d*=a%4d\n\n",e,d);
    (d<=b)?printf("(b<=d)true"):printf("(b<=d)false");

    
}