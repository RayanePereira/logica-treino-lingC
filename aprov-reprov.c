
int main()
{
    float nota1, nota2, media;
    printf("Digite a sua primeira nota por gentileza: \n");
        scanf("%f", &nota1);
    printf("Agora, por favor digite a sua segunda nota: \n");
        scanf("%f", &nota2);

    media = (nota1 + nota2) /2;

    if (media >= 5) {
        printf("Meus parabéns, você foi aprovado!!! \n");
    } else {
        printf("Sinto muito, você foi reprovado, mas calma, basta estudar corretamente e revisar! Você consegue e é mais que uma nota! \n");
    }

    system ("pause");
    return(0);
}
