#include<stdio.h>
union Data{
    int integervalue;
    float floatvalue;
    char charvalue;

};
int main(){
    union Data data;

    data.integervalue=10;
    printf("Integer value:%d\n",data.integervalue);

    data.floatvalue=3.14;
    printf("Float value:%d\n",data.floatvalue);

    data.charvalue='D';
    printf("Char value:%c\n",data.charvalue);
    return 0;
}