#include <stdio.h>

int main() {
    int i=2 ,k=3;
    printf("  before swapping  %d %d", i, k);
    i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    printf(" \nafter swapping  %d  %d", i, k);

    return 0;
}
