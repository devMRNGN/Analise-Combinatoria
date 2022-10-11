#include <stdlib.h>
#include <stdio.h>
int main(void){
system("color 4");

int fatorial = 1;
int opcao, i, k, n, k2;
int fatn = 1;
int fatk = 1;
int fatk2 = 1;
int comb = 1;
int combr = 1;
int nf = 0;
int arranjo = 1;
int arranjor = 1;
                                //MENU
printf("\n=====MENU OPCOES=====");
printf("\n1. Permutacao Simples");
printf("\n2. Permutacao com Repeticao");
printf("\n3. Combinacao Simples");
printf("\n4. Combinacao com Repeticao");
printf("\n5. Arranjo Simples");
printf("\n6. Arranjo com Repeticao");
printf("\nEscolha uma opcao: ");
scanf("%d",&opcao);
    switch (opcao) {

    case 1:

        printf("\n==========PERMUTACAO SIMPLES===========");
        printf("\nDigite o valor de n: ");
        scanf("%d",&n);
        for(i = 1; i <= n; i++){
            fatorial = fatorial * i;
        }
        printf("\nP %d,%d = %d preposicoes\n", n, n, fatorial);

    break;

    case 2:

        printf("\n==========PERMUTACAO COM REPETICAO===========");

    break;

    case 3:

        printf("\n==========COMBINACAO SIMPLES===========");
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

    case 4:

        printf("\n==========COMBINACAO COM REPETICAO===========");
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

    case 5:

        printf("\n==========ARRANJO SIMPLES===========");
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

    case 6:

        printf("\n==========ARRANJO COM COMBINACAO===========");
        printf("\nDigite um valor para n: ");
        scanf("%d",&n);
        printf("\nDigite um valor para k: ");
        scanf("%d",&k);
        for(i = 1; i <= k; i++){
            arranjor = arranjor * n;
        }
        printf("\nAR%d,%d = %d\n",n,k,arranjor);

    break;

    default:

        printf("\nOpcao invalida");

    break;
    }

system("pause");
return 0;
}
