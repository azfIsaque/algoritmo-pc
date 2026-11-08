# 📘 Aula 10 — Funções e Modularização

## 🎯 Objetivo da aula
Promover o encapsulamento, legibilidade e manutenibilidade do código fonte C através do uso de funções (com e sem retorno), escopos das variáveis, passagens de parâmetros por valor ou referência (ponteiros) e uso prático da diretiva estrutural `struct`.

## 📝 Exercícios

### Exercício 1
**Enunciado:** Desenvolva um programa que leia o peso do pacote e utilize a função: `float calcular_frete(float peso);` para calcular e retornar o valor do frete.
**Arquivo:** [`exercicio01_frete.c`](./exercicio01_frete.c)
**Solução:** Isola a multiplicação do frete da função `main`, executando o processo e enviando sua resposta via diretiva `return`.

### Exercício 2
**Enunciado:** Crie a função que receba os dois valores e troque seus conteúdos.
**Arquivo:** [`exercicio02_valores.c`](./exercicio02_valores.c)
**Solução:** Utiliza a passagem de dados por referência (via uso de ponteiros `*`), alterando a alocação de memória base entre duas variáveis.

### Exercício 3
**Enunciado:** Desenvolva um programa em C que solicite duas notas de um aluno, calcule a média e informe o resultado, utilizando funções. Permita que o programa seja executado enquanto o usuário possuir notas a serem digitada!
**Arquivo:** [`exercicio03_media_situacao.c`](./exercicio03_media_situacao.c)
**Solução:** Abstrai lógicas modulares (`calcula_media` e `exibe_resultado`) acopladas perfeitamente ao ambiente base contínuo.

### Exercício 4
**Enunciado:** Desenvolva um programa em C que: leia a largura (em metros); leia o comprimento (em metros); utilize uma função calcularArea() para calcular a área; exiba o resultado; permita calcular quantas áreas o usuário precisar.
**Arquivo:** [`exercicio04_funcao_area.c`](./exercicio04_funcao_area.c)
**Solução:** Utiliza interligações limpas delegando todo o procedimento de geometria e cálculo local para blocos em C externos à listagem de execução principal.

### Exercício 5
**Enunciado:** Crie uma estrutura Aluno contendo: rgm, nota1, nota2, media. Implemente: `void calcular_media(Aluno *aluno);`. A função deverá atualizar o campo media.
**Arquivo:** [`exercicio05_estrutura_media.c`](./exercicio05_estrutura_media.c)
**Solução:** Demonstra as capacidades avançadas de tipagem nativa usando o modelo e encapsulamento em blocos `struct`, e passando-o integralmente via ponteiro de memória para que seja atualizado globalmente.

## 📚 Exemplos e arquivos de apoio
- [`exemplo01_area.c`](./exemplo01_area.c): Mostra de forma básica como chamar uma função que executa matemática pura com parâmetros fixados.
- [`exemplo02_struct.c`](./exemplo02_struct.c): Construção de um tipo base customizado focado num molde abstrato de dados (exemplo de Aluno predefinido).

## ⚙️ Compilação rápida
`gcc exercicio01_frete.c -o programa.exe`
