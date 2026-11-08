# 📘 Aula 02 — Introdução à Programação em Linguagem C

## 🎯 Objetivo da aula
Introduzir os conceitos básicos de algoritmos e da linguagem C, incluindo a estrutura inicial de um programa, uso de variáveis, entrada e saída de dados (`printf` e `scanf`) e cálculos matemáticos fundamentais.

## 📝 Exercícios

### Exercício 1
**Enunciado:** Desenvolva um programa em C que leia o valor do raio de uma peça circular (em centímetros), calcule o perímetro da circunferência usando perímetro = 2 * pi * raio e exiba o resultado com duas casas decimais.
**Arquivo:** [`exercicio01_raio.c`](./exercicio01_raio.c)
**Solução:** O programa recebe o raio, define a constante pi (3.14) e aplica a fórmula, imprimindo o perímetro formatado.

### Exercício 2
**Enunciado:** Desenvolva um programa em C que leia o comprimento e a largura de um jardim retangular (em metros); calcule o perímetro do jardim utilizando a fórmula: perímetro = 2 * (comprimento + largura) e a área do jardim utilizando a fórmula: área = comprimento * largura. Ao final exiba os resultados com duas casas decimais.
**Arquivo:** [`exercicio02_area.c`](./exercicio02_area.c)
**Solução:** Recebe duas variáveis float, calcula e exibe tanto o perímetro quanto a área do jardim.

### Exercício 3
**Enunciado:** Elabore um algoritmo e um programa em linguagem C que leia a quantidade de semanas de gestação e calcule a quantidade aproximada de meses correspondentes.
**Arquivo:** [`exercicio03_gestacao.c`](./exercicio03_gestacao.c)
**Solução:** O programa lê as semanas em um inteiro, realiza a conversão matemática `(semanas * 7) / 30` utilizando um *cast* para float e exibe o tempo em meses.

### Exercício 4
**Enunciado:** Elabore um algoritmo e um programa em C que leia a massa corporal de uma pessoa, em quilogramas, e exiba a quantidade aproximada de água recomendada por dia em litros.
**Arquivo:** [`exercicio04_hidratacao.c`](./exercicio04_hidratacao.c)
**Solução:** Lê o peso (massa) e aplica a fórmula padrão de hidratação (35 ml por kg convertido para litros), apresentando o resultado final.

### Exercício 5
**Enunciado:** Elabore um algoritmo e um programa em linguagem C que leia as duas notas de um aluno e exiba sua média aritmética, apresentando o resultado com duas casas decimais.
**Arquivo:** [`exercicio05_media.c`](./exercicio05_media.c)
**Solução:** O código pede a inserção de duas notas (`nota1` e `nota2`), soma, divide por 2 e as apresenta de forma clara no terminal.

## 📚 Exemplos e arquivos de apoio
- [`exemplo01_dados_aluno.c`](./exemplo01_dados_aluno.c): Exemplo de declaração e exibição formatada de variáveis fixas.
- [`exemplo02_cafeteria.c`](./exemplo02_cafeteria.c): Código de apoio que lê quantidade e preço para calcular o total de uma compra.
- [`exemplo03_idade.c`](./exemplo03_idade.c): Estrutura mais básica em C exibindo uma variável inteira.
- [`ola_mundo.c`](./ola_mundo.c): Variação do Hello World imprimindo uma idade fixa.

## ⚙️ Compilação rápida
Navegue até o diretório: `cd "Aula 02"`
Compile com: `gcc exercicio01_raio.c -o exercicio01.exe`
Execute: `.\exercicio01.exe`
