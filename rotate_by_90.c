#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char* argv[])
{
	int rows,cols;
	rows=atoi(argv[1]);
	cols=atoi(argv[2]);
	int arr[rows][cols];
	int i,j,k=3;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			arr[i][j]=atoi(argv[k]);
					k++;
		}
	}
	for(i=0;i<rows;i++)
	{
		for(j=cols-1;j>=0;j--)
		{
			printf("%d ",*(*(arr+j)+i));
		}
			printf("\n");
	}
	return 0;
}
