#include <stdio.h>

int main() {
    int arr[100];
    int currentLength = 0;
    int choice, value, position;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Nhap so luong phan tu muon nhap: ");
                scanf("%d", &currentLength);
                for (int i = 0; i < currentLength; i++) {
                    printf("Nhap phan tu thu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                printf("Mang hien tai: ");
                for (int i = 0; i < currentLength; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 3:
                printf("Nhap gia tri can them: ");
                scanf("%d", &value);
                printf("Nhap vi tri can them (0 den %d): ", currentLength);
                scanf("%d", &position);

                if (position < 0 || position > currentLength) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    for (int i = currentLength; i > position; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[position] = value;
                    currentLength++;
                }
                break;

            case 4:
                printf("Nhap vi tri can sua (0 den %d): ", currentLength - 1);
                scanf("%d", &position);

                if (position < 0 || position >= currentLength) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    printf("Nhap gia tri moi: ");
                    scanf("%d", &value);
                    arr[position] = value;
                }
                break;

            case 5:
                printf("Nhap vi tri can xoa (0 den %d): ", currentLength - 1);
                scanf("%d", &position);

                if (position < 0 || position >= currentLength) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    for (int i = position; i < currentLength - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    currentLength--;
                }
                break;

            case 6:
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
        }
    } while (choice != 6);

    return 0;
}

