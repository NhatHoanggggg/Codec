#include <stdio.h>
// Set bit thu n thi cho or với 1 dịch trái n lần
// Clear bit thu n thi cho and với đảo của 1 dịch trái n lần
int shiftleft1 = 3;
int shiftleft2 = 4;
int main() {
     int var = 10; // Biến ban đầu
    // printf("Before: %d\n", var);
    // var |= (1 << shiftleft1); 
    // var |= (1 << shiftleft2);
    // printf("After : %x\n", var);

// clear bit ////
    var &= ~(1 << shiftleft1); // Xóa bit thứ 3
    printf("After : %x\n", var);
    return 0;
}