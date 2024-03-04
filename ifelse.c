/*#include<stdio.h>
void main()
{ 
 int a,b,c;
 printf("Enter value \n");
 scanf("%d%d%d",&a,&b,&c);
  if(a>=c||b>=c)
   {
     if (a>=c)
     {
       printf(" \na>=c satisfied ");
       if(b>=c)
       {
        printf(" \nb>=c satisfied ");
       }
     }
      else 
        { 
          printf(" \n a>=c there is not satisfied ");
        }
      else
      {
        printf(" \n b>=c there is not satisfied ");  
      }
     printf("\n  a>=c||b>c satisfied ");
    } 
  else
 {
     printf("false");
 }
}*/
#include<stdio.h>
void main()
{
    int a,b,c,d,e;
    printf("Enter three value\n");
    scanf("%d%d%d",&a,&c,&b);
    printf("Enter value is\na=%d\nb=%d\nc=%d\n",a,b,c);
    d=5+c;
    e=d;
    d*=a;
    printf("d=5+c d=%d then calculat ,d*=a%4d\n\n",e,d);
    (d<=b)?printf("(b<=d)true"):printf("(b<=d)false");

    
}