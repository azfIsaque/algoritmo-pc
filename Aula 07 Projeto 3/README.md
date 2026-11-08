# 🚀 Aula 07 — Projeto 3 (Missão Orbital) e Exercícios Extras

## 🎯 Objetivo da aula
Resolver problemas combinando estruturas condicionais (`if/else`) com diferentes tipos de laços de repetição (`for`, `while`, `do-while`), consolidando as estratégias do Pensamento Computacional. A aula envolve exercícios introdutórios e um simulador interativo completo como projeto.

## 📝 Exercícios de Repetição e Análise (Pré-Projeto)

### Exercício 1
**Enunciado:** Durante a análise de um conjunto de dados numéricos, é necessário identificar algumas características básicas dos valores registrados, como a quantidade de valores positivos e negativos e o maior valor encontrado. Desenvolva um programa em C que leia inicialmente a quantidade de valores que será analisada e, em seguida, leia os respectivos números reais. Ao final, o programa deverá apresentar: quantidade de valores positivos; quantidade de valores negativos; maior valor informado. Considere o valor 0 como neutro.
**Arquivo:** [`exercicio01_positivo_negativo.c`](./exercicio01_positivo_negativo.c)
**Solução:** Implementa um rastreamento numérico usando variáveis de comparação em cadeia dentro de um laço determinado.

### Exercício 2
**Enunciado:** Uma pequena loja registra, ao final de cada dia, o valor total obtido com as vendas. Para acompanhar o desempenho semanal, o responsável deseja conhecer o valor acumulado das vendas realizadas durante os sete dias da semana. Desenvolva um programa em C que leia o valor das vendas de cada um dos 7 dias e apresente o total vendido na semana.
**Arquivo:** [`exercicio02_loja_vendas.c`](./exercicio02_loja_vendas.c)
**Solução:** Estrutura simples em `for` rodando 7 vezes e somando no acumulador `soma`.

### Exercício 3
**Enunciado:** Ao final de uma avaliação, um professor deseja obter rapidamente a quantidade de estudantes que alcançaram a média mínima estabelecida para aprovação. Considere que a turma possui 10 alunos e que uma nota igual ou superior a 6.0 é considerada suficiente para aprovação. Desenvolva um programa em C que leia a nota dos 10 alunos e apresente a quantidade de estudantes que obtiveram nota igual ou superior a 6.0.
**Arquivo:** [`exercicio03_aprovacao_alunos.c`](./exercicio03_aprovacao_alunos.c)
**Solução:** O laço repete recebendo *floats* e usa o seletor condicional `>= 6` para incrementar a métrica de "aprovados".

### Exercício 4
**Enunciado:** Um órgão regional de monitoramento climático registrou a temperatura média de cinco municípios. A partir desses dados, deseja-se produzir um relatório resumido sobre as condições observadas na região. Desenvolva um programa em C que leia o nome e a temperatura média de cada um dos cinco municípios e apresente: temperatura média da região; quantidade de municípios cuja temperatura média seja inferior a 10 °C. (Considere nomes sem espaços).
**Arquivo:** [`exercicio04_temperatura_municipio.c`](./exercicio04_temperatura_municipio.c)
**Solução:** Faz leituras associando string de dados e a temperatura de um município 5 vezes, contando quantas registraram <10 e processando a média geral.

---

## 📌 Projeto 3 — Simulador de Treinamento Espacial

### Contexto
A Agência Orbital está selecionando equipes para uma missão de exploração. Cada cadete realizará três etapas de treinamento. O sistema deverá receber as pontuações, impedir valores inválidos, calcular o desempenho e informar a classificação final. Ao término, o operador poderá iniciar o treinamento de outro cadete ou encerrar o programa.

### Descrição da Solução
**Arquivo:** [`projeto2_missao_orbital.c`](./projeto2_missao_orbital.c)
*(Nota: o arquivo real chama-se `projeto2_missao_orbital.c`, respeitando os requisitos originais de entrega).*
O programa utiliza o ecossistema completo de laços: um `do-while` para envolver a execução total (permitindo retestar outros cadetes), um `for` responsável por processar as exatas 3 etapas da missão e um `while` blindando o formulário (somente validando notas de 0 a 100). Em seguida o veredito é processado com fluxos condicionais.

### 📊 Testes Mínimos do PDF

| Teste | Pontuações | Média | Resultado esperado |
| --- | --- | --- | --- |
| 1 | 85, 70 e 95 | 83.33 | Piloto aprovado |
| 2 | 90, 85 e 95 | 90.00 | Comandante da missão |
| 3 | 40, 50 e 55 | 48.33 | Treinamento reiniciado |
| Validação | 120, depois 80 | - | Recusar 120 e aceitar 80 |

### 👥 Integrantes
- Isaque Moreira — RGM: 48034983

## ⚙️ Compilação rápida
`gcc projeto2_missao_orbital.c -o missao.exe`
