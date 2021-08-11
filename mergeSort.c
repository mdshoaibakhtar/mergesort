#include<stdio.h>

void printArray(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}


int main()
{
    int arr[]={12,45,78,2,1,6,11,57,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("unSorted Array\n");
    printArray(arr,size);
    printf("Sorted Array\n");
    printArray(arr,size);

    return 0;
}
