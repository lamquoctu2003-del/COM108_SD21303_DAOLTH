#incule <stdio.h>


int main() {
    // printf("Hello World\n");
    // printf("Hello World\n");

    int a,b;
    char ten[10]; // cap nhat ki tu
    printf("Nhap a va b");
    scanf("%d %d", &a, &b);
    printf("Nhap vao ten toi");
    scanf("%s", &ten);;

    printf("Xin chào tôi tên la: %s", ten);
    return 0;
}