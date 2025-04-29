#include <stdio.h>

#define MAX 100

void input(int a[], int *n) {
    printf("Size: "); scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void analyze(int a[], int n, int low, int high) {
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++)
        if (a[i] >= low && a[i] <= high)
            sum += a[i], count++;
    printf("Sum = %d, ", sum);
    if (count) printf("Avg = %.2f\n", (double)sum / count);
    else printf("No elements in range\n");
}

int main() {
    int A[MAX], B[MAX], C[MAX], n1, n2, n3, low, high;
    printf("Interval [low high]: "); scanf("%d%d", &low, &high);

    printf("\nArray A:\n"); input(A, &n1); analyze(A, n1, low, high);
    printf("\nArray B:\n"); input(B, &n2); analyze(B, n2, low, high);
    printf("\nArray C:\n"); input(C, &n3); analyze(C, n3, low, high);

    return 0;
}
