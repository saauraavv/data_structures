#include<stdio.h>
int main()
{
	int num;
	printf("enter the value of size of an array \n");
	scanf("%d",&num);
	int i;
	int arr[num];
	printf("enter the values of an array \n");
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the value to be searched \n");
	int value;
	scanf("%d",&value);
	int l=0,r=num-1;
	int mid;
	int result=binarySearch(arr,l,r,value);
	if(result==-1)
	{
		printf("value is not present");
	}
	else
	{
		printf("value is present at index %d",result);
	}
	return 0;
}
	int binarySearch(int arr[],int l,int r, int value)
{
	while(l<=r)
	{
		int mid=l+(r-l)/2;
		if(arr[mid]==value)
		{
			return mid;
		}
		else if(arr[mid]<value)
		{
			l=mid+1;
		}
		else
		{
			r=mid-1;
		}
		
	}
	return -1;

}	
