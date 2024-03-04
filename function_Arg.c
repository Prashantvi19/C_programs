#include<stdio.h>

int calsum();
int calMult();// function declaration
int caldivi();
int ASCII();
 void main()
 {
     
     int a,b,c;
     int sum;
     //=========================================================================
     printf("\n Prashant! Please enter the three value for sum\n");
     scanf("%d%d%d",&a,&b,&c);
     sum = calsum(a,b,c);
     
     printf("The sum is :%d", sum);
   //============================================================================
    printf("\n Prashant! Please enter the three value for multi\n");
     scanf("%d%d%d",&a,&b,&c);
     sum = calMult(a,b,c);
     
    printf("The multi is :%d", sum);
    // -============================================================================
      printf("\n Prashant! Please enter the three value for divi\n");
      scanf("%d%d%d",&a,&b,&c);
      sum = caldivi(a,b,c);
     
      printf("The divi is :%d\n", sum);

     //============================================================
     
     printf("\n \nPrashant! Please enter the a charater for ASCII value\n");
      scanf("%c",&a);
      sum = ASCII(a);
     
      printf("The ASCII value is :%d \n", sum);
      printf("The ASCII value is :%c", sum);
 } 
 // difine functions
 //===================================================================
 int calsum(a,b,c) // same variable or diffeirent compiler always diffirent  
 int a,b,c;
 {
     int d;

     d = a + b + c; 

     return (d);
 }
 //==========================================
 int calMult(int a, int b, int c) // same variable or diffeirent compiler always diffirent and  it's second matheod of difine
 
 {
     int d;

     d = a * b * c; 

     return (d);
 }
 //===========================================
int caldivi(x,y,z) // same variable or diffeirent compiler always diffirent  
 int x,y,z;
 {
     int d;

     d = x / y / z; 

     return (d);
 }
//===============================================
int ASCII(int A)

{
    char V;
    printf(" \nEnter the character\n ");
    scanf("%c",&V);
    if ( V >= 65 && V >= 90)
    {
        printf("\nexecuted ""if"" block\n");
       return (V);
    }

    else 
    {
         printf("\nexecuted ""else"" block\n");
        return(V + 32);
    }
    
    
}