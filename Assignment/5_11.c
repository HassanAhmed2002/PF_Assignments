#include <stdio.h>
#include <math.h>
float roundToInteger( float );
float roundToTenths( float );
float roundToHundreths( float );
float roundToThousandths( float );
int main()
{
    float x;
    int i,n;
    printf("Enter how many number want to round: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter number want to round of: ");
        scanf("%f",&x);

        printf("Original Number:%.1f , Round Number to Integer: %.1f , Round Number to Tenth: %.1f , Round Number to Hundredth: %.1f , Round Number to Thousandth: %.1f",x,roundToInteger(x),roundToTenths(x),roundToHundreths(x),roundToThousandths(x));
        printf("\n\n");
    }
}
float roundToInteger( float x){
    float y = floor( x + .5 );

    return y;
}
float roundToTenths( float x){
    float y = floor( x*10 + .5 );

    return y;
}
float roundToHundreths( float x){
    float y = floor( x*100 + .5 );

    return y;
}
float roundToThousandths( float x){
    float y = floor( x*1000 + .5 );

    return y;
}