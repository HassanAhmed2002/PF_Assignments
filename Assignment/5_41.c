#include<stdio.h>
#include<math.h>

double findDistance(double,double,double,double);
int main() 
{
	double x1,x2,y1,y2;

  	printf( "Two Points (x1,x2) & (y1,y2) : \n");

  	printf( "Enter x1: ");
  	scanf("%lf", &x1);
  
  	printf("Enter x2: ");
  	scanf("%lf", &x2);
  
 	printf( "Enter y1: ");
  	scanf("%lf",&y1);
  
  	printf("Enter y2: ");
  	scanf("%lf",&y2);
	  

  	printf("Distance between the 2 points is %lf", findDistance(x1,y1,x2,y2)) ;
        return 0;
} 
double findDistance(double x1, double y1, double x2, double y2)
{
 
  	return sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
}