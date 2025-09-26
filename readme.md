# Super Trunfo - Jogo de Cartas em C

> Projeto desenvolvido como parte do desafio "Nível Aventureiro" para a disciplina de Algoritmos e Programação. O objetivo é criar uma versão simplificada do jogo Super Trunfo, com foco na interatividade do usuário e na lógica de comparação de atributos.

Este programa é uma aplicação de console escrita em linguagem C que permite a dois jogadores cadastrarem cartas (representando países ou cidades) e compará-las com base em diferentes atributos.

## 🚀 Funcionalidades

-   **Cadastro de Cartas:** Permite ao usuário inserir os dados de duas cartas, incluindo nome, população, área, PIB e número de pontos turísticos.
-   **Cálculo Automático:** O programa calcula automaticamente a densidade demográfica com base na população e na área fornecidas.
-   **Menu Interativo:** Apresenta um menu claro para que o jogador escolha qual atributo usar na comparação.
-   **Lógica de Comparação:**
    -   Compara 5 atributos diferentes: População, Área, PIB, Pontos Turísticos e Densidade Demográfica.
    -   A regra geral é "o maior valor vence".
    -   **Regra Especial:** Para a Densidade Demográfica, a regra é invertida e "o menor valor vence".
-   **Exibição de Resultados:** Mostra de forma organizada qual carta venceu a rodada ou se houve um empate, exibindo os valores comparados.

## 🛠️ Tecnologias Utilizadas

-   **Linguagem:** C
-   **Compilador:** GCC (GNU Compiler Collection)

## ⚙️ Como Compilar e Executar

Para compilar e executar este projeto, você precisará de um compilador C instalado em sua máquina (como o GCC) e do Git para clonar o repositório.

**1. Clone o repositório:**
```bash
git clone [https://github.com/SEU-USUARIO/SEU-REPOSITORIO.git](https://github.com/SEU-USUARIO/SEU-REPOSITORIO.git)
```

```bash
2. Navegue até o diretório do projeto:
cd logicaSuperTrunfo
```

```bash
3. Compile o programa:
O comando a seguir irá compilar o arquivo main.c e criar um arquivo executável chamado super_trunfo.
gcc main.c -o super_trunfo
```

🎮 Exemplo de Uso
Ao executar o programa, você seguirá os passos de cadastro e depois escolherá uma opção no menu de comparação.

======= Super Trunfo - Cadastro de Cartas =======

------- CARTA 01 -------
* Insira o nome do pais/cidade: Brasil
* Insira o numero de habitantes: 215000000
* Insira a area em KM quadrados: 8510000
* Insira o PIB (Produto Interno Bruto): 1600
* Insira a quantidade de pontos turisticos: 1500
* Carta 01 (Brasil) cadastrada com sucesso!

------- CARTA 02 -------
* Insira o nome do pais/cidade: Argentina
* Insira o numero de habitantes: 45000000
* Insira a area em KM quadrados: 2780000
* Insira o PIB (Produto Interno Bruto): 450
* Insira a quantidade de pontos turisticos: 800
* Carta 02 (Argentina) cadastrada com sucesso!

========= Escolha o atributo para comparar =========
* 1 - Populacao
* 2 - Area
* 3 - PIB
* 4 - Numero de Pontos Turisticos
* 5 - Densidade Demografica (menor vence)

Digite o numero da sua opcao: 1

#### Atributo escolhido: Populacao
* -> Brasil: 215000000 habitantes
* -> Argentina: 45000000 habitantes

VENCEDOR: Brasil!