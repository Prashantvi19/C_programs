
#include<stdio.h>
areaperi ();
void main()
{
int radius ;
float area, perimeter ;
printf ( "\nEnter radius of a circle " ) ;
scanf ( "%d", &radius ) ;
areaperi ( radius, &area, &perimeter ) ;

printf ( "Area = %f", area ) ;
printf ( "\nPerimeter = %f", perimeter ) ;
}
areaperi ( int r, float *a, float *p )
{
    int e=3
*a = 3.14 * r * r ;
*p = 2 * 3.14 * r ;

}