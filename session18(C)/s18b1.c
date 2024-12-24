#include<stdio.h>
#include<string.h>
int main(){
    struct sinhVien{
    char name[20];
    int age;
    char phoneNumber[15];
    };
    struct sinhVien sinhVien1={
        "doan ngoc duy",
        18,
        "0346480469"
    };
    printf("%s\n", sinhVien1.name);
    printf("%d\n", sinhVien1.age);
    printf("%s\n", sinhVien1.phoneNumber);
    return 0;
}