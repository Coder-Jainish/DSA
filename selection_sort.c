// sorting based on min number
#include <stdio.h>

int main() {
    int a[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(a)/sizeof(a[0]);
    int i, j, min, temp;
    
    // 0 to n-1 because last element already sorted after iteration 
    for (i = 0; i < n-1; i++) {
        min = i;
        
        for (j = i+1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        
        // if no no is less than bas then no swap
        if (min != i) {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}
