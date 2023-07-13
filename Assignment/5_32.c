#include <stdio.h>
#include <conio.h>
int main()
{
    //Task10
    int num, user, choice;
    printf("Enter a number: ");
    scanf("%d", &num);
    system("CLS");
    printf("I have a number between 1 and 1000. \nCan you guess my number?\nPlease type your first guess. ");
    scanf("%d", &user);
    system("cls");
        choice = 1;
    while ((user == num || user != num) && choice ==1)
    {
        if (user == num)
        {
            printf("Excellent! You guessed the number!\n");
            printf("Want to Try again 1 for yes 2 for no: ");
            scanf("%d", &choice);
            if(choice == 2 ){
                break;
            }
            system("cls");
        }
        else if (user < num)
        {
            printf("Too low");
        }
        else if (user > num)
        {

            printf("Too High");
        }
        printf("\n I have a number between 1 and 1000. \nCan you guess my number?\nPlease type your first guess. ");
        scanf("%d", &user);
        system("cls");
    }
}