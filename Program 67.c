#include <stdio.h>
int main() 
{
    int matrix1[3][3], matrix2[3][3], subMatrix[3][3];
    printf("Enter elements of the first 3x3 matrix\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements of the second 3x3 matrix\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++)
          {
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            subMatrix[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    printf("Subtraction of the two matrices is\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) {
            printf("%d ", subMatrix[i][j]);
        }
        printf("\n");
    }
}
