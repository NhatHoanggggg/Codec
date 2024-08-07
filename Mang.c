#include <stdio.h>

int main(){
    int n, a[1000];
    printf("Nhap n : ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("Nhap a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    printf("Mang vua nhap : ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}