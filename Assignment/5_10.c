#include <stdio.h>
#include <math.h>
float roundToInteger( float );

int main()
{
    float x;
    int i,n;
    printf("Enter how many number want to round: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter number want to round of: ");
        scanf("%f",&x);

        printf("Original Number:%.1f and Round Number: %.1f",x,roundToInteger(x));
        printf("\n\n");
    }
}
float roundToInteger( float x){
    float y = floor( x + .5 );

    return y;
}