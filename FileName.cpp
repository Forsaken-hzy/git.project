#include <stdio.h>

int main() {
    int n, i, sum = 0;
    scanf_s("%d", &n);

    int m = n - 1;              // 实际数据个数
    int arr[100] = { 0 };

    for (i = 0; i < m; i++) {
        scanf_s("%d", &arr[i]);
        sum += arr[i];
    }

    // 冒泡排序
    for (i = 0; i < m - 1; i++) {
        for (int j = 0; j < m - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }

    printf("%d ", sum);

    if (m % 2 == 0) {
        double a = (arr[m / 2 - 1] + arr[m / 2]) / 2.0;
        printf("Even ");
        printf("%.2f", a);
    }
    else {
        int a = arr[m / 2];
        printf("Odd ");
        printf("%d", a);
    }

    return 0;
}