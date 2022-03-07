#include<stdio.h>
int main(){
int n;
printf("enter a number \n");
scanf("%d",&n);
int i=0;
int a=0,b=1,c=0;
printf("The fibonacci series:");
printf("%d ",a);
printf("%d ",b);
for(i=2;i<=n;i++){
    c=a+b;
    printf("%d ",c);
    a=b;
    b=c;
}
return 0;
}
