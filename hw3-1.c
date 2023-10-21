#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int main()//作業一
{
int i;
bool n;
int k=2;
scanf("%d",&i);
while((i-1>=k)&&(n=true)){
    if(i%k==0){
        n=0;
        break;
    }
    k++;
}
if(n==0)
    printf("No");
else
    printf("yes");
}
