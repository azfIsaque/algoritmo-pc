# 📘 Aula 06 — Estruturas de Repetição

## 🎯 Objetivo da aula
Introduzir e aplicar os laços de repetição em C, como o `for`, `while` e o `do...while`, possibilitando a iteração de variáveis e o controle de repetição dinâmica com base em comportamentos do usuário.

## 📝 Exercícios

### Exercício 1
**Enunciado:** Desenvolva um algoritmo e um programa em C que leia o CPF do cliente e, em seguida, os preços dos produtos adquiridos. A entrada dos produtos deverá continuar até que seja informado o valor 0, indicando o encerramento da compra. Ao final, apresente o CPF do cliente e o valor total da compra.
**Arquivo:** [`exercicio01_caixa.c`](./exercicio01_caixa.c)
**Solução:** O programa utiliza um laço acumulador de repetição, onde cada loop atualiza o total até a condição de saída ser ativada com o número 0.

### Exercício 2
**Enunciado:** Desenvolva um algoritmo e um programa em C que leia as notas dos 5 estudantes, calcule a média da turma e determine a maior nota obtida.
**Arquivo:** [`exercicio02_maior_nota.c`](./exercicio02_maior_nota.c)
**Solução:** Um bloco `for` roda exatamente 5 vezes somando as notas. Em paralelo, a condição interna atualiza a variável da maior nota sempre que o *input* for maior do que ela.

### Exercício 3
**Enunciado:** Desenvolva um programa em C que leia números inteiros e some somente os valores ímpares. O número 0 deverá indicar o encerramento da entrada de dados. Ao final, apresente a soma dos números ímpares informados.
**Arquivo:** [`exercico03_soma_impar.c`](./exercico03_soma_impar.c) *(Nota: nome do arquivo com erro de digitação mantido)*
**Solução:** Aplica o laço `do...while` em conjunto com a verificação de módulo (`%2!=0`) para acumular os ímpares inseridos.

### Exercício 4
**Enunciado:** Desenvolva um algoritmo e um programa em C que inicialmente leia a quantidade de alunos da turma. Para cada estudante, solicite sua nota. Caso seja informado um valor menor que 0 ou maior que 10, o programa deverá solicitar uma nova nota e somente prosseguir quando um valor válido for fornecido. Ao final, calcule e apresente a média da turma.
**Arquivo:** [`exercicio04_notas.c`](./exercicio04_notas.c)
**Solução:** Une a laço `for` com uma malha de validação aninhada via bloco iterativo, para garantir que as informações de nota não escapem do formato acadêmico comum (0 a 10).

### Exercício 5
**Enunciado:** Desenvolva um algoritmo e um programa em C que solicite o número da conta e a senha do cliente. Considere como credenciais válidas a conta 12345 e a senha 123. O usuário poderá realizar no máximo três tentativas. O programa deverá encerrar imediatamente quando as credenciais corretas forem fornecidas ou bloquear o acesso após a terceira tentativa incorreta. Utilize do...while.
**Arquivo:** [`exercicio05_senha.c`](./exercicio05_senha.c)
**Solução:** Usa uma variável contadora `tentativas` dentro de um `while`, garantindo a interrupção da execução (comentário de travamento) caso ela encerre, ou via credenciais batendo.

### Exercício 6
**Enunciado:** Desenvolva um algoritmo e um programa em C que apresente o cardápio e permita ao cliente adicionar produtos informando seus códigos. Após cada produto válido, apresente o subtotal do pedido. O código 0 deverá finalizar a compra e apresentar o valor total. Utilize do...while.
**Solução:** ⏳ Ainda não resolvido.

## 📚 Exemplos e arquivos de apoio
- [`exemplo1.c`](./exemplo1.c): Demonstra um caso básico do uso do laço iterativo `for`.
- [`exemplo2.c`](./exemplo2.c): Demonstra um caso básico do uso de `while`.
- [`exemplo3.c`](./exemplo3.c): Demonstra como forçar a execução prévia (pelo menos uma vez) utilizando `do...while`.

## ⚙️ Compilação rápida
`gcc exercicio01_caixa.c -o programa.exe`
