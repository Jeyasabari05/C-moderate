#include<stdio.h>
void bubbleSort(int arr[],int len)
{
    for (int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int arr1[50],arr2[50],res[100];
    int i,n1,n2,j,k=0;
    scanf("%d",&n1);
    
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    i=0,j=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i] < arr2[j])
        {
            res[k++]=arr1[i++];
        }
        else{
            res[k++]=arr2[j++];
        }
    }
    while(i<n1)
    {
        res[k++]=arr1[i++];
    }
    while(j<n2)
    {
        res[k++]=arr2[j++];
    }
    bubbleSort(res,k);
    for(i=0;i<k;i++)
    {
        if(arr1[i]>arr2[j])
        {
            printf("%d ",res[i]);
        }
    }
}
