
# 🏙️ Jogo de Comparação de Cidades em C

Este projeto é um jogo interativo criado em linguagem C, onde o usuário compara atributos de duas cidades fictícias — como população, área, PIB, pontos turísticos e densidade demográfica — para determinar qual delas "vence" em determinado critério.

## 📌 Objetivo

O objetivo é promover a comparação de dados estatísticos de cidades simuladas, permitindo ao jogador escolher diferentes critérios de comparação e ver, através de cálculos, qual cidade vence em determinado atributo.

---

## 📁 Estrutura do Projeto

```
.
├── jogo_cidades.c    # Arquivo principal do código-fonte
└── README.md         # Este arquivo
```

---

## ⚙️ Como compilar e executar

### ✅ Requisitos

- Um compilador C (recomendado: `gcc`)
- Terminal ou console de sua preferência (cmd, PowerShell, bash, etc.)

### 🔧 Compilação

Abra o terminal e execute:

```bash
gcc -o jogo jogo_cidades.c
```

### ▶️ Execução

```bash
./jogo
```

---

## 🕹️ Como jogar

1. Execute o jogo.
2. Escolha entre:
   - Iniciar o jogo
   - Ver as regras
   - Fechar o jogo
3. Para cada cidade (Carta 1 e Carta 2), insira os dados solicitados:
   - Estado
   - Código da carta
   - Nome da cidade
   - População
   - Área (km²)
   - PIB (em bilhões de reais)
   - Pontos turísticos
4. Escolha o atributo que deseja comparar:
   - População
   - Área
   - PIB
   - Pontos turísticos
   - Densidade demográfica
   - Comparações compostas (população + área, ou PIB + pontos turísticos)

---

## 📋 Exemplo de Execução

```
Escolha uma opção:
1. Iniciar Jogo:
2. Regras do Jogo:
3. Fechar Jogo:
1

Carta 1:
Digite o estado: SP
Digite o código da carta: 101
Digite o nome da cidade: SaoPaulo
Digite a população da cidade: 12300000
Digite a área da cidade (em km²): 1521
Digite o PIB da cidade (em bilhões): 750
Digite o número de pontos turísticos: 15

Carta 2:
Digite o estado: RJ
Digite o código da carta: 102
Digite o nome da cidade: RioDeJaneiro
Digite a população da cidade: 6748000
Digite a área da cidade (em km²): 1200
Digite o PIB da cidade (em bilhões): 350
Digite o número de pontos turísticos: 20

Escolha o atributo para comparar:
1. Dados Cartas
2. População
3. Área
4. Pib
5. Pontos Turísticos
6. Densidade Demográfica
7. População e Área
8. Pib e Pontos Turísticos
2

--- Comparando População ---
SaoPaulo: 12300000 habitantes
RioDeJaneiro: 6748000 habitantes
Vencedor: SaoPaulo
```

---

## 📈 Atributos calculados

Além dos dados informados pelo usuário, o jogo realiza os seguintes cálculos:

- **Densidade Demográfica** = população / área
- **PIB per capita** = (PIB * 1.000.000.000) / população
- **Super poder (valor simbólico usado para comparações combinadas)** = combinação de todos os dados

---

## 📜 Regras do Jogo

- Você deve preencher corretamente os dados para ambas as cidades.
- Após o preenchimento, escolha um critério de comparação.
- O jogo informará a cidade vencedora com base no critério selecionado.
- Em caso de empate, será informado.

---

## 🧠 Aprendizados

Este projeto utiliza conceitos importantes da linguagem C, como:

- Variáveis e tipos de dados (`int`, `float`, `char[]`, `unsigned long int`)
- Estrutura de controle `switch` e `if/else`
- Entrada e saída de dados (`scanf`, `printf`)
- Lógica de comparação
- Organização em funções (`void jogo()`)

---

## 🛠️ Melhorias Futuras

- Utilizar `struct` para representar as cidades.
- Implementar um sistema de pontuação.
- Permitir partidas com mais de duas cidades.
- Adicionar validação de entradas.
- Criar uma interface gráfica com bibliotecas externas (ex: SDL ou ncurses).

---

## 👤 Autor

**Felipe Mangini**  
Estudante de Análise e Desenvolvimento de Sistemas pela Estácio  
📧 E-mail: felipemzamora93@gmail.com  
🔗 LinkedIn: [linkedin.com/in/felipe-mangini-78a29b181](https://linkedin.com/in/felipe-mangini-78a29b181/)

---

## 📄 Licença

Este projeto é de uso acadêmico e está sob licença [MIT](https://opensource.org/licenses/MIT) — fique à vontade para usar e adaptar.
