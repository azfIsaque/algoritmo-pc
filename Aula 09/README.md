# 📘 Aula 09 — Manipulação de Arquivos

## 🎯 Objetivo da aula
Entender as funções essenciais para a manipulação e interação do programa em C com o sistema de arquivos do computador, utilizando ponteiros do tipo `FILE` e instruções como `fopen` (modos r, w, a), leitura em bloco e gravação de logs ou relatórios dinâmicos (`.txt`).

## 📝 Exercícios

### Exercício 1
**Enunciado:** Desenvolva um algoritmo e um programa em C que leia um número inteiro e grave em um arquivo chamado `tabuada.txt` as multiplicações desse número de 0 a 10.
**Arquivo:** [`exercicio01_tabuada.c`](./exercicio01_tabuada.c)
**Solução:** Abre o arquivo com permissão "w" (escrita) para gravar formatações tabulares diretamente no disco com base no número digitado.

### Exercício 2
**Enunciado:** Desenvolva um algoritmo e um programa em C que Leia a quantidade de registros que serão cadastrados. Para cada registro, leia o dia da semana e o consumo de água em litros. Acrescente os dados ao arquivo consumo.txt, utilizando uma linha para cada registro.
**Arquivo:** [`exercicio02_consumo.c`](./exercicio02_consumo.c)
**Solução:** Cria a instrução do `fopen` com permissão "a" (append) acoplando dados formatados em linhas sem excluir histórico.

### Exercício 3
**Enunciado:** Desenvolva um algoritmo e um programa em C que abra o arquivo `tabuada.txt`, leia todas as linhas e exiba seu conteúdo na tela.
**Arquivo:** [`consulta_notas.c`](./consulta_notas.c) *(Atenção: apesar do nome do arquivo indicar notas, sua implementação lê e exibe a tabuada de `tabuada.txt`)*
**Solução:** Abre o documento em estado "r" (leitura) e percorre as linhas até atingir o fim do arquivo ou encontrar inconsistências.

### Exercício 4
**Enunciado:** Desenvolva um algoritmo e um programa em C que abra o arquivo notas.txt e determine: quantidade de estudantes; média da turma; maior nota; quantidade de alunos aprovados (nota >= a 6,0).
**Arquivo:** [`exercicio04_media_notas.c`](./exercicio04_media_notas.c)
**Solução:** Faz o processamento dinâmico sem interferência do console humano. Interpreta cada fileira lida para realizar matemática estatística da turma de form imediata.

### Exercício 5
**Enunciado:** Desenvolva um algoritmo e um programa em C que leia o arquivo e exiba a quantidade de vendas, o total vendido e o maior valor registrado.
**Arquivo:** [`exercicio05_vendas.c`](./exercicio05_vendas.c)
**Solução:** Abre `vendas.txt` no modo de leitura, desmembra os dados via ponteiro e aplica cálculos em variáveis contadoras.

### Exercício 6
**Enunciado:** Desenvolva um algoritmo e um programa em C que apresente o seguinte menu: 1- Cadastrar consumo, 2- Exibir relatório, 3- Sair. O programa deverá repetir o menu até que a opção 3 seja escolhida.
**Solução:** ⏳ Ainda não resolvido.

## 📚 Exemplos e arquivos de apoio
- [`consulta_consumo.c`](./consulta_consumo.c): *(Enunciado deduzido a partir do código)* Programa que extrai e analisa dados acumulados do arquivo `consumo.txt`.
- [`exercicio02_tabuada.c`](./exercicio02_tabuada.c): *(Enunciado deduzido a partir do código)* Outra versão do programa de geração e gravação da tabuada em arquivo.
- [`exercicio03_rgm.c`](./exercicio03_rgm.c): Programa de apoio que facilita o cadastramento de alunos via digitação do RGM e envio para `notas.txt`.
- [`exemplo01_ponteiro.c`](./exemplo01_ponteiro.c): Introdução técnica e teórica à memória e ponteiros lógicos.
- Arquivos de banco de dados TXT associados: `consumo.txt`, `notas.txt`, `tabuada.txt`, `vendas.txt`.

## ⚙️ Compilação rápida
`gcc exercicio01_tabuada.c -o programa.exe`
