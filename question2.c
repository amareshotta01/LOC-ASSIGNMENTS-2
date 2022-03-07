#include<stdio.h>
int main(){
int a[10];
int i=0;
printf("Enter 10 numbers");
while(i<=10){
    scanf("%d",&a[i]);
    i++;
}
i=0;
int sum_o=0;
int sum_e=0;
for(i=0;i<10;i++){
    if(a[i]%2==0){
        sum_e=sum_e+a[i];
    }
    else if(a[i]%2!=0){
        sum_o=sum_o+a[i];
    }
}
printf("The sum of even numbers is %d",sum_e);
printf("The sum of odd numbers is %d",sum_o);

}
