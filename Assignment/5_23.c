#include<stdio.h>
#include<math.h>

int seconds(int,int,int);

int main() {
    int hr,min,sec;
    int first,second;
    printf("Enter the first time as three integers: ");
    scanf("%d%d%d",&hr,&min,&sec);
    first = seconds(hr,min,sec);
    printf("Seconds: %d\n",first);

    printf("Enter the second time as three integers: ");
    scanf("%d%d%d",&hr,&min,&sec);
    second = seconds(hr,min,sec);
    printf("Seconds: %d\n",second);

    printf("Amount of time in seconds between two times is: %d", abs(first-second));
    return 0;
}
int seconds(int hr,int min,int sec){
    return 3600 * hr + 60 * min + sec;
}