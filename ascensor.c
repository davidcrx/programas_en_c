#include <stdio.h>

int main () {

    int actual, boto;
    
    printf("En quin pis et troves?:");
    scanf("%i", &actual);
    printf("Prem un botó:");
    scanf("%i", &boto);
    
    if (actual==0) {
       
        if (boto==+1) {
            printf("Estas a la primera planta\n");
        } else if (boto==+2) {
            printf("Estas a la segona planta\n");
        } 
        else {
            printf("Has introduit un boto incorrecte\n");
        }
    }
    
    
    if (actual==1) {
        
        
        if (boto==+1) {
                printf("Estas a la segona planta\n");
         } else if (boto==-2) {
            printf("Estas a la planta baixa\n");
         } 
        else {
            printf("Has introduit un boto incorrecte");
        }
    }
            
    
     
    if (actual==2) {
                
        if (boto==-1) {
            printf("Estas al primer pis\n");
            
        } else if (boto==-2) {
                printf("Estas a la planta baixa\n");
        } 
        else {
                printf("Has introduit un boto incorrecte\n");
        }
    }

            
       
    return 0;
    
}
