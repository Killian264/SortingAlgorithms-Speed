#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void arrayCreation(bool sortFirst, int size);
void linearSort(int arrPtr[], int size);
void printArr(int size, int arr[size]);
void linearTime(int size, bool sortFirst);


int main()
{
	int size = 1000;
	bool sortFirst = true;
	linearTime(size, sortFirst);	
	return 0;
}

void linearTime(int size, bool sortFirst)
{
	int inputtest;
	clock_t timeTaken;
	int arr[size];
	
	timeTaken = clock();
	arrayCreation(sortFirst, size);
	linearSort(size, arr);
	printArr(size, arr);
	timeTaken = clock() - timeTaken;
	double cpu_time_used = ((double) (timeTaken)) / CLOCKS_PER_SEC;
	
	printf("%f", cpu_time_used);
}



void arrayCreation(bool sortFirst, int size)
{
	int arr[size];
	int i, x;	
	
	srand(time(NULL));

	for(i = 0; i < size; i++)
	{
		x = rand() % 9999;
		
		arr[i] = x;
	
	}
	

}

void printArr(int size, int arr[size])
{
	int i;
	
	for(i = 0; i < size; i++)
	{
		printf("%d.%d ",i, arr[i]);
	}

}

void linearSort(int arr[], int size)
{

	int temp = 0;
	int i, k, loc;
	
	for(i = 0; i < size; i++)
	{
		temp = arr[i];
		for(k = 0; k < size; k++)
		{
			if(arr[i] == arr[k])
			{
				loc = k;
			}
		}
		temp = arr[i];
		arr[i] = arr[loc];
		arr[loc] = temp;
		
	}
}



