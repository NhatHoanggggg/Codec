#include <stdio.h>

int main() {
    unsigned int num = 0x12345678; // Giá trị ban đầu
    printf("Before: 0x%X\n", num);

    unsigned int byte1 = num & 0xFF000000; // Byte 1: 0x12000000
    unsigned int byte2 = num & 0x00FF0000; // Byte 2: 0x00340000
    unsigned int byte3 = num & 0x0000FF00; // Byte 3: 0x00005600
    unsigned int byte4 = num & 0x000000FF; // Byte 4: 0x00000078
    // Đảo byte thứ 2 và thứ 3
    unsigned int new_num = byte1 >> 24 | byte3 | byte2  | byte4 << 24;
    printf("After: 0x%X\n", new_num);
    return 0;
}