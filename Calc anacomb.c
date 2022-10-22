#include <stdlib.h>
#include <stdio.h>
int main(void){
system("color 4");

int fatorial = 1;
int fn = 1;
int fkt = 1;
int fk = 1;
int pr = 0;
int opcao, i, k, n, k2, permu, kn, i2;
int fatn = 1;
int fatk = 1;
int fatk2 = 1;
int comb = 1;
int combr = 1;
int nf = 0;
int arranjo = 1;
int arranjor = 1;
                                //MENU
printf("\n----------------------------------------------");
printf("\nMENU");
printf("\n1. P(n)");
printf("\n2. PR(n,k)");
printf("\n3. A(n,k)");
printf("\n4. AR(n,k)");
printf("\n5. C(n,k)");
printf("\n6. CR(n,k)");
printf("\n0. SAIR");
printf("\n----------------------------------------------");
do {
    printf("\nEscolha uma opcao: ");
    scanf("%d",&opcao);
    switch (opcao) {

    case 1:
        //P(n,k)
        printf("\n------------PERMUTACAO---------------");
        printf("\nDigite o valor de n: ");
        scanf("%d",&n);
        for(i = 1; i <= n; i++){
            fatorial = fatorial * i;
        }
        printf("\nP %d = %d preposicoes\n", n, fatorial);

    break;

    case 2:
        //Permutacao Repeticao
        printf("\n------------PERMUTACAO C/ REPETICAO---------------");
        printf("\nvalor n: ");
        scanf("%d",&n);
        printf("\nNumero de repeticoes: ");
        scanf("%d",&kn);
            for(i = 1; i <= n; i++) {
                fn = fn * i;
            }
            for(i = 1; i <= kn; i++) {
                printf("\nvalor da %d repeticao ",i);
                scanf("%d",&k);
                for(i2 =1; i2 <= k; i2++) {
                    fk = fk * i2;
                }
                fkt = fkt * fk;
                fk = 1;
            }
        pr = fn / fkt;
        printf("\nPR %d c/ %d repeticoes = %d\n",n,k,pr);

    break;

    case 3:
        //A(n,k)
        printf("\n------------ARRANJO SIMPLES---------------");
        printf("\nDigite um valor para n: ");
        scanf("%d",&n);
        printf("\nDigite um valor para k: ");
        scanf("%d",&k);
        k = n - k;
        for(i =1; i <= n; i++){
            fatn = fatn * i;
        }
        for(i = 1; i <= k; i++){
            fatk = fatk * i;
        }
        arranjo = fatn / fatk;
        printf("\nA%d,%d = %d\n",n,k,arranjo);

    break;

    case 4:
        //AR(n,k)
        printf("\n------------ARRANJO C/ REPETICAO---------------");
        printf("\nDigite um valor para n: ");
        scanf("%d",&n);
        printf("\nDigite um valor para k: ");
        scanf("%d",&k);
        for(i = 1; i <= k; i++){
            arranjor = arranjor * n;
        }
        printf("\nAR%d,%d = %d\n",n,k,arranjor);
    break;

    case 5:
        //C(n,k)
        printf("\n------------COMBINACAO SIMPLES---------------");
        printf("\nDigite valor para n: ");
        scanf("%d",&n);
        printf("\nDigite valor para k: ");
        scanf("%d",&k);
        k2 = n - k;
        for(i = 1; i <= n; i++){
            fatn = fatn * i;
        }
        for(i = 1; i <= k; i++){
            fatk = fatk * i;
        }
        for(i = 1; i <= k2; i++){
            fatk2 = fatk2 * i;
        }
        comb = fatn / (fatk * fatk2);
        printf("\nC%d,%d = %d\n",n,k,comb);

    break;

    case 6:
        //CR(n,k)
        printf("\n------------COMBINACAO C/ REPETICAO---------------");
        printf("\nDigite um valor para n: ");
        scanf("%d",&n);
        printf("\nDigite um valor para k: ");
        scanf("%d",&k);
        nf = n + k - 1;
        for(i = 1; i <= nf; i++){
            fatn = fatn * i;
        }
        for(i = 1; i <= k; i++){
            fatk = fatk * i;
        }
        k2 = n - 1;
        for(i = 1; i <= k2; i++){
            fatk2 = fatk2 * i;
        }
        combr = fatn / (fatk * fatk2);
        printf("\nCR%d,%d = %d\n",n,k,combr);

    break;

    case 0:
        printf("\nSaindo....");
    break;

    default:
        printf("\nEscolha uma opcao valida!");
    break;
        }
} while (opcao != 0);

system("pause");
return 0;
}




