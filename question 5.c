#include<stdio.h>
int main(){
int a[10][10];
int b[10][10];
int c[10][10];
int d[10][10];
printf("enter elements of a ");
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("enter elements of b ");

for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        scanf("%d",&b[i][j]);
    }
}

for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        c[i][j]=a[i][j]+b[i][j];
    }
}
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        printf("sum matrix is:%d", c[i][j]);
    }
    printf("\n");
}
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        d[i][j]=a[i][j]*b[j][i];
    }
}
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        printf("product matrix is:%d", d[i][j]);
    }
    printf("\n");
}
return 0;
}
