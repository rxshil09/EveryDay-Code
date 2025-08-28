#include<stdio.h>

int m(int a,  int b){
    return a ? m(b, a%b) : b;
}

int main(){
    printf("%d", m(48,18));
}