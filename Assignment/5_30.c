#include<stdio.h>

int qualityPoints(int);

int main() {
    int n,am,i;
    printf("Enter number of Students: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Enter Student %d average: ",i);
        scanf("%d",&am);
        printf("Quality Point is: %d\n",qualityPoints(am));
    }
    return 0;
}
int qualityPoints(int am){
    if(am<=100  && am>=90){
        return 4;
    }
    else if(am<=89  && am>=80){
        return 3;
    }
    else if(am<=79  && am>=70){
        return 2;
    }
    else if(am<=69  && am>=60){
        return 1;
    }
    else if(am<60){
        return 0;
    }
}
