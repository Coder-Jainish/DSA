#include <stdio.h>
#include <stdbool.h>

const int capacity = 10;

bool is_empty(int* top){
  if ((*top) == -1){
    return 1;
  }
  return 0;
}

bool is_full(int *top){
  if ((*top) == (capacity - 1)){
    return 1;
  }
  return 0;
}

void push(int stack[], int *top, int element){
  if (is_full(top)) {
    printf("Stack is Overflow \n");
  }
  else {
    stack[(*top) + 1] = element;
    (*top)++;
  }
}

void pop(int *top){
  if (is_empty(top)) {
    printf("Stack is Empty");
  }
  else {
    (*top)--;
  }
}

int main(){

    int stack[capacity];
    int choice = 0;
    int top = -1;
    int *ptr_top = &top;

    do {
      printf("\n1. Insert element in Stack.\n");
      printf("2. Remove element from Stack.\n");
      printf("3. Display element of Stack.\n");
      printf("4. Exit from Program.\n");
      printf("Enter choice for above operation : ");
      scanf("%d", &choice);
      printf("\n");
      
      switch(choice){
        case 1: {
          int element= 0;
          printf("Enter element to push : ");
          scanf("%d", &element);
          printf("\n");
          push(stack,ptr_top,element);
          break;
        }
        case 2: {
          pop(ptr_top);
          break;
        }
        case 4: return 0;
        case 3: {
          printf("{");
          for (int i = 0;i<=top;i++) {
            printf("%d, ", stack[i]);
          }
          printf("}\n");
          break;
        }
        default: {
          printf("Enter valid number\n");
        }
      }
    } while (choice != 4);
 }