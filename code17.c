#include<stdio.h>
int main(){
    int t;
        printf("Nhap so thang: ");
        scanf("%d",& t);
    if(t == 2 || t == 3 || t == 4){
            printf("Mùa Xuân");
    }else if(t == 5 || t == 6 || t == 7){
            printf("Mùa Hạ");
    }else if(t == 8 || t == 9 || t == 10){
            printf("Mùa Thu");
    }else if(t == 11 || t == 12 || t == 1){
            printf("Mùa Đông");
    }else{
        printf("Tháng không hợp lệ");
    }
   return 0;
}