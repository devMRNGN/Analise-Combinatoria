#include <stdlib.h>
#include <stdio.h>
int fatoriar(int n){
    int fatorial = 1;
    for(int i = 1; i <= n; i++){
        fatorial = fatorial * i;
    }
    return(fatorial);
}
int elevar(int n, int p){
    int elevar = 1;
    for(int i = 1; i <= p; i++){
        elevar = elevar * n;
    }
    return(elevar);
}
int mostrarMenu(){
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
return 0;
}
int main(void){
    int alternativa, n, p, numeroRepeticoes, nFatorial, pFatorial, resultado, nMenosP, npFatorial, nMaisPMenos1, nMenos1;
    int resultadoFatoriado = 1; int resultadoTotal = 1;
    do {
        printf(mostrarMenu());
        printf("\nEscolha uma alternativa do menu: ");
        scanf("%d",&alternativa);
        system("cls");
        switch (alternativa){
            case 1:
                printf("\nInforme n: ");
                scanf("%d",&n);
                nFatorial = fatoriar(n);
                printf("Resultado: %d possibilidades\n",nFatorial);
                printf("\nPressione enter para continuar....");
                scanf("%c");
                scanf("%c");
                system("cls");
            break;
            case 2:
                printf("\nInforme n:");
                scanf("%d",&n);
                nFatorial = fatoriar(n);
                printf("\nInforme numero de repeticoes: ");
                scanf("%d",&numeroRepeticoes);
                for(int i = 1; i <= numeroRepeticoes; i++){
                    printf("\nInforme a repeticao %d: ",i);
                    scanf("%d",&p);
                    pFatorial = fatoriar(p);
                    resultadoFatoriado = pFatorial;
                    resultadoTotal = resultadoTotal * resultadoFatoriado;
                }
                resultado = nFatorial / resultadoTotal;
                printf("\nResultado: %d possibilidades",resultado);
                printf("\nPressione enter para continuar....");
                scanf("%c");
                scanf("%c");
                system("cls");
            break;
            case 3:
                printf("\nInforme n: ");
                scanf("%d",&n);
                nFatorial = fatoriar(n);
                printf("\nInforme p: ");
                scanf("%d",&p);
                nMenosP = n - p;
                pFatorial = fatoriar(nMenosP);
                resultado = nFatorial / pFatorial;
                printf("\nResultado: %d possibilidades",resultado);
                printf("\nPressione enter para continuar....");
                scanf("%c");
                scanf("%c");
                system("cls");
            break;
            case 4:
                printf("\nInforme n: ");
                scanf("%d",&n);
                printf("\nInforme p: ");
                scanf("%d",&p);
                resultado = elevar(n,p);
                printf("\nResultado: %d possibilidades",resultado);
                printf("\nPressione enter para continuar....");
                scanf("%c");
                scanf("%c");
                system("cls");
            break;
            case 5:
                printf("\nInforme n: ");
                scanf("%d",&n);
                nFatorial = fatoriar(n);
                printf("\nInforme p: ");
                scanf("%d",&p);
                pFatorial = fatoriar(p);
                nMenosP = n - p;
                npFatorial = fatoriar(nMenosP);
                resultadoFatoriado = pFatorial * npFatorial;
                resultado = nFatorial / resultadoFatoriado;
                printf("\nResultado: %d possibilidades",resultado);
                printf("\nPressione enter para continuar....");
                scanf("%c");
                scanf("%c");
                system("cls");
            break;
            case 6:
                printf("\nInforme n:");
                scanf("%d",&n);
                printf("\nInforme p:");
                scanf("%d",&p);
                nMaisPMenos1 = n + p - 1;
                nFatorial = fatoriar(nMaisPMenos1);
                pFatorial = fatoriar(p);
                nMenos1 = n - 1;
                npFatorial = fatoriar(nMenos1);
                resultadoFatoriado = pFatorial * npFatorial;
                resultado = nFatorial / resultadoFatoriado;
                printf("\nResultado: %d possibilidades\n",resultado);
                printf("\nPressione enter para continuar....");
                scanf("%c");
                scanf("%c");
                system("cls");
            break;
            case 0:
                printf("\nObrigado por usar a calculadora\nBy: devMRNGN");
            break;
        }
    } while(alternativa != 0);

return 0;
}
