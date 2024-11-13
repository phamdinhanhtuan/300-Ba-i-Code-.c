#include<stdio.h>
int main(){
    int n;
    int Gio,Phut,Giay;
   
        printf("Nhập vào tổng số giây: ");
        scanf("%d",&n);
    Gio = n/3600;
    Phut= (n%3600)/60;
    Giay = n %60;
    printf("%d: %d: %d",Gio,Phut,Giay);
return 0;
}