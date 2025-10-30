#include <stdio.h>
int Print(int d) {
    if (d==1) {
        printf("大安");
    }
    if (d==2) {
        printf("流连");
    }
    if (d==3) {
        printf("速喜");
    }
    if (d==4) {
        printf("赤口");
    }
    if (d==5) {
        printf("小吉");
    }
    if (d==6) {
        printf("空亡");
    }
}
int First(int n1) {
    int ret=n1%6;
    Print(ret);
    return ret;
}
int Second(int n2) {
    int ret=n2%6;
    Print(ret);
    return ret;
}
int Third(int n3) {
    int ret=n3%6;
    Print(ret);
    return ret;
}
int main() {

    int Num1,Num2,Num3,re;
    scanf("%d %d %d",&Num1,&Num2,&Num3);
    re=First(Num1);
    printf("\t");
    Num2=Num2+re-1;
    re=Second(Num2);
    printf("\t");
    Num3=Num3+re-1;
    Third(Num3);
}