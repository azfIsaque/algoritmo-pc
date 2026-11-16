
# 🚀 Aula 11 — Projeto 4 (EcoMonitor: Monitoramento de Temperaturas)

## 🎯 Objetivo da aula

Consolidar os pilares do **Pensamento Computacional** (decomposição, reconhecimento de padrões, abstração e elaboração de algoritmos) na linguagem C por meio da manipulação de **matrizes bidimensionais (`3x5`)**, **modularização em funções** com passagem de parâmetros e **leitura/escrita de arquivos externos** (`FILE *`).

---

## 📌 Projeto 4 — EcoMonitor: Monitoramento de Temperaturas

### Contexto

Uma empresa de tecnologia ambiental desenvolveu o **EcoMonitor**, um sistema responsável por processar e analisar as temperaturas registradas durante **cinco dias** por sensores instalados em **três regiões** de uma cidade (**Centro**, **Norte** e **Sul**). A partir da leitura de um arquivo de medições, o sistema compara o desempenho térmico entre as localidades, identifica o dia mais quente do período e contabiliza ocorrências de temperaturas críticas ($\ge 30\,^{\circ}\text{C}$).

### Descrição da Solução

**Arquivo principal:** [`ecomonitor.c`](https://www.google.com/search?q=./ecomonitor.c)

O programa armazena os dados em uma matriz de inteiros `temperaturas[LOCAIS][DIAS]` (`3` linhas $\times$ `5` colunas), utilizando constantes simbólicas (`LOCAIS = 3`, `DIAS = 5`, `LIMITE_ALERTA = 30`) e dividindo cada responsabilidade em funções específicas:

* **`carregarMedicoes(const char *nomeArquivo, int dados[LOCAIS][DIAS])`**: realiza a leitura das 15 temperaturas inteiras do arquivo de entrada para a matriz, retornando `1` em caso de sucesso ou `0` em caso de erro de leitura/abertura.
* **`calcularMediaLocal(int dados[LOCAIS][DIAS], int local)`**: percorre as 5 colunas (dias) de uma linha específica e retorna a média aritmética da localidade com precisão decimal.
* **`calcularMediaGeral(int dados[LOCAIS][DIAS])`**: percorre todos os 15 elementos da matriz (`LOCAIS x DIAS`) para calcular a temperatura média geral da cidade.
* **`contarAlertasLocal(int dados[LOCAIS][DIAS], int local)`**: verifica cada medição de uma localidade e contabiliza quantas temperaturas foram iguais ou superiores a `30 °C`.
* **`encontrarDiaMaisQuente(int dados[LOCAIS][DIAS])`**: calcula a temperatura média de cada coluna (dia) considerando as três regiões e retorna o índice (`0` a `4`) do dia mais quente, mantendo o primeiro dia em caso de empate.
* **`exibirRelatorio(FILE *destino, int dados[LOCAIS][DIAS])`**: centraliza a formatação da saída utilizando `fprintf`, permitindo gerar exatamente o mesmo relatório tanto no terminal (`stdout`) quanto no arquivo [`relatorio.txt`](https://www.google.com/search?q=./relatorio.txt).

### 📂 Estrutura de Arquivos

```text
algoritmo-pc/
└── Aula 11 Projeto 4/
    ├── ecomonitor.c                   # Código-fonte principal modularizado em C
    ├── medicoes.txt                   # Arquivo padrão de entrada (Caso de Teste 1)
    ├── teste2.txt                     # Arquivo de entrada auxiliar (Caso de Teste 2)
    ├── teste3.txt                     # Arquivo de entrada auxiliar (Caso de Teste 3 - Empate)
    ├── relatorio.txt                  # Relatório gerado automaticamente após a execução
    ├── print teste.jpg                # Captura de tela comprovando a execução do programa
    ├── Projeto_Final_EcoMonitor_v2.pdf # Enunciado e especificações oficiais do projeto
    └── README.md                      # Documentação do projeto

```

### 📊 Casos de Teste

Para validar todos os cenários exigidos na especificação, o projeto conta com três arquivos de entrada distintos (`medicoes.txt`, `teste2.txt` e `teste3.txt`):

| Teste | Arquivo de Entrada | Média Geral | Total de Alertas | Dia com Maior Média | Observação |
| --- | --- | --- | --- | --- | --- |
| **1** | [`medicoes.txt`](https://www.google.com/search?q=./medicoes.txt) | `27.40 °C` | `5` | `Dia 5` | Cenário base (Centro: 2, Norte: 3, Sul: 0 alertas) |
| **2** | [`teste2.txt`](https://www.google.com/search?q=./teste2.txt) | `19.67 °C` | `0` | `Dia 5` | Temperaturas amenas, sem ocorrência de alertas |
| **3** | [`teste3.txt`](https://www.google.com/search?q=./teste3.txt) | `30.00 °C` | `15` | `Dia 1` | Todas as medições em `30 °C` (valida critério de desempate) |

#### Exemplo de Entrada (`medicoes.txt`)

```text
24 28 31 29 33
22 25 30 32 31
20 23 26 28 29

```

#### Saída Esperada no Terminal (`medicoes.txt`)

```text
===== ECOMONITOR =====
Media geral: 27.40 C

Centro: media 29.00 C | alertas: 2
Norte: media 28.00 C | alertas: 3
Sul: media 25.20 C | alertas: 0
Dia com maior media: Dia 5
Total de alertas: 5
======================
Relatorio salvo em relatorio.txt

```

> **Nota:** O arquivo [`relatorio.txt`](https://www.google.com/search?q=./relatorio.txt) recebe exatamente o bloco delimitado entre as linhas `===== ECOMONITOR =====` e `======================`, omitindo apenas a mensagem final de confirmação exibida no terminal.

### 👥 Integrantes

* **Isaque Moreira** — RGM: `48034983` ([@azfIsaque](https://www.google.com/search?q=https://github.com/azfIsaque))
* **Álvaro**
* **Arthur Nunes**

## ⚙️ Compilação e Execução

1. **Compile o código-fonte com GCC:**
```bash
gcc ecomonitor.c -o ecomonitor.exe

```


2. **Execute o programa:**
```bash
./ecomonitor.exe

```


> **Dica:** Para alternar entre os casos de teste (`medicoes.txt`, `teste2.txt` ou `teste3.txt`), basta ajustar o nome do arquivo passado na chamada `carregarMedicoes("medicoes.txt", temperaturas)` dentro da função `main()` ou substituir o conteúdo de `medicoes.txt` antes de executar.
