#include<stdio.h>

float Celsius (int);
float Fahrenheit(int);

int main() {
    int i=0,j=32;
    printf("%s%15s\n","Celsius","Fahrenheit");
    while(i<=100 && j<=212){
        printf("%5.2f%14.2f\n",Celsius(j),Fahrenheit(i));
        i++;
        j++;
        
    }
    
}
float Celsius(int temp){
    return (temp - 32) / 1.8;;
}
float Fahrenheit(int temp){
    return (1.8) * temp + 32;
}
