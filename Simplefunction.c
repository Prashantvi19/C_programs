// for calling function 
#include<stdio.h>
/*void add();
void Multi();*/
void add()
{
    int a,b,c;
    a=b=c=0;
    printf("Enter two number for add\n");
    printf("Enter fist number\n");
    scanf("%d",&c);
    printf("Enter sencod number\n ");
    scanf("%d",&b);
    c=a+b;
    printf("It is answer: %d",c);
    
}
void Multi()
{
   /* int a,b,c;
    a=b=c=0;
    printf("\nEnter two number for multiply\n");
    printf("Enter fist number\n");
    scanf("%d",&a);
    printf("Enter sencod number\n");
    scanf("%d",&b);
    c = a*b;*/
    printf("It is answer: %d " , c);
    printf("\nEnter two number for multiply\n");
    printf("Enter fist number\n");
    scanf("%d",&a);
    printf("Enter sencod number\n");
    scanf("%d",&b);
    c = a*b;
    printf("It is answer: %d " , c);

}

void main()
{ 
    printf("\n Hi Prashant Vishwkarma \n ");
    
   add();
   Multi();
}

