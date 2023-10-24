#include <stdio.h>
#include <stdbool.h>
int isPrime(int);
void dsiplay(int,int);

int main() {
    int n1,n2;

    printf("Enter the first number of interval: ");
    scanf("%d",&n1);
    printf("Enter the second number of interval: ");
    scanf("%d", &n2);
    display(n1,n2);



    return 0;
}

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
void display(int lower,int upper){
for (int i = lower; i <= upper; i++) {
        if (isPrime(i)==1) {
            printf("%d ",i);
        }
    }
    printf("\n");
}
