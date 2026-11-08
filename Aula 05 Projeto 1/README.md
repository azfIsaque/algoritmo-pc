# 🚀 Aula 05 — Projeto 1 (Arena Tech)

## 📌 Contexto
A turma foi convidada a organizar a Arena Tech, uma pequena maratona gamer no campus. Antes de confirmar o evento, a equipe precisa estimar a quantidade de times, o consumo de energia, os custos envolvidos e verificar se a infraestrutura disponível é suficiente. Além de realizar os cálculos, o programa deverá analisar os resultados e emitir um diagnóstico sobre a viabilidade do evento.

## 🎯 Objetivo
Transformar o problema contextualizado em uma solução computacional utilizando linguagem C, unindo cálculos, estruturação de fluxo e verificação de condições para aprovar (ou recusar) a realização da maratona.

## 💻 Descrição da Solução
**Arquivo:** [`projeto1_arena_tech.c`](./projeto1_arena_tech.c)
O software lê os dados essenciais (participantes, estrutura, potências e preços). Utiliza a função `ceil` via `math.h` para arredondar a quantidade de times e aplica blocos condicionais (`if/else`) para validar consumo elétrico, aprovar a infraestrutura e avaliar se os gastos não excedem o orçamento, finalizando com o veredito (APROVADO, APROVADO COM RESSALVAS ou NÃO RECOMENDADO).

## 📊 Tabela de Testes Mínimos

| Participantes | Jog./time | PCs | Potência | Horas | R$/kWh | Kit | Outros | Orçamento |
| ------------- | --------- | --- | -------- | ----- | ------ | --- | ------ | --------- |
| 30            | 5         | 30  | 800 W    | 2 h   | R$ 1,20 | R$ 20,00 | R$ 150,00 | R$ 1.000,00 |

**Resultados esperados para o teste:**
- Consumo de energia: `48.00 kWh` (ALTO)
- Custo total: `R$ 807.60`
- Infraestrutura: `SUFICIENTE`
- Orçamento: `DENTRO DO ORÇAMENTO`
- Decisão final: `APROVADO COM RESSALVAS`

## 👥 Integrantes
- Isaque Moreira — RGM: 48034983

## ⚙️ Compilação e Execução (Windows)
```powershell
gcc projeto1_arena_tech.c -o arena_tech.exe -lm
.\arena_tech.exe
