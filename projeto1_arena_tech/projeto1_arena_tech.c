// DESENVOLVIDO POR: Isaque Moreira - RGM 48034983

#include <stdio.h>
#include <math.h>
#include<locale.h>

int main(void)
{
    setlocale(LC_CTYPE,"");
    // Variáveis de Entradas
    int qte_participantes, qte_jogadores_por_time, qte_computadores; 
    float potencia, duracao, preco_kwh; 
    float preco_kit, outros_custos, orcamento; 

    // Variáveis de Processamento
    int qte_times, computadores_faltantes; 
    float consumo_energia, custo_energia; 
    float custo_alimentacao, custo_total; 
    float custo_por_participante, saldo; 

    // Entrada de dados
    printf("============== ARENA TECH ==============");
    printf("\nDigite a quantidade de participantes: ");
    scanf("%d",& qte_participantes);

    printf("Digite a quantidade de jogadores em cada time: ");
    scanf("%d",& qte_jogadores_por_time);

    printf("Digite a quantidade de computadores disponíveis: ");
    scanf("%d",& qte_computadores);

    printf("Digite a potencia média de cada computador, em watts: ");
    scanf("%f",& potencia);

    printf("Digite a duração do evento, em horas: ");
    scanf("%f",& duracao);

    printf("Digite o preço de 1 kWh de energia: ");
    scanf("%f",& preco_kwh);

    printf("Digite o preço de um kit de alimentação por participante: ");
    scanf("%f",& preco_kit);

    printf("Digite o valor dos outros custos do evento: ");
    scanf("%f",& outros_custos);

    printf("Digite o orçamento máximo disponível para o evento: ");
    scanf("%f",& orcamento);

    // Calculos
    qte_times = ceil((float)qte_participantes / qte_jogadores_por_time);// - quantidade de times;
    consumo_energia = (qte_computadores * potencia * duracao) / 1000;// - consumo de energia;
    custo_energia = consumo_energia * preco_kwh;// - custo da energia;
    custo_alimentacao = qte_participantes * preco_kit;// - custo da alimentacao;
    custo_total = custo_energia + custo_alimentacao + outros_custos;// - custo total;
    custo_por_participante = custo_total / qte_participantes;// - custo por participante;
    saldo = orcamento - custo_total;// - saldo do orcamento.

    // Relatorio geral
    printf("\n============== ARENA TECH ==============");  
    printf("\nParticipantes: %d", qte_participantes);
    printf("\nTimes necessários: %d", qte_times); 
    printf("\nComputadores disponíveis: %d", qte_computadores);

    // Analise da infraestrutura
    if(qte_computadores>= qte_participantes){
        
        printf("\nInfraestrutura: SUFICIENTE");

    }else{

        printf("\nInfraestrutura: INSUFICIENTE, faltam %d computadores", qte_participantes - qte_computadores);
    
    }

    //Consumo de energia
    printf("\n\nConsumo estimado: %.2f kWh", consumo_energia);
    
    // Classificacao do consumo de energia (BAIXO, MODERADO ou ALTO)
    if(consumo_energia<=20){
        printf("\nClassificação do consumo: BAIXO");
    }else if(consumo_energia<=40){
        printf("\nClassificação do consumo: MODERADO");
    }else{
        printf("\nClassificação do consumo: ALTO");
    }

    // Relatorio de custos
    printf("\nCusto de energia: R$%.2f",custo_energia);
    printf("\nCusto de alimentação: R$%.2f",custo_alimentacao);
    printf("\nOutros custos: R$%.2f",outros_custos);
    printf("\nCUSTO TOTAL: R$%.2f",custo_total);
    printf("\nCUSTO POR PARTICIPANTE: R$%.2f",custo_por_participante);

    // Análise do orçamento
    printf("\n\nOrçamento disponível: R$%.2f", orcamento);
    printf("\nSaldo: R$%.2f", saldo);

    //Situações do orçamento
    printf("\nSituação do orçamento: ");
    if (custo_total>orcamento){

        printf("ACIMA DO ORÇAMENTO");

    }else if(custo_total <= orcamento && saldo <= (orcamento*0.05)  ){

        printf("NO LIMITE DO ORÇAMENTO");

    }else{

        printf("DENTRO DO ORÇAMENTO");
    }

    // Decisao final
    if (qte_computadores < qte_participantes || custo_total > orcamento ){
        printf("\n\nDECISÃO FINAL: NÃO RECOMENDADO");
        printf("\nMotivo: ");
        if (qte_computadores < qte_participantes && custo_total > orcamento){

            printf("Infraestrutura insuficiente e custo acima do orçamento");
        }else if (qte_computadores < qte_participantes){

            printf("Infraestrutura insuficiente");
        }else {
            
            printf("Custo total acima do orçamento");
        }
    }else if(consumo_energia > 40){

        printf("\n\nDECISÃO FINAL: APROVADO COM RESSALVAS");
        printf("\nMotivo: Consumo elevado de energia");

    }else {

        printf("\n\nDECISÃO FINAL: Aprovado");
        printf("\nMotivo: Infraestrutura e orçamento adequados\n");
        
    }
    printf("=========================================");

    return 0;
}
