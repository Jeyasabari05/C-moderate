#include<stdio.h>
int main(){
	int arr[50],fr[50];
	int i,j,n;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		fr[i]=1;
	}
	
	for(i=0;i<n;i++)
	{
		if(fr[i]==0)
		continue;
		for(j=i+1;j<n;j++)
		{
			if(fr[j]==0)
			continue;
			
			if(arr[i]==arr[j])
			{
				fr[i]++;
				fr[j]=0;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(fr[i]!=0)
		{
			printf("%d occurs %d times\n",arr[i],fr[i]);
		}
	}
}
