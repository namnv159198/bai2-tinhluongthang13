#include <stdio.h>

int luongthang13(int *a,int *b){
    int luong =0 ,luongthuong=0;
    if (*a < 2 ){
        luong += 10;
    }
    if (*a>=2 && *a<=5){
        luong += 20;
    }
    else luong += 30;

    if (*b < 1){
        luongthuong += (luong * 30)/100;
    }
    if (*b>1 && *b<=2){
        luongthuong+=(luong * 50)/100;
    }
    if (*b>2 && *b<=5){
        luongthuong += luong;
    } else {
        luongthuong += luong*2;
    }
    return (luong + luongthuong);
}

int main() {
    int a,b,luong;
    // a : so nam kinh nghiem cua nhan vien.
    // b: so nam lam viec cua nhan vien
    printf("Nhap so nam kinh nghiem cua nhan vien: \n");
    scanf("%d",&a);
    printf("Nhap so nam lam viec cua nhan vien: \n");
    scanf("%d",&b);
    luong = luongthang13(&a,&b);
    printf("Luong thang 13 cua nhan vien la: %d trieu ",luong);

}