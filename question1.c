#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    char b[100];
    printf("Enter first string\n");
    scanf("%s",&a);
    printf("Enter second string\n");
    scanf("%s",&b);
    strcat(a,b);
    printf("concatenated string is:%s",a);
    int j=strlen(a);
    printf("\nlen of concatenated string is:%d",j);
    int i=0;
    printf("\nstring in reverse order is:");
     for(i=j-1;i>=0;i--){
        printf("%c",a[i]);
     }
}
