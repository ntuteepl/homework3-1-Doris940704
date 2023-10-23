#include <stdio.h>
#include <stdlib.h>

main()//作業四
{
int answer[4]={0};
int guess[4]={0};
int countinue_game=1;
int A=0,B=0;

scanf("%1d%1d%1d%1d",&answer[0],&answer[1],&answer[2],&answer[3]);


while(countinue_game=1){
A=0;
B=0;
scanf("%1d",&guess[0]);
    if(guess[0]!=0){
        scanf("%1d%1d%1d",&guess[1],&guess[2],&guess[3]);
        for(int i=0;i<4;i++){
            if(guess[i]==answer[i])
                A=A+1;
            else{
                for(int j=0;j<4;j++){
                    if(guess[i]==answer[j])
                        B=B+1;
                }
            }
        }
        printf("%dA%dB\n",A,B);
    }
    else{
        countinue_game=0;
        break;
    }

}



}
