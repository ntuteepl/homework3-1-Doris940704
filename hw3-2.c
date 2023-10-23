#include <stdio.h>
#include <stdlib.h>
int main()//作業三
{
int s[3]={0};
int d[3]={0};
for(int i=0;i<3;i++){
    scanf("%d",&s[i]);
    scanf("%d",&d[i]);
}
int t[25]={0};
int max=0;
for (int i=0;i<3;i++){
    for(int j=s[i];j<d[i];j++){
        t[j]=t[j]+1;
    }
    for(int k=0;k<25;k++){
        if(t[k]>max)
            max=t[k];
    }

}
printf("%d",max);
}
