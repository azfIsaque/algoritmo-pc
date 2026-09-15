#Projeto 1 da Aula de Algoritmos e pensamento computacional.
# 🎮 Arena Tech — Sistema de Análise e Viabilidade de Eventos

ARENA TECH: PLANEJAMENTO E VIABILIDADE DA MARATONA GAMER
Um programa em C para calcular custos, analisar recursos e decidir sobre a realização de um evento
[![Linguagem C](https://img.shields.io/badge/Linguagem-C-00599C?style=for-the-badge&logo=c&logoColor=white)](https://en.cppreference.com/w/c)
[![Status](https://img.shields.io/badge/Status-Concluído-brightgreen?style=for-the-badge)](#)
[![Tipo](https://img.shields.io/badge/Projeto-Acadêmico-blue?style=for-the-badge)](#)
O **Arena Tech** é um programa desenvolvido em linguagem **C** para automatizar o planejamento financeiro, análise de infraestrutura e tomada de decisão estratégica para a realização de eventos de eSports e tecnologia. 
O sistema avalia a capacidade computacional, o consumo de energia elétrica, o custo total do evento e determina a decisão final quanto à viabilidade do projeto (Aprovado, Aprovado com Ressalvas ou Não Recomendado).
---
## 📌 Sumário
- [Funcionalidades](#-funcionalidades)
- [Regras de Negócio e Fórmulas](#-regras-de-negócio-e-fórmulas)
- [Estrutura do Projeto](#-estrutura-do-projeto)
- [Como Compilar e Executar](#-como-compilar-e-executar)
- [Exemplo de Execução e Teste](#-exemplo-de-execução-e-teste)
- [Análise Técnica e Boas Práticas em C](#-análise-técnica-e-boas-práticas-em-c)
- [Autor](#-autor)
---
## 🚀 Funcionalidades
1. **Gestão de Equipes e Participantes**:
   - Cálculo automático da quantidade necessária de times a partir do total de participantes.
   - Verificação de disponibilidade de infraestrutura (computadores vs. participantes).
2. **Análise de Consumo Energético**:
   - Cálculo do consumo de energia em quilowatts-hora ($kWh$).
   - Classificação do consumo energético em três níveis:
     - **BAIXO**: $\le 20\text{ kWh}$
     - **MODERADO**: $> 20\text{ kWh}$ e $\le 40\text{ kWh}$
     - **ALTO**: $> 40\text{ kWh}$
3. **Demonstrativo de Custos**:
   - Apuração do custo de energia elétrica.
   - Apuração do custo total com kits de alimentação.
   - Consolidação de custos adicionais (outros custos).
   - Cálculo do **Custo Total** e do **Custo Individual por Participante**.
4. **Análise Orçamentária e Tomada de Decisão**:
   - Apuração do saldo remanescente do orçamento.
   - Classificação da situação financeira (`DENTRO DO ORÇAMENTO`, `NO LIMITE DO ORÇAMENTO` ou `ACIMA DO ORÇAMENTO`).
   - Algoritmo de decisão final automatizado com apontamento do motivo em caso de ressalvas ou reprovação.
---
## 📐 Regras de Negócio e Fórmulas
| Métrica | Fórmula de Cálculo |
| :--- | :--- |
| **Times Necessários** | $\lceil \text{Participantes} / \text{Jogadores por Time} \rceil$ |
| **Consumo de Energia (kWh)** | $(\text{Qtd. PCs} \times \text{Potência (W)} \times \text{Duração (h)}) / 1000$ |
| **Custo de Energia** | $\text{Consumo (kWh)} \times \text{Preço kWh}$ |
| **Custo Alimentação** | $\text{Participantes} \times \text{Preço Kit}$ |
| **Custo Total** | $\text{Custo Energia} + \text{Custo Alimentação} + \text{Outros Custos}$ |
| **Custo por Participante** | $\text{Custo Total} / \text{Participantes}$ |
| **Saldo Orçamentário** | $\text{Orçamento Disponível} - \text{Custo Total}$ |
### Critérios da Decisão Final:
* **NÃO RECOMENDADO**: Quando a quantidade de computadores é menor que a de participantes **OU** o custo total excede o orçamento.
* **APROVADO COM RESSALVAS**: Quando a infraestrutura e o orçamento são adequados, mas o consumo energético supera $40\text{ kWh}$.
* **APROVADO**: Quando a infraestrutura e orçamento são adequados e o consumo energético é igual ou inferior a $40\text{ kWh}$.
---
## 📂 Estrutura do Projeto
```text
projeto1_arena_tech/
├── arena_tech.c       # Código-fonte principal em C
└── README.md          # Documentação oficial do projeto
```
---
## 🛠️ Como Compilar e Executar
### Pré-requisitos
* Compilador C (GCC, Clang ou MSVC).
* Sistema Operacional (Windows, Linux ou macOS).
### Passo a Passo
1. **Clonar ou Baixar o Repositório**:
   ```bash
   git clone https://github.com/azfIsaque/projeto1_arena_tech/arena-tech.git
   cd projeto1_arena_tech
   ```
2. **Compilar o Código**:
   Utilizando o GCC:
   ```bash
   gcc -o projeto1_arena_tech projeto1_arena_tech.c -lm
   ```
   > *Nota: A flag `-lm` é necessária em ambientes Linux/GCC para vincular a biblioteca matemática `<math.h>` (função `ceil`).*

3. **Executar a Aplicação**:
   * **Linux/macOS**:
     ```bash
     ./projeto1_arena_tech
     ```
   * **Windows**:
     ```cmd
    projeto1_arena_tech.exe
     ```
---
## 📊 Exemplo de Execução e Teste
Utilizando o cenário de teste oficial fornecido nas especificações do projeto:
### Entradas de Teste
| Parâmetro | Valor de Entrada |
| :--- | :--- |
| **Participantes** | `30` |
| **Jogadores por Time** | `5` |
| **Computadores Disponíveis** | `30` |
| **Potência Média por PC** | `800 W` |
| **Duração do Evento** | `2 h` |
| **Preço do kWh** | `R$ 1,20` |
| **Kit Alimentação (por pessoa)** | `R$ 20,00` |
| **Outros Custos** | `R$ 150,00` |
| **Orçamento Máximo** | `R$ 1.000,00` |
### Saída Gerada pelo Programa
```text
============== ARENA TECH ==============
Digite a quantidade de participantes: 30
Digite a quantidade de jogadores em cada time: 5
Digite a quantidade de computadores disponíveis: 30
Digite a potencia média de cada computador, em watts: 800
Digite a duração do evento, em horas: 2
Digite o preço de 1 kWh de energia: 1.20
Digite o preço de um kit de alimentação por participante: 20
Digite o valor dos outros custos do evento: 150
Digite o orçamento máximo disponível para o evento: 1000

============== ARENA TECH ==============
Participantes: 30
Times necessários: 6
Computadores disponíveis: 30
Infraestrutura: SUFICIENTE

Consumo estimado: 48.00 kWh
Classificação do consumo: ALTO
Custo de energia: R$57.60
Custo de alimentação: R$600.00
Outros custos: R$150.00
CUSTO TOTAL: R$807.60
CUSTO POR PARTICIPANTE: R$26.92

Orçamento disponível: R$1000.00
Saldo: R$192.40
Situação do orçamento: DENTRO DO ORÇAMENTO

DECISÃO FINAL: APROVADO COM RESSALVAS
Motivo: Consumo elevado de energia
=========================================
```
---
## 💡 Análise Técnica do Código C
Como boa prática de engenharia de software, seguem observações e recomendações técnicas sobre o código desenvolvido:
1. **Divisão Inteira com `ceil()`**:
   - No código original: `ceil(qte_participantes / qte_jogadores_por_time)`.
   - Em C, a divisão de dois inteiros (`int / int`) resulta em um número inteiro truncado *antes* de passar para a função `ceil()`. Por exemplo, se fossem 31 participantes e 5 por time, `31 / 5` resultaria em `6`, e `ceil(6)` resultaria em `6.0` (quando o correto seriam 7 teams).
   - **Recomendação de ajuste**: Realizar a coerção de tipo (*cast*) para `float` antes da divisão:
     ```c
     qte_times = ceil((float)qte_participantes / qte_jogadores_por_time);
     ```

2. **Localização de Caracteres (`setlocale`)**:
   - O uso de `setlocale(LC_CTYPE, "")` é excelente para garantir a exibição correta de acentos e caracteres da língua portuguesa no terminal.

3. **Validação de Entradas**:
   - Em futuras versões, recomenda-se adicionar validações para evitar divisões por zero (ex.: `qte_jogadores_por_time == 0` ou `qte_participantes == 0`) e valores negativos de entrada.

---

## 👤 Autor

* **Desenvolvedor**: Isaque Moreira
* **GitHub**: [@azfIsaque](https://github.com/azfIsaque)
* **RGM**: 48034983
