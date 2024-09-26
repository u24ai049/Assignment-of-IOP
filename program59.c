

#include<stdio.h>

int main()
{
    int arr1[10], arr2[10],temp;
    
    printf("Enter 10 integers for the first array\n");//assigning the values to array
     
    for(int i = 0; i < 10; i++)  
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter 10 integers for the second array\n");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for(int i = 0; i < 10; i++) //swaping
   {
       temp=arr1[i];
    arr1[i]=arr2[i];
    arr2[i]=temp;
   }
        for(int i = 0; i < 10; i++)//printing new swaped array
    {
        printf("%d\n", arr1[i]);
    }
        for(int i = 0; i < 10; i++)
    {
        printf("%d\n", arr2[i]);
    }
    
    return 0;
}
