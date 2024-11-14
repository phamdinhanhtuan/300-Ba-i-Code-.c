#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float p,s;
        printf("Nhap so a: ");
        scanf("%d",&a);
        printf("Nhap so b: ");
        scanf("%d",&b);
        printf("nhap so c: ");
        scanf("%d",&c);
    if(a+b>c && a+c>b && c+b>a){
        printf("Đây la ba canh cua mot tam giac");
        p = a+b+c;
    float semiPerimeter = p / 2;
        s = sqrt(semiPerimeter * (semiPerimeter - a) * (semiPerimeter - b) * (semiPerimeter -c));
        printf("%f %.1f ",p,s);
    }else{
        printf("Đây không phải là 1 tam giác ");
    }
return 0;
}