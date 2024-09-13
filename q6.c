#include <stdio.h>

int main() 
{
    int voto, paulo = 0, renata = 0, brancos = 0, nulos = 0, total = 0;

    do 
    {
        printf("Digite seu voto (5-Paulo, 7-Renata, 0-Branco, negativo para sair): ");
        scanf("%d", &voto);

        if (voto >= 0) 
        {
            int confirmacao;
            printf("Confirma seu voto? (1-Sim, 2-Nao): ");
            scanf("%d", &confirmacao);

            if (confirmacao == 1) 
            {
                switch (voto) 
                {
                    case 5: paulo++; break;
                    case 7: renata++; break;
                    case 0: brancos++; break;
                    default: nulos++;
                }
                total++;
            }
        }
    } while (voto >= 0);

    printf("\nResultado da eleicao:\n");
    printf("Paulo: %.2f%%\n", (paulo * 100.0) / total);
    printf("Renata: %.2f%%\n", (renata * 100.0) / total);
    printf("Brancos: %.2f%%\n", (brancos * 100.0) / total);
    printf("Nulos: %.2f%%\n", (nulos * 100.0) / total);

    if (paulo > renata) 
    {
        printf("Paulo e o vencedor.\n");
    } 
    else if (renata > paulo) 
    {
        printf("Renata e a vencedora.\n");
    } 
    else 
    {
        printf("Houve um empate.\n");
    }

    return 0;
}
