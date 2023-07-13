#include <stdio.h>
void Reverse(int);
int main()
{
	int num;
	printf("Enter Number: ");
	scanf("%d", &num);
	Reverse(num);
}
void Reverse(int a){
    int reminder,reverse;
    printf("Reverse:");
    while(a){
        reminder = a % 10;
        reverse = reverse * 10 + reminder;
		a = a / 10;
        printf("%d",reminder);
    }

}