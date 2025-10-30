#include <stdio.h>
int Print(int d) {
    if (d==1) {
        printf("大安：大安事事昌，求谋在东方，失物去不远，宅舍保安康，行人身未动，病者主无妨，将军回田野，仔细与推详。\n");
    }
    if (d==2) {
        printf("留连：留连事难成，求谋曰未明，官事只宜缓，去者未回程，失物南方见，急讨方称心，更须防口舌，人口且平平。\n");
    }
    if (d==3) {
        printf("速喜：速喜喜来临，求财向南行，失物申午未，逢人路上寻，官事有福德，病者无祸侵，田家六畜吉，行人有信音。\n");
    }
    if (d==4) {
        printf("赤口：赤口主口舌，官非切要防，失物急去寻，行人有惊慌，鸡犬多作怪，病者出西方，更须防咒诅，恐怕染蕴疾。\n");
    }
    if (d==5) {
        printf("小吉：小吉最吉昌，路上好商良，阳人来报喜，失物在坤方，行人立便至，交关真是强，凡事皆和合，病者事无仿。\n");
    }
    if (d==6) {
        printf("空亡：空亡事不长，阴人小乘张，求财无有利，行人有灾殃，失物寻不见，官事主刑伤，病人逢暗鬼，乞解保安康。\n");
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
