#include<stdio.h>
int main() {
    int i = 1, j =1;
    for(i;i<=5;i++) {
        for(j; j<=5; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}