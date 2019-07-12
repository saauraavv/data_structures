#include<stdio.h>
void main()
{
	int num=5,k;
	int arr[num];
	printf("enter 5 values");
	for(k=0;k<num;k++)
	{

		scanf("%d",&arr[k]);
	}
	printf("no you want to search linearly");
	int find;
	scanf("%d",&find);
	int i,j;
	for(i=0;i<num;i++)
	{
		if(arr[i]==find)
		{
			j=i;
			printf("value search is found at index %d",j);
			break;
		}
	}
}
