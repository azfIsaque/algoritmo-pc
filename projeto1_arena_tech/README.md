# 🎮 Arena Tech — Sistema de Análise e Viabilidade de Eventos

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
├── projeto1_arena_tech.c       # Código-fonte principal em C
└── README.md                   # Documentação oficial do projeto
