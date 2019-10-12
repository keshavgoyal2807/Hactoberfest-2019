#include <stdio.h> 

void bubbleSort(int arr[], int n) 
{ 
int i, j; 
for (i = 0; i < n-1; i++)	 
	for (j = 0; j < n-i-1; j++) 
		if (arr[j] > arr[j+1]) 
		{
			int temp = arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
} 


int main() 
{ 
	int arr[200],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubbleSort(arr, n); 
	printf("Sorted array: \n"); 
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0; 
} 

