#include <stdio.h>

int main() {
    int arr[100];
    int currentLength, addIndex, value;

    printf("Nhap so luong phan tu muon nhap (toi da 100): ");
    scanf("%d", &currentLength);

    if (currentLength < 0 || currentLength > 100) {
        printf("So luong phan tu khong hop le!\n");
        return 1;
    }

    for (int i = 0; i < currentLength; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri can them: ");
    scanf("%d", &value);

    printf("Nhap vi tri can them (0 den %d): ", currentLength);
    scanf("%d", &addIndex);

    if (addIndex >= currentLength) {
        arr[addIndex] = value;
        currentLength = addIndex + 1;
    } else {
        for (int i = currentLength; i > addIndex; i--) {
            arr[i] = arr[i - 1];
        }
        arr[addIndex] = value;
        currentLength++;
    }

    printf("Mang sau khi them phan tu:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

