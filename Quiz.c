#include<stdio.h>
void Q1();
void Q2();
int totalOdd(int);
int main(){
	printf("Q1\n");
	Q1();
	printf("\n\nQ2\n");
	Q2();
	
}
void Q1(){
	printf("%d",totalOdd(1));
}
void Q2(){
	int a[10];
	float Eq;
	int i;
	for(i=0;i<10;i++){
	printf("Enter value of a[%d]: ",i);
	scanf("%d",&a[i]);
	}
	const int x= a[0]*a[0];
	for(i=0;i<10;i++){
		Eq = (a[i]*a[i] + a[i]*x)/2;
		printf("EQ: %.2f\n",Eq);
	} 
	
}
int totalOdd(int n){
int odd = n;
    if(odd >= 25){
    return 0;
}
    else{
    return (n+totalOdd(odd+2));
}

}
