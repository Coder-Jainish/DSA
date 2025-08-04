#include <stdio.h>

int main() {
    int a[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(a)/sizeof(a[0]);
    int i, min, max;
    
    min = a[0] , max= a[0];
    
    for (i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
        if (a[i] > max) {
            max = a[i];
        }
    }
    
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
    
    return 0;
}