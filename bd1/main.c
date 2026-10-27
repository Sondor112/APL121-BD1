#include <stdio.h>   
#include <stdlib.h>  
#include <time.h>   

int main() {
    srand(time(NULL)); 
    
    
    int secretNumber, guess, attempts;
    int scores[3]; 

    printf("=== T00 TAAX TOGLOOM EXELLEE (7 OROLDLOGO) ===\n");

  
    for (int gameloop = 0; gameloop < 3; gameloop++) {
        secretNumber = rand() % 100 + 1;
        attempts = 0;                    
        int won = 0;                     

        printf("\n------------------------------------\n");
        printf("%d-r togloolt exellee! 1-100 xooroond too taagaarai.\n", gameloop + 1);

        while (attempts < 7) {
            printf("%d-r oroldlogo. Toogoo oruul: ", attempts + 1);
            scanf("%d", &guess);    
            attempts = attempts + 1; 

            if (guess == secretNumber) {
                
                printf("Bayar xurgeye! Ta %d oroldlogoor taalaala.\n", attempts);
                won = 1; 
                break;
            } 
            
            else if (guess > secretNumber) {
                printf("Ix baina\n"); 
            } 
           
            else if (guess < secretNumber) {
                printf("Baga baina\n"); 
            }
        }

        if (won == 1) {
            scores[gameloop] = attempts;
        } else {
            printf("Uuchlaarai, oroldlogo duuslaa. Nuuts too: %d baisan.\n", secretNumber);
            scores[gameloop] = 999;
        }
    }

  
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (scores[j] > scores[j + 1]) {
                int temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }

    printf("\n=========================================\n");
    printf("   TOGLOLTIIN UR DUNGUUD (EREMBELSEN):\n");
    printf("=========================================\n");

    int rank = 1;
    for (int i = 0; i < 3; i++) {
        if (scores[i] != 999) {
            printf("%d-r shildeg rekord: %d oroldlogo!\n", rank, scores[i]);
            rank++;
        }
    }

    if (rank == 1) {
        printf("Xaramsaltai ni 3 togloold xen ch too taaj chadsangui.\n");
    }
    printf("=========================================\n");

    return 0;
}

