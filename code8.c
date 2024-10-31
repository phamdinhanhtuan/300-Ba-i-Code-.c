#include<stdio.h>
#include<math.h>

double tinhDienTich(int a,int b,int c){
//Tính nữa chu vi
    double p = (a+b+c)/2.0;
//Tính Diện tích tam giác theo công thức heron
    double S = sqrt(p*(p-a)*(p-b)*(p-c));
return (a*b*c)/(4*S);
}

int main(){
    int a,b,c;
        printf("Nhap so ");
        scanf("%d %d %d",&a,&b,&c);
    double banKinh = tinhDienTich(a,b,c);
        printf("Bán kính của đường tròn ngoại tiếp tam giác là:%.3f\n",banKinh);
    return 0;    
}