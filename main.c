#include <stdio.h>
#include <stdlib.h>

#define N 100
#define M 100
#define T 100

// Function prototype
int intersection(int A[], int B[], int C[]);

// Global arrays
int A[N], i, j, B[M], C[T];

int main()
{
    int n, m;

    // Input for array A
    printf("Enter the size of Array A:\n");
    scanf("%d", &n);
    printf("Enter non-zero elements of Array A (separated by space). Enter 0 to finish:\n");
    for (i = 0; i < (n + 1); i++)
    {
        scanf("%d", &A[i]);
        if (A[i] == 0)
            break;
    }

    // Display array A
    printf("Array A is:\n");
    for (int k = 0; k < (n + 1); k++)
        printf("%4d", A[k]);

    // Input for array B
    printf("\nEnter the size of Array B:\n");
    scanf("%d", &m);
    printf("Enter non-zero elements of Array B (separated by space). Enter 0 to finish:\n");
    for (j = 0; j < (m + 1); j++)
    {
        scanf("%d", &B[j]);
        if (B[j] == 0)
            break;
    }

    // Display array B
    printf("Array B is:\n");
    for (int k = 0; k < (m + 1); k++)
        printf("%4d", B[k]);

    // Compute intersection
    intersection(A, B, C);

    // Display intersection result
    printf("\nIntersection of A and B is:\n");
    for (i = 0; C[i] != 0; i++)
        printf("%4d", C[i]);
    printf("    0");

    return 0;
}

//*************

// Computes the intersection of arrays A and B, stores result in C
int intersection(int A[], int B[], int C[])
{
    int i = 0, j = 0, k = 0;

    while (A[j] != 0 && B[j] != 0)
    {
        if (A[j] < B[j])
        {
            j++;
        }
        else if (A[j] > B[j])
        {
            i++;
        }
        else
        {
            if (k == 0 || C[k - 1] != A[j])
            {
                C[k++] = A[j];
            }
            j++;
            i++;
        }
    }

    C[k] = 0;
}
