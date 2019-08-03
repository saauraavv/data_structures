#include<stdio.h>
#include<stdlib.h>
void hashingg(int arr[],int num,int j);
int main(int argc,const char * argv[])
{
	int arr[argc-2];
	int i,j=0;
	for(i=1;i<argc-1;i++)
	{
		arr[j]=atoi(argv[i]);
		j++;	
	}
	int num=atoi(argv[i]);
	//printf("%d",num);
	hashingg(arr,num,j);

		return 0;
}

void hashingg(int arr[],int num,int j)
{
	int arr1[100]={0};
	int i;

	for(i=0;i<j;i++)
	{
		
			arr1[arr[i]]++;
	}	
		if(arr1[num]>=1)
		{
			printf("%d comes %d times",num,arr1[num]);

		}
	


}
