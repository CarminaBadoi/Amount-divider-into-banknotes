//#######################
//##   BADOI CARMINA   ##
//##    01-03-2020     ##
//#######################

//Write a C program to read an amount (integer value)
// and break the amount into smallest possible number of bank notes.

//This program is made for Romanian bank notes.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{ int suma_de_bani,cifra;
   // Posibile bancnote : 100 LEI,10 LEI,5 LEI,1 LEI
   //NU LUAM IN CALCUL BANCNOTELE DE 500 LEI SI 200 LEI PT CA SUNT RARE

    printf("Da-mi suma de bani (LEI) : ");
    scanf("%d",&suma_de_bani);

    cifra = suma_de_bani/100;

    printf("Avem :");

    // ####### PENTRU CIFRA SUTELOR #######


    if(cifra == 5 )                  {  printf("\n%d bancnote de 500 LEI",cifra/5 );}
    else if(cifra%2==0 )             {  printf("\n%d bancnote de 200 LEI",cifra/2);
                                        printf("\n%d bancnote de 100 LEI",cifra-(cifra/2)*2 );}
    else if(cifra%2==1)              {  printf("\n%d bancnote de 200 LEI",cifra/2 );
                                        printf("\n%d bancnote de 100 LEI",cifra-(cifra/2)*2);}

    // ####### PENTRU CIFRA ZECILOR #######

    suma_de_bani=suma_de_bani%100;
    cifra = suma_de_bani/10;

    if(cifra == 5 )                 { printf("\n%d bancnote de 50 LEI",cifra/5 );}

    else if(cifra%2==0 )            { printf("\n%d bancnote de 50 LEI",cifra/5);
                                      printf("\n%d bancnote de 10 LEI",cifra-(cifra/5)*5 );   }

    else if(cifra%2==1)             { printf("\n%d bancnote de 50 LEI",cifra/5 );
                                      printf("\n%d bancnote de 10 LEI",cifra-(cifra/5)*5);  }


    // ####### PENTRU CIFRA UNITATILOR #######

    suma_de_bani = suma_de_bani%10;
    cifra = suma_de_bani;

    if(cifra == 5 )                 { printf("\n%d bancnote de 5 LEI",cifra/5 );}

    else if(cifra%2==0 )            { printf("\n%d bancnote de 5 LEI",cifra/5);
                                      printf("\n%d bancnote de 1 LEI",cifra-(cifra/5)*5 );   }

    else if(cifra%2==1)             { printf("\n%d bancnote de 5 LEI",cifra/5 );
                                      printf("\n%d bancnote de 1 LEI",cifra-(cifra/5)*5);  }





    return 0;
}
