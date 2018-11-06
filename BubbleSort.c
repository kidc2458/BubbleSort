#include <stdio.h>

void BubbleSort(int DataSet[], int Length)
{
	int i = 0;
	int j = 0;
	int temp = 0;

	for (i = 0; i < Length - 1; ++i)
	{
		for (j = 0; i < Length - (i + 1); ++j)
		{
			if (DataSet[j] > DataSet[j + i])
			{
				temp = DataSet[j + 1];
				DataSet[j + 1] = DataSet[j];
				DataSet[j] = temp;
			}
		}
	}
}

int main(void)
{
	int DataSet[] = { 6,4,2,3,1,5 };
	int Lenght = sizeof DataSet / sizeof DataSet[0];
	int i = 0;

	BubbleSort(DataSet, Lenght);

	for (i = 0; i < Lenght; ++i)
	{
		printf("%d ", DataSet[i]);
	}

	printf("\n");

	return 0;
}
}