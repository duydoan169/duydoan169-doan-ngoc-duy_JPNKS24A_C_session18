#include<stdio.h>
#include<string.h>
int main(){
    struct SinhVien {
    char name[20];
    int age;
    char phoneNumber[15];
    };
    struct SinhVien sinhVien[5];
    for (int i = 0; i < 5; i++){
        printf("nhap ten sinh vien %d: ", i + 1);
        fgets(sinhVien[i].name, sizeof(sinhVien[i].name), stdin);
        printf("nhap tuoi sinh vien %d: ", i + 1);
        scanf("%d", &sinhVien[i].age);
        while (getchar() != '\n');
        printf("nhap sdt sinh vien %d: ", i + 1);
        fgets(sinhVien[i].phoneNumber, sizeof(sinhVien[i].phoneNumber), stdin);

    }
    for(int i=0; i<5; i++){
        printf("ten sinh vien %d: %s\n", i+1, sinhVien[i].name);
        printf("tuoi sinh vien %d: %d\n", i+1, sinhVien[i].age);
        printf("sdt sinh vien %d: %s\n", i+1, sinhVien[i].phoneNumber);
    }
    return 0;
}
