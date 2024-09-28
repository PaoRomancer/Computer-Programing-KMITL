#include <stdio.h>

int main() {
    int width, height;

    // รับค่า input สำหรับความกว้างและความสูง
    printf("Input width and height (format: width * height): ");
    scanf("%d * %d", &width, &height);

    // ตรวจสอบว่าเป็นสี่เหลี่ยมจัตุรัสหรือสี่เหลี่ยมผืนผ้า
    if (width == height) {
        printf("It's square\n");
    } else {
        printf("It's rectangle\n");
    }

    // พิมพ์รูปแบบสี่เหลี่ยมตามขนาดที่รับมา
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
