/*#include<stdio.h>

int main(){

    int n,temp;
    printf("Enter the array length: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter values for the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    //bubble sort

    for (int i = 0; i < n-1; i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                //swap
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                 
            }
        }
    }

    //output
    printf("Sorted array: {");

    for (int i = 0; i < n-1; i++)
    {
        printf("%d, ", arr[i]);
    }

    printf("%d}",arr[n-1]);
    
    
    return 0;
}*/

#include<stdio.h>

int main(){

    int n,temp;
    printf("Enter the array length: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter values for the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    //bubble sort

    for (int i = 0; i < n; i++)
    {
        for(int j=n-1; j>=i+1 ;j--)
        {
            if(arr[j]<arr[j-1])
            {
                //swap
                temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
                 
            }
        }
    }

    //output
    printf("Sorted array: {");

    for (int i = 0; i < n-1; i++)
    {
        printf("%d, ", arr[i]);
    }

    printf("%d}",arr[n-1]);
    
    
    return 0;
}