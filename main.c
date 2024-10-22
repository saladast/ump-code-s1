#include<stdbool.h>
#include<stdio.h>
int main(){
    char base16[16]= "0123456789abcdef";
    int nb,a;
    int i=-1;
    char reserve;
    char result[100]="";
    printf("Give the number u want to transform from base 10 to base 16");
    scanf("%d",&nb);
    while (nb>0)
    {
        i++;
        a = nb % 16;
        nb = nb / 16;
        result[i]=base16[a];
    }
    printf("%d\n\n",i);
    int k = i;
    for (int j=0;j<=k;j++){
        reserve = result[k];
        result[k]= result[j];
        result[j]=reserve;
        k--;
    }
    puts(result);
}