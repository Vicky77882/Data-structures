#include <stdio.h>
#define MAX_SIZE 100
void display(int arr[], int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int insert(int arr[], int *size, int position, int value) {
    if (*size >= MAX_SIZE) {
        printf("Array is full. Cannot insert.\n");
        return -1;
    }
    if (position < 0 || position > *size) {
        printf("Invalid position for insertion.\n");
        return -1;
    }
    for (int i = *size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }
    arr[position] = value;
    (*size)++;
    return 0;
}
int delete(int arr[], int *size, int position) {
    if (*size <= 0 || position < 0 || position >= *size) {
        printf("Invalid position for deletion.\n");
        return -1;
    }
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
    return 0;
}
int main() {
    int arr[MAX_SIZE];
    int size = 0;
    insert(arr, &size, 0, 10);
    insert(arr, &size, 1, 20);
    insert(arr, &size, 2, 30);
    display(arr, size);
    delete(arr, &size, 1);
    display(arr, size);
    return 0;
}

