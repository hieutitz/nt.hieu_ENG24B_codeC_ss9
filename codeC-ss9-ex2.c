#include <stdio.h>

int main() {
    int mang[100], soLuong, viTri, giaTriMoi;

    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &soLuong);

    printf("Nhap cac phan tu trong mang:");
    for (int i = 0; i < soLuong; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }

    printf("Nhap vi tri can sua (0 den %d): ", soLuong - 1);
    scanf("%d", &viTri);

    printf("Nhap gia tri moi: ");
    scanf("%d", &giaTriMoi);

    mang[viTri] = giaTriMoi;

    printf("Mang sau khi sua:\n");
    for (int i = 0; i < soLuong; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}

