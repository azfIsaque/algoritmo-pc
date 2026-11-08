# 📘 Aula 08 — Estruturas de Dados Básicas

## 🎯 Objetivo da aula
Compreender como organizar e processar conjuntos de dados do mesmo tipo em linguagem C utilizando matrizes e vetores:
- **Vetores:** armazenar uma sequência de valores acessados por um índice.
- **Matrizes:** representar dados organizados em linhas e colunas.
- **Laços Aninhados:** percorrer vetores e matrizes, realizando padrões de soma, contagem e busca.
A aula também permite aplicar essas estruturas em situações práticas envolvendo salários, vendas e textos (strings introduzidas).

*Nota: Durante a aula foram apresentados conceitos essenciais sobre armazenamento (índice × conteúdo), ausência de limites dinâmicos nativos na linguagem C, leitura controlada e percursos bidimensionais.*

## 📝 Exercícios

### Exercício 1 — Salários dos funcionários
**Enunciado:** Programa em C que lê o salário de 4 funcionários, armazena os valores em um vetor e exibe os salários na mesma ordem em que foram digitados.
**Arquivo:** [`exercicio1.c`](./exercicio1.c)
**Solução:** Cria um *array* float para 4 posições, utiliza um `for` para preencher os inputs e outro subsequente para imprimi-los.

### Exercício 2 — Medições de desempenho
**Enunciado:** Programa em C que lê 8 valores reais e os armazena em um vetor, calcula a média dos valores e determina quantos valores ficaram acima da média.
**Arquivo:** [`exercicio2.c`](./exercicio2.c)
**Solução:** Popula o vetor com os 8 registros. O programa processa a média na primeira lida e requer um percurso adicional (for) exclusivo para contar os que estão acima.

### Exercício 3 — Indicadores salariais
**Enunciado:** Programa em C que lê e armazena os salários de 6 funcionários e, em seguida, calcula a média salarial, determina o maior salário e conta quantos salários estão abaixo da média.
**Arquivo:** [`exercicio3.c`](./exercicio3.c)
**Solução:** Um algoritmo estendido do formato vetorizado para consolidar e separar métricas numéricas usando condicional dentro do loop principal.

### Exercício 4 — Vendas da cafeteria
**Enunciado:** Programa em C que lê as vendas de 3 produtos durante 4 dias (cada linha representa um produto e cada coluna, um dia), calcula o total vendido de cada produto e o total geral de itens vendidos.
**Arquivo:** [`exercicio4.c`](./exercicio4.c)
**Solução:** Modela os dias e vendas no formato tabular (matriz bidimensional) executada com 2 blocos de loops iterando `i` e `j`.

### Exercício 5 — Médias dos estudantes
**Enunciado:** Programa em C que lê as 4 notas de 3 estudantes, calcula e exibe a média de cada estudante e identifica o estudante com a maior média.
**Arquivo:** [`exercicio5.c`](./exercicio5.c)
**Solução:** Matriz em arranjo com aninhamentos relacionais. Acumula resultados na linha do estudante e exibe a média individual logo após.

### Exercício 6 — Temperaturas da semana
**Enunciado:** Programa em C que lê as 7 temperaturas máximas de uma semana, armazena-as em um vetor e calcula a média semanal, a maior temperatura, a menor temperatura e quantos dias ficaram acima da média.
**Arquivo:** [`exercicio6.c`](./exercicio6.c)
**Solução:** Armazena temperaturas. Com base nas premissas (`maior = 0`, `menor = 100`), ajusta as medidas extremas iterando e filtrando as que bateram a média.

## 📚 Exemplos e arquivos de apoio
- [`desafio_operadoras.c`](./desafio_operadoras.c): Código de apoio. *(Desafio sugerido em aula para manipulação visual de constantes e busca).*

## ⚙️ Compilação rápida
`gcc exercicio1.c -o exe_01.exe`
