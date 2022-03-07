#include<stdio.h>
int main(){
int n=5;
int i=1,j=1;
while(i<=n){
if(i==1 || i==n){
    while(j<=n){
        printf("* ");
        j++;
    }
     printf("\n");
}
else if(i>1 && i<n){
while(j<=n){
    if(j==1 || j==n){
        printf("* ");
    }
    else if(j>1 && j<n){
        printf("  ");
    }
    j++;
}
printf("\n");
}
i++;
j=1;
}
return 0;
}
