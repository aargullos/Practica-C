#include <stdio.h>
#define ROW 10
#define COLS 11
void main(){
    
    int num,  pos1, pos2, pos3, x=0, fila, col, i, j;
    int tauler[ROW][COLS];
    char lletra;
  
    
    printf("\n***********MENU*************");
    do{
        printf("\n      1/ FACIL            *");
        printf("\n      2/ REGULAR          *");
        printf("\n      3/ DIFICIL          *");
        printf("\n      4/ EXIT             *");
    printf("\n****************************\n");
    printf("Selecciona la dificultat:\n");
        scanf("%d",&num);
    }while(num < 1 || num > 4);
    
    switch (num){
        
        case 1: printf("Has escollit el mode mes facil\n");
            printf(" \n  [A][B][C][D][E][F][G][H][I][J]  \n");
            for(i=0;i < ROW; i++){
                for(j=0; j < COLS;j++){
                    tauler[i][j]= 0;
                    if (j != 0){
                        printf("{%d}",tauler[i][j]);
                    }else{
                        printf("%d ",x);
                            x = x + 1;
                        }
                    }
                    
                    printf("\n");
                    
                }
                x = 0;
                
                printf("Quina fila vols seleccionar?\n");
                scanf("%d",&pos2);
                printf("Quina columna vols seleccionar?\n");
                scanf("%s",&lletra);
                
                switch(lletra){
                    case 'A': pos1 = 1;
                    break;
                    case 'B': pos1 = 2;
                    break;
                    case 'C': pos1 = 3;
                    break;
                    case 'D': pos1 = 4;
                    break;
                    case 'E': pos1 = 5;
                    break;
                    case 'F': pos1 = 6;
                    break;
                    case 'G': pos1 = 7;
                    break;
                    case 'H': pos1 = 8;
                    break;
                    case 'I': pos1 = 9;
                    break;
                    case 'J': pos1 = 10;
                    break;
                }
                printf("\n");
                tauler[pos2][pos1] = 1;
                printf("  [A][B][C][D][E][F][G][H][I][J]  \n");
                for(i=0;i < ROW; i++){
                    for(j=0; j < COLS;j++){
                        if (j != 0){
                            printf("{%d}",tauler[i][j]);
                        }else{
                            printf("%d ",x);
                            x = x + 1;
                        }
                    }
                    printf("\n");
                }
               if (tauler[4][3] != 0 ){
		              
                    printf("Felicitats has guanyat");
                }else if(tauler[8][8] != 0){
                        printf("Felicitats has guanyat");
                } else if(tauler[5][4] != 0){
                        printf("Felicitats has guanyat");
                } else if(tauler[6][7] != 0){
                        printf("Felicitats has guanyat");
                } else if(tauler[9][9] != 0){
                        printf("Felicitats has guanyat");
                } else if(tauler[5][2] != 0){
                        printf("Felicitats has guanyat");
                } else if(tauler[3][6] != 0){
                        printf("Felicitats has guanyat");
                }else {
                    printf("Has fallat");
                }
        break;
        case 2: printf("Has escollit el segon mode\n");
        printf(" \n  [A][B][C][D][E][F][G][H][I][J]  \n");
            for(i=0;i < ROW; i++){
                for(j=0; j < COLS;j++){
                    tauler[i][j]= 0;
                    if (j != 0){
                        printf("{%d}",tauler[i][j]);
                    }else{
                        printf("%d ",x);
                            x = x + 1;
                        }
                    }
                    
                    printf("\n");
                    
                }
                x = 0;
                
                printf("Quina fila vols seleccionar?\n");
                scanf("%d",&pos2);
                printf("Quina columna vols seleccionar?\n");
                scanf("%s",&lletra);
                
                switch(lletra){
                    case 'A': pos1 = 1;
                    break;
                    case 'B': pos1 = 2;
                    break;
                    case 'C': pos1 = 3;
                    break;
                    case 'D': pos1 = 4;
                    break;
                    case 'E': pos1 = 5;
                    break;
                    case 'F': pos1 = 6;
                    break;
                    case 'G': pos1 = 7;
                    break;
                    case 'H': pos1 = 8;
                    break;
                    case 'I': pos1 = 9;
                    break;
                    case 'J': pos1 = 10;
                    break;
                }
                printf("\n");
                tauler[pos2][pos1] = 1;
                printf("  [A][B][C][D][E][F][G][H][I][J]  \n");
                for(i=0;i < ROW; i++){
                    for(j=0; j < COLS;j++){
                        if (j != 0){
                            printf("{%d}",tauler[i][j]);
                        }else{
                            printf("%d ",x);
                            x = x + 1;
                        }
                    }
                    printf("\n");
                }
               if (tauler[4][3] != 0 ){
		              
                    printf("Felicitats has guanyat");
                }else if(tauler[8][8] != 0){
                        printf("Felicitats has guanyat");
                } else if(tauler[5][4] != 0){
                        printf("Felicitats has guanyat");
                } else if(tauler[6][7] != 0){
                        printf("Felicitats has guanyat");
                } else if(tauler[9][9] != 0){
                        printf("Felicitats has guanyat");
                } else if(tauler[5][2] != 0){
                        printf("Felicitats has guanyat");
                } else if(tauler[3][6] != 0){
                        printf("Felicitats has guanyat");
                }else {
                    printf("Has fallat");
                }
        break;
        case 3: printf("Has escollit el mode mes dificil, estas segur?");
        printf(" \n  [A][B][C][D][E][F][G][H][I][J]  \n");
            for(i=0;i < ROW; i++){
                for(j=0; j < COLS;j++){
                    tauler[i][j]= 0;
                    if (j != 0){
                        printf("{%d}",tauler[i][j]);
                    }else{
                        printf("%d ",x);
                            x = x + 1;
                        }
                    }
                    
                    printf("\n");
                    
                }
                x = 0;
                
                printf("Quina fila vols seleccionar?\n");
                scanf("%d",&pos2);
                printf("Quina columna vols seleccionar?\n");
                scanf("%s",&lletra);
                
                switch(lletra){
                    case 'A': pos1 = 1;
                    break;
                    case 'B': pos1 = 2;
                    break;
                    case 'C': pos1 = 3;
                    break;
                    case 'D': pos1 = 4;
                    break;
                    case 'E': pos1 = 5;
                    break;
                    case 'F': pos1 = 6;
                    break;
                    case 'G': pos1 = 7;
                    break;
                    case 'H': pos1 = 8;
                    break;
                    case 'I': pos1 = 9;
                    break;
                    case 'J': pos1 = 10;
                    break;
                }
                printf("\n");
                tauler[pos2][pos1] = 1;
                printf("  [A][B][C][D][E][F][G][H][I][J]  \n");
                for(i=0;i < ROW; i++){
                    for(j=0; j < COLS;j++){
                        if (j != 0){
                            printf("{%d}",tauler[i][j]);
                        }else{
                            printf("%d ",x);
                            x = x + 1;
                        }
                    }
                    printf("\n");
                }
               if (tauler[4][3] != 0 ){
		              
                    printf("Felicitats has guanyat");
                }else if(tauler[8][8] != 0){
                        printf("Felicitats has guanyat");
                } else if(tauler[5][4] != 0){
                        printf("Felicitats has guanyat");
                } else if(tauler[6][7] != 0){
                        printf("Felicitats has guanyat");
                } else if(tauler[9][9] != 0){
                        printf("Felicitats has guanyat");
                } else if(tauler[5][2] != 0){
                        printf("Felicitats has guanyat");
                } else if(tauler[3][6] != 0){
                        printf("Felicitats has guanyat");
                }else {
                    printf("Has fallat");
                }
        break;
        case 4: printf("Has escollit sortir");
    }
}
