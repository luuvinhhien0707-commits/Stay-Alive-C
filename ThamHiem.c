#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int doi=100,khat=100;
int wave=0;
int choose0,choose1,choose2,choose22,choose3,chooseend=1;
int ran;
void CHOOSE(){
        printf ("Tien Len 1 Buoc\n");
        doi=doi-15;
        khat=khat-10;
        printf ("do doi:%d\ndo khat:%d\n",doi,khat);
        printf ("\n1.An\n2.Uong\n");
        scanf ("%d",&choose1);
        switch (choose1){
            case 1:
            doi=doi+25;
            break;
            case 2:
            khat=khat+15;
            break;
        }
    }
void Wave(){
    if (wave%10==0){
        printf ("do doi:%d\ndo khat:%d\n",doi,khat);
        printf ("\n50%% Hoi Day Thanh,ko win se tru gap doi bth\n1.Ok\n2.Khong Can\n");
        scanf ("%d",&choose2);
        switch(choose2){
            case 1:
            printf ("\n1.doi hay 2.khat\n");
            ran=rand()%2+1;
            scanf ("%d",&choose22);
            switch (choose22){
                case 1:
                if (ran==1){
                    doi=100;
                }else {
                    doi=doi-15;
                }break;
                case 2:
                if (ran==2){
                    khat=100;
                }else {
                    khat=khat-10;
                }break;
            }break;
            case 2:
            printf("\nok thoi\n");
            break;
        }
    }
    else if (wave%5==0){
        printf ("do doi:%d\ndo khat:%d\n",doi,khat);
        printf ("1 trong 2 lua chon la bay\n1.An\n2.Uong\n");
        scanf ("%d",&choose3);
        ran=rand()%2+1;
        switch (choose3){
            case 1:
            if (ran==1){
                doi=doi-50;
            }break;
            case 2:
            if (ran==2){
                khat=khat-50;
            }break;
        }
    } 
} 
void WAVE(){
    wave =wave+1;
    printf("===WAVE %d===\n",wave);
}
void END(){
    printf ("\nBan Da Song Duoc %d Vong\n",wave);
    printf ("\nBan Muon Choi Tiep?\n1.OK\n2.Ko\n");
    scanf ("%d",&chooseend);
    switch (chooseend){
        case 1:
        chooseend=1;
        doi=100;
        khat=100;
        wave=0;
        break;
        case 2:
        printf("Bye");
        chooseend=0;
        break;
    }

}
int main (){
    srand(time(NULL));
    while (chooseend==1){
        while (doi>0&&khat>0){
            WAVE();
            Wave();
            if (doi<=0 || khat<=0) break;
            CHOOSE();
            if (doi<=0 || khat<=0) break;
        }END();
    }        

    return 0;
} 