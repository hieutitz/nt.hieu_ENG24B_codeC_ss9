#include <stdio.h>

int main() {
    int arr[100];
    int currentLength, deleteIndex;

    printf("Nhap so luong phan tu muon nhap: ");
    scanf("%d", &currentLength);

    for (int i = 0; i < currentLength; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Nhap vi tri can xoa: ");
    scanf("%d", &deleteIndex);

    for (int i = deleteIndex; i < currentLength - 1; i++) {
        arr[i] = arr[i + 1];
    }

    currentLength--;

    printf("Mang sau khi xoa phan tu:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

