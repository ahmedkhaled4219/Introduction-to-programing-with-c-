#include <stdio.h>
#include <stdlib.h>
void convert(char);

int main()
{
    char x;
    printf("Enter your letter : ");
    scanf(" %c",&x);
    convert(x);
    return 0;
}

void convert(char letter){
    letter=letter-32;
    printf("%c",letter);
}
