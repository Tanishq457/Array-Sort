#include<stdio.h>

int main()
{
	int n, i, j, c;
	scanf("%d", &n);
	
	//Initializing array of size n
	int arr[n], sort[n];
	
	// Enterning elements in array
	for(i = 0; i<=n-1; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	//Sorting Array
	for(j = 0; j < n; j++)
	{
		int min = arr[0], max = arr[0];
		for(i = 0; i < n; i++)
		{
			if(arr[i] > max)
			  max = arr[i];	// MAX value
		}
		
	
		for(i = 0; i<n; i++)
		{
			if(arr[i] < min)
			{
			   min = arr[i];	// MIN value
			     c = i;
			}
		}
		sort[j] = min;
		arr[c] = max;
			
	}
	//Printing sorted Array (Ascending)
	printf("Ascending order:\n\n");
	for(i = 0; i<n; i++)
	{
		printf("%d\t", sort[i]);
	}     
        //Printing sorted Array (Decending)
	printf("Decending order:\n\n");
	for(i = 0; i<n; i++)
	{
		printf("%d\t", sort[n-i-1]);
	}     
}
