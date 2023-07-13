#include <stdio.h>
#define row 5
#define col 4
void Func(int (*arr)[col])
{
	int i, j;
	printf("For Cadidate A:\n");
	for (i = 0; i < row; i++)
	{
		scanf("%d", &arr[i][0]);
	}
	printf("For Cadidate B:\n");
	for (i = 0; i < row; i++)
	{
		scanf("%d", &arr[i][1]);
	}
	printf("For Cadidate C:\n");
	for (i = 0; i < row; i++)
	{
		scanf("%d", &arr[i][2]);
	}
	printf("For Cadidate D:\n");
	for (i = 0; i < row; i++)
	{
		scanf("%d", &arr[i][3]);
	}
	printf("%s\t%12s\t%12s\t%12s\t%12s\n", "Precinct", "Cadidate A", "Cadidate B", "Cadidate C", "Cadidate D");
	for (i = 0; i < row; i++)
	{
		printf("%d\t", i);
		for (j = 0; j < col; j++)
		{
			printf("%15d\t", arr[i][j]);
		}
		printf("\n");
	}
}
int tCal(int (*arr)[col], int *cal)
{
	int as = 0, bs = 0, cs = 0, ds = 0;
	int i;
	for (i = 0; i < row; i++)

	{

		cal[0] = as + arr[i][0];

		cal[1] = bs + arr[i][1];

		cal[2] = cs + arr[i][2];

		cal[3] = ds + arr[i][3];
	}

	int tot;
	for (i = 0; i < row; i++)
	{
		tot = cal[i];
	}
	return tot;
}
void pCal(int *tcal, int tot, float *pcal)
{
	int i;
	for (i = 0; i < row; i++)
	{
		pcal[i] = (tcal[i] * 100) / tot;
	}
}

void Win(float *pcal)
{
	printf("percent of a is %.2f\n", pcal[0]);

	printf("percent of b is %.2f\n", pcal[1]);

	printf("percent of c is %.2f\n", pcal[2]);

	printf("percent of d is %.2f\n\n", pcal[3]);

	if (pcal[0] > 50 && pcal[0] > pcal[1] && pcal[0] > pcal[2] && pcal[0] > pcal[3])

		printf("a is winner\n");

	else if (pcal[1] > 50 && pcal[1] > pcal[0] && pcal[1] > pcal[2] && pcal[1] > pcal[3])

		printf("b is winner\n");

	else if (pcal[2] > 50 && pcal[2] > pcal[1] && pcal[2] > pcal[0] && pcal[2] > pcal[3])

		printf("c is winner\n");

	else if (pcal[3] > 50 && pcal[3] > pcal[1] && pcal[3] > pcal[2] && pcal[3] > pcal[0])

		printf("d is winner\n");
	else if (pcal[0] < 50 && pcal[1] < 50 && pcal[2] < 50 && pcal[3] < 50)
	{
		if (pcal[0] > pcal[1] && pcal[0] > pcal[2] && pcal[0] > pcal[3])
		{
			if (pcal[1] > pcal[2] && pcal[1] > pcal[3])
			{
				printf("Draw btw A and B");
			}
			else if (pcal[1] < pcal[2] && pcal[2] > pcal[3])
			{
				printf("Draw btw A and C");
			}
			else if (pcal[3] > pcal[2] && pcal[1] < pcal[3])
			{
				printf("Draw btw A and D");
			}
		}
		else if (pcal[0] < pcal[1] && pcal[1] > pcal[2] && pcal[1] > pcal[3])
		{
			if (pcal[0] > pcal[2] && pcal[0] > pcal[3])
			{
				printf("Draw btw A and B");
			}
			else if (pcal[2] > pcal[0] && pcal[2] > pcal[3])
			{
				printf("Draw btw B and C");
			}
			else if (pcal[3] > pcal[0] && pcal[2] < pcal[3])
			{
				printf("Draw btw B and D");
			}
		}
		else if (pcal[0] < pcal[2] && pcal[1] < pcal[2] && pcal[2] > pcal[3])
		{
			if (pcal[0] > pcal[1] && pcal[0] > pcal[3])
			{
				printf("Draw btw A and C");
			}
			else if (pcal[1] > pcal[0] && pcal[1] > pcal[3])
			{
				printf("Draw btw B and C");
			}
			else if (pcal[3] > pcal[0] && pcal[1] < pcal[3])
			{
				printf("Draw btw C and D");
			}
		}
		else if (pcal[0] < pcal[3] && pcal[3] > pcal[2] && pcal[1] < pcal[3])
		{
			if (pcal[0] > pcal[2] && pcal[0] > pcal[1])
			{
				printf("Draw btw A and D");
			}
			else if (pcal[1] > pcal[0] && pcal[1] > pcal[2])
			{
				printf("Draw btw B and D");
			}
			else if (pcal[2] > pcal[0] && pcal[2] < pcal[1])
			{
				printf("Draw btw C and D");
			}
		}
	}
}
int main()
{
	int arr[row][col];

	Func(arr);
	int tot;
	int tcal[col];
	float pcal[col];
	tot = tCal(arr, tcal);
	pCal(tcal, tot, pcal);
	Win(pcal);
}
