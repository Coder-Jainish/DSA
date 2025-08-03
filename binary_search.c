#include <stdio.h>

int main() {
    int array[10];

    for (int i = 0; i < 10; i++){
        printf("Enter %d element (sorted): ", i+1);
        scanf("%d", &array[i]);
    }

    int search = 0;
    printf("Enter number to search: ");
    scanf("%d", &search);

    int low = 0;
    int high = 9;
    int mid;
    int found = 0;

    while (low <= high && !found){
        mid = (low + high) / 2;

        if (search == array[mid]){
            found = 1;
            printf("%d Found at index %d\n", search, mid);
        }
        else if (search < array[mid]){
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if (!found){
        printf("Not found\n");
    }

    return 0;
}