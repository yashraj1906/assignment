#include <stdio.h>
// Function to print the elements of the matrix in a spiral order
void spiralOfMatrix(int enrow, int encol, int arr1[R][C])
{
    int i, rowind = 0, colind = 0;

    // Loop through the matrix elements in a spiral pattern
    while (rowind < enrow && colind < encol)
    {
        // Print elements of the first row
        for (i = colind; i < encol; ++i)
        {
            printf("%d ", arr1[rowind][i]);
        }
        rowind++;

        // Print elements of the last column
        for (i = rowind; i < enrow; ++i)
        {
            printf("%d ", arr1[i][encol - 1]);
        }
        encol--;

        // Print elements of the last row if it is within matrix boundaries
        if (rowind < enrow)
        {
            for (i = encol - 1; i >= colind; --i)
            {
                printf("%d ", arr1[enrow - 1][i]);
            }
            enrow--;
        }

        // Print elements of the first column if it is within matrix boundaries
        if (colind < encol)
        {
            for (i = enrow - 1; i >= rowind; --i)
            {
                printf("%d ", arr1[i][colind]);
            }
            colind++;
        }
    }
}

int main()
{
    int i, j, R, C;
    printf("Enter the row and column\n");
    scanf("%d%d",&R,&C);
    int arr1[R][C];
    printf("Enter the numbers in array\n");
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            scanf("%d ", &arr1[i][j]);
        }
    }

    // Print the original matrix
    printf("The given array in matrix form is:\n");
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("%d  ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Print the matrix in spiral order
    printf("The spiral form of the above matrix is:\n");
    spiralOfMatrix(R, C, arr1);
    return 0;
} 
