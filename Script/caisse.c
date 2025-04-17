#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void calcule_monnaie ( double montant_a_rendre ) {
    int billets[] = {2000, 1000, 500, 200, 100, 50, 25}; 
    int pieces[] = {20, 10, 5, 1}; 
    double sous[] = {0.50, 0.20, 0.05}; 
   
}

int main() {

  srand(time(NULL)); 
  double valeur_a_payer = rand() % 500 + 2000;
  printf("La valeur a payer est : %.2f Rs\n", valeur_a_payer);
 
  int montant_a_donner;
     printf("Entrez le montant que vous aller donner : ");
     scanf("%d", &montant_a_donner);
     printf("La valeur que vous allez donner est : %d Rs\n", montant_a_donner);
  while ( valeur_a_payer > montant_a_donner) {
     printf("Veuillez resaisir un montant ");
     scanf("%d", &montant_a_donner);
     printf("La valeur que vous aller donner est : %d Rs\n", montant_a_donner);
         }
              return 0;
}

