#include<stdio.h>
void main() 
{ 
    int avg, sum = 0 ;
     int i ; int marks[6] ; /* array declaration */
for ( i = 0 ; i <= 5 ; i++ )
 { printf ( "%d Enter marks \n",i ); 
 scanf ( "%d", &marks[i] ) ; /* store data in array */
      printf ( "\n%d", marks[i] ); 

}

for ( i = 0 ; i <= 5 ; i++ )
{
     printf ( "\n%d",i );
printf( "%d", &marks[i] ) ;
     printf("\n hello");

 sum = sum + marks[i] ;/* read data from an array*/
 }
avg = sum / 6 ; printf ( "\nAverage marks = %d", avg ) ; 
}