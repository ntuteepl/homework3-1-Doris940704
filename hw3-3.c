#include <stdio.h>
#include <stdlib.h>
main()//作業三
{
int a,b;
scanf("%d%d",&a,&b);
int a1[4]={0};
int b1[4]={0};
int a_copy=a;
int b_copy=b;
for (int i=0;i<4;i++){
    a1[i]=a_copy%10;
    a_copy=a_copy/10;
}
for (int i=0;i<4;i++){
    b1[i]=b_copy%10;
    b_copy=b_copy/10;
}
int a2=a1[0]+a1[1]+a1[2]+a1[3];
int b2=b1[0]+b1[1]+b1[2]+b1[3];
if(a2==b2){
    if(a<b)
        printf("%d",a);
    else
        printf("%d",b);
}
if(a2<b2)
    printf("%d",a);
if(a2>b2)
    printf("%d",b);
}
