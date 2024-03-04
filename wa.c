#include<stdio.h>
void main()
{
//int i;
int i,a[5];

for(i = 0 ; i <= 4; ++i)
{
    printf("\n\n Value of index :%d \n",i );

    printf("________________________\n" );

    printf("Enter a Value for array   :\n" );
    

    scanf("%d",&a[i]);

    printf(" Entered Value of array :%d \n", a[i] );
    
     printf("________________________\n" );
     printf("________________________\n" );
}

for(i = 0 ; i <= 7; ++i)
{
    printf(" Value of index:%d\n" , i );

    printf("^^^\n");

    printf("Value of array :%d \n", a[i] );

    printf("________________________\n" );
    printf("________________________\n" );
    
}

}