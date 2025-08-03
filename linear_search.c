#include <stdio.h>
void main(){
    int array[10];
    
    for (int i = 0;i< 10; i++){
        printf("Enter %d element:", i+1);
        scanf("%d", array[i]);
    }
    int search = 0;
    printf("Enter number to search:");
    scanf(" %d", &search);
    int flag = 0;
    for (int j = 0;j< 10; j++){
        if (search == array[j]){
            printf("Present");
            flag =1;
            break;
        }
    }
    if (flag == 0) {
            printf("Not Present");
    }
    return 0;
}