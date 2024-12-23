#include <stdio.h>

int main() {
    int m, n, top, down, left, right, i, j, dir = 0;

    printf("Enter the order of the matrix (rows and columns):\n");
    scanf("%d %d", &m, &n);

    int a[m][n];
    top = 0;
    down = m - 1;
    left = 0;
    right = n - 1;

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The matrix in spiral order is:\n");
    while (top <= down && left <= right) {
        if (dir == 0) { // Traverse from left to right
            for (i = left; i <= right; i++) {
                printf("%5d", a[top][i]);
            }
            top++;
        } else if (dir == 1) { // Traverse from top to bottom
            for (i = top; i <= down; i++) {
                printf("%5d", a[i][right]);
            }
            right--;
        } else if (dir == 2) { // Traverse from right to left
            for (i = right; i >= left; i--) {
                printf("%5d", a[down][i]);
            }
            down--;
        } else if (dir == 3) { // Traverse from bottom to top
            for (i = down; i >= top; i--) {
                printf("%5d", a[i][left]);
            }
            left++;
        }
        dir = (dir + 1) % 4; // Update direction
    }

    return 0;
}
