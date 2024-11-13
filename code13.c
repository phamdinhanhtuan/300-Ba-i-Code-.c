#include<stdio.h>
int main(){
    int a,b,c;
    int max;
        printf("Nhap so a: ");
        scanf("%d",&a);
        printf("Nhap so b: ");
        scanf("%d",&b);
        printf("Nhap so c: ");
        scanf("%d",&c);
    if(a == b &&  b == c && c==a){
        printf("ba so bang nhau\n");
    }else{
        max = a;
        if(b > max){
            max = b;
        }
        if(c > max){
            max = c;
        }
    }
    printf("So lon nhat la: %d\n",max);
return 0;
}