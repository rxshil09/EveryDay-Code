#include <stdio.h>

int m(int a, int b){
    return a ? m(b, a % b) : b;
}

int main(){
    printf("GCD is: %d\n", m(48, 18));
}
