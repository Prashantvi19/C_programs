#include<stdio.h>
void first();
void sencond();
void main()
{
    int a =3,*b,**c;
     b = &a;
     c = &b;
    printf("add of a: %d",&a);
    printf("\n1ddress of a: %u",&a);
    printf("\n2ddress of a: %p",&a);
    printf("\n3ddress of a: %x",&a);
    printf("\n4ddress of a: %X",&a);
    printf("\n5value of a: %X",*(&a));
    printf("\n6ddress of a: %X",b);
    printf("\n04ddress of b: %X",&b);
    printf("\n7ddress of a: %X",*c);
    printf("\n8value of a: %X",**c);
    printf("\n9ddress of c: %X",&c);
    printf("\n10add/value of b/c: %X",c);
     printf("\n5value of *(&b): %X",*(&b));
      printf("\n5value of *(&c): %X",*(&c));
    printf("\n================================================================");
    sencond();
    printf("\n================================================================");
    first();
}
void first()
{
int i = 3, *j, **k ;
j = &i ;
k = &j ;
printf ( "\nAddress of i = %u", &i ) ;
printf ( "\nAddress of i = %u", j ) ;
printf ( "\nAddress of i = %u", *k ) ;
printf ( "\nAddress of j = %u", &j ) ;
printf ( "\nAddress of j = %u", k ) ;
printf ( "\nAddress of k = %u", &k ) ;
printf ( "\nValue of j = %u", j ) ;
printf ( "\nValue of k = %u", k ) ;
printf ( "\nValue of i = %d", i ) ;
printf ( "\nValue of i = %d", * ( &i ) ) ;
printf ( "\nValue of i = %d", *j ) ;
printf ( "\nValue of i = %d", **k ) ;
}
void sencond()
{
int i = 3 ;
int *j ;
j = &i ;
printf ( "\nAddress of i = %u", &i ) ;
printf ( "\nAddress of i = %u", j ) ;
printf ( "\nAddress of j = %u", &j ) ;
printf ( "\nValue of j = %u", j ) ;
printf ( "\nValue of i = %d", i ) ;
printf ( "\nValue of i = %d", *( &i ) ) ;
printf ( "\nValue of i = %d", *j ) ;

}