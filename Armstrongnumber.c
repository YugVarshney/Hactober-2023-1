#include<stdio.h>
int main(){
   
   label :
    int a,n,p=0,r;

    printf("Enter Number you want to check is ARMSTRONG : \n");
    scanf("%d",&a);
    r=a;
    while (n!=0){
        n=a%10;
        p=(n*n*n)+p;
        a=a/10;
    }
    printf("%d\n",p);
    if(r==p){
        printf("YES ! IT's A ARMSTRONG NUMBER \n");

    }
    else{
        printf("NO ! NOT A ARMSTRONG NUMBER\n ");
    }
    goto label;
    return 0;

    }
