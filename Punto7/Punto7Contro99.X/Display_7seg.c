#include "Display_7seg.h"
#include "Confi.h"

void display_init(void){
    //Catodo Comun
    DIR_segCCA = OUT;
    DIR_segCCB = OUT;
    DIR_segCCC = OUT;
    DIR_segCCD = OUT;
    DIR_segCCE = OUT;
    DIR_segCCF = OUT;
    DIR_segCCG = OUT;
    
    //Anodo Comun
    
    DIR_segACA = OUT;
    DIR_segACB = OUT;
    DIR_segACC = OUT;
    DIR_segACD = OUT;
    DIR_segACE = OUT;
    DIR_segACF = OUT;
    DIR_segACG = OUT;
    DIR_segAc2G = OUT;
}
//void display_Ac(char AC);

void display_Ac(int AC){
    
    switch(AC){
        case 0: segACA = 0;
                segACB = 0;
                segACC = 0;
                segACD = 0;
                segACE = 0;
                segACF = 0;
                segACG = 1;
                segAc2G = 1;
                break;
                
        case 1: segACA = 1;
                segACB = 0;
                segACC = 0;
                segACD = 1;
                segACE = 1;
                segACF = 1;
                segACG = 1;
                segAc2G = 1;
                break;
        case 2: segACA = 0;
                segACB = 0;
                segACC = 1;
                segACD = 0;
                segACE = 0;
                segACF = 1;
                segACG = 0;
                segAc2G = 0;
                break;
        case 3: segACA = 0;
                segACB = 0;
                segACC = 0;
                segACD = 0;
                segACE = 1;
                segACF = 1;
                segACG = 0;
                segAc2G = 0;
                break;
        case 4: segACA = 1;
                segACB = 0;
                segACC = 0;
                segACD = 1;
                segACE = 1;
                segACF = 0;
                segACG = 0;
                segAc2G = 0;
                break;
        case 5: segACA = 0;
                segACB = 1;
                segACC = 0;
                segACD = 0;
                segACE = 1;
                segACF = 0;
                segACG = 0;
                segAc2G = 0;
                break;
        case 6: segACA = 0;
                segACB = 1;
                segACC = 0;
                segACD = 0;
                segACE = 0;
                segACF = 0;
                segACG = 0;
                segAc2G = 0;
                break;
        case 7: segACA = 0;
                segACB = 0;
                segACC = 0;
                segACD = 1;
                segACE = 1;
                segACF = 1;
                segACG = 1;
                segAc2G= 1;
                break;
        case 8: segACA = 0;
                segACB = 0;
                segACC = 0;
                segACD = 0;
                segACE = 0;
                segACF = 0;
                segACG = 0;
                segAc2G=0;
                break;
        case 9: segACA = 0;
                segACB = 0;
                segACC = 0;
                segACD = 1;
                segACE = 1;
                segACF = 0;
                segACG = 0;
                segAc2G=0;
                break;
    }
}    
    
void display_Cc(int CC){
    
    switch(CC){
        case 0: segCCA = 1;
                segCCB = 1;
                segCCC = 1;
                segCCD = 1;
                segCCE = 1;
                segCCF = 1;
                segCCG = 0;
                break;
                
        case 1: segCCA = 0;
                segCCB = 1;
                segCCC = 1;
                segCCD = 0;
                segCCE = 0;
                segCCF = 0;
                segCCG = 0;
                break;
        case 2: segCCA = 1;
                segCCB = 1;
                segCCC = 0;
                segCCD = 1;
                segCCE = 1;
                segCCF = 0;
                segCCG = 1;
                break;
        case 3: segCCA = 1;
                segCCB = 1;
                segCCC = 1;
                segCCD = 1;
                segCCE = 0;
                segCCF = 0;
                segCCG = 1;
                break;
        case 4: segCCA = 0;
                segCCB = 1;
                segCCC = 1;
                segCCD = 0;
                segCCE = 0;
                segCCF = 1;
                segCCG = 1;
                break;
        case 5: segCCA = 1;
                segCCB = 0;
                segCCC = 1;
                segCCD = 1;
                segCCE = 0;
                segCCF = 1;
                segCCG = 1;
                break;
        case 6: segCCA = 1;
                segCCB = 0;
                segCCC = 1;
                segCCD = 1;
                segCCE = 1;
                segCCF = 1;
                segCCG = 1;
                break;
        case 7: segCCA = 1;
                segCCB = 1;
                segCCC = 1;
                segCCD = 0;
                segCCE = 0;
                segCCF = 0;
                segCCG = 0;
                break;
        case 8: segCCA = 1;
                segCCB = 1;
                segCCC = 1;
                segCCD = 1;
                segCCE = 1;
                segCCF = 1;
                segCCG = 1;
                break;
        case 9: segCCA = 1;
                segCCB = 1;
                segCCC = 1;
                segCCD = 0;
                segCCE = 0;
                segCCF = 1;
                segCCG = 1;
                break;
    }
}


