#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[100];
    char str2[100]={"ayman"};

    printf("Enter word to copy : ");
    scanf("%s",str1);

    int i =0;
    while(str1[i]!='\0'){
            str2[i]=str1[i];
    i++;
    }
    printf("copied string is %s",str2);

    return 0;
}
