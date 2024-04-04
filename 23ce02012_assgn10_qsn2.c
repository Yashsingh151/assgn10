#include<stdio.h>
struct structure1{
    int integer1;
    int integer2;
    char char1;
};

union union1{
    int integer1;
    int integer2;
    char char1;
};

int main(){
    struct structure1 s1;
    union union1 u1;

    printf("Size of structure=%lu bytes", sizeof(struct structure1));
    printf("Size of union=%lu bytes",sizeof(union union1));
    return 0;

}