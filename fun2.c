#include<stdio.h>

void disp();
void show() ;
void main()
{
     int i ;
     int marks[ ] = { 55, 65, 75, 56, 78, 78, 90 } ;
    
    for ( i = 0 ; i <= 6 ; i++ )
     disp ( &marks[i] );

}

void disp ( int *n ) 
{ 
    show ( &n ); 
}
void show ( int **p )
{
    printf("%d",**p);
}