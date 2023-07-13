#include <stdio.h>

int main()
{
    int i, n, gross_sale; 
    double salary;
    int counter_array[9] = {0,0,0,0,0,0,0,0,0};
    printf("Enter number of Employees: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter Gross Sale of Employee %d: ",i);
        scanf("%d",&gross_sale);
        salary = ((gross_sale * 0.09) + 200);
        if (salary >= 1000.00)
        {
            counter_array[8]++;
            
        }
        else if (salary >= 900.00)
        {
             counter_array[7]++;
            
        }
        else if (salary >= 800.00)
        {
             counter_array[6]++;
            
        }
        else if (salary >= 700.00)
        {
            counter_array[5]++;
            
        }
        else if (salary >= 600.00)
        {
             counter_array[4]++;
            
        }
        else if (salary >= 500.00)
        {
             counter_array[3]++;
            
        }
        else if (salary >= 400.00)
        {
             counter_array[2]++;
            
        }
        else if (salary >= 300.00)
        {
             counter_array[1]++;
            
        }
        else if (salary >= 200.00)
        {
             counter_array[0]++;
            
        }
    }
    printf("Number of salespeople earned salary 200 & 299 : %d\n",counter_array[0]);
    printf("Number of salespeople earned salary 300 & 399 : %d\n",counter_array[1]);
    printf("Number of salespeople earned salary 400 & 499 : %d\n",counter_array[2]);
    printf("Number of salespeople earned salary 500 & 599 : %d\n",counter_array[3]);
    printf("Number of salespeople earned salary 600 & 699 : %d\n",counter_array[4]);
    printf("Number of salespeople earned salary 700 & 799 : %d\n",counter_array[5]);
    printf("Number of salespeople earned salary 800 & 899 : %d\n",counter_array[6]);
    printf("Number of salespeople earned salary 900 & 999 : %d\n",counter_array[7]);
    printf("Number of salespeople earned salary 1000 or more : %d",counter_array[8]);
return 0;
}
