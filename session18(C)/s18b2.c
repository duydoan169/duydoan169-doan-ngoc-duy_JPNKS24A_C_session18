#include<stdio.h>
#include<string.h>
int main(){
    struct sinhVien{
    char name[20];
    int age;
    char phoneNumber[15];
    };
    struct sinhVien sinhVien1;
    printf("nhap ten sinh vien: ");
    fgets(sinhVien1.name, sizeof(sinhVien1.name), stdin);
    printf("nhap tuoi sinh vien: ");
    scanf("%d", &sinhVien1.age);
    while(getchar()!='\n');
    printf("nhap sdt sinh vien: ");
    fgets(sinhVien1.phoneNumber, sizeof(sinhVien1.phoneNumber), stdin);

    printf("%s\n", sinhVien1.name);
    printf("%d\n", sinhVien1.age);
    printf("%s\n", sinhVien1.phoneNumber);
    return 0;
}