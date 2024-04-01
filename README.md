## Introdução

O problema de encontrar um caminho em um labirinto é um desafio clássico em ciência da computação. Dada uma matriz representando um labirinto, onde cada célula pode representar um caminho livre, uma parede ou a saída, o objetivo é encontrar um caminho do ponto de entrada para a saída. A busca em profundidade ou busca em largura são umas das estratégias comumente utilizadas para resolver este problema.

## Busca em Profundidade Iterativa

A busca em profundidade é um algoritmo de busca não informada que explora tanto quanto possível ao longo de um ramo antes de retroceder. Na versão iterativa deste algoritmo, não utilizamos recursão, mas sim uma abordagem baseada em pilha para manter o controle dos nós a serem explorados. O algoritmo segue os seguintes passos:

#### Inicialização: Começamos com a posição inicial do labirinto e uma pilha vazia.
#### Exploração: Enquanto não alcançamos a posição de saída ou a pilha não está vazia, seguimos os seguintes passos:
- Verificamos se é possível mover-se para uma posição adjacente livre.
- Se sim, movemos para essa posição e a adicionamos à pilha.
- Se não, retrocedemos (backtrack) removendo a última posição da pilha.
#### Construção do Caminho: Após encontrar a saída, reconstruímos o caminho percorrido a partir da pilha.
#### Impressão do Caminho: Por fim, imprimimos o caminho encontrado.

### Análise e Complexidade

A busca em profundidade iterativa é uma abordagem eficiente para resolver o problema do labirinto, pois evita os custos associados à recursão. A complexidade de tempo deste algoritmo é O(|V| + |E|), onde |V| é o número de vértices (ou células no labirinto) e |E| é o número de arestas (ou movimentos possíveis). No pior caso, o algoritmo pode visitar todas as células do labirinto.

## Busca em Largura

A busca em largura é outra abordagem comumente utilizada para resolver o problema de encontrar um caminho em um labirinto. Ao contrário da busca em profundidade, a busca em largura explora todos os vizinhos de um nó antes de avançar para os vizinhos dos vizinhos. Abaixo, descrevemos como este algoritmo pode ser aplicado para resolver o problema do labirinto:

#### Inicialização: Começamos com a posição inicial do labirinto e uma fila vazia.

#### Exploração: Enquanto não alcançamos a posição de saída ou a fila não está vazia, seguimos os seguintes passos:

#### Removemos o primeiro nó da fila, representando a próxima posição a ser explorada.
- Verificamos se é possível mover-se para uma posição adjacente livre.
- Se sim, movemos para essa posição e a adicionamos à fila.
- Se não, continuamos para o próximo vizinho.

#### Construção do Caminho: 
Após encontrar a saída, reconstruímos o caminho percorrido a partir da posição de saída até a posição inicial, seguindo os nós pais que foram registrados durante a exploração.

#### Impressão do Caminho: 
Por fim, imprimimos o caminho encontrado.

### Análise e Complexidade

A busca em largura é uma abordagem eficiente para resolver o problema do labirinto, pois garante que encontraremos o caminho mais curto primeiro. A complexidade de tempo deste algoritmo é O(|V| + |E|), onde |V| é o número de vértices (ou células no labirinto) e |E| é o número de arestas (ou movimentos possíveis). No pior caso, o algoritmo pode visitar todas as células do labirinto.

## Resultado dos labirintos exemplos:

| Tabuleiro1.txt | Tabuleiro2.txt | Tabuleiro3.txt | Tabuleiro4.txt | Tabuleiro5.txt |
|----------------|----------------|----------------|----------------|----------------|
| (0,9)          | (9,5)          | (0,0)          | (7,0)          | (9,9)          |
| (0,8)          | (9,6)          | (0,1)          | (7,1)          | (9,8)          |
| (1,8)          | (9,7)          | (0,2)          | (6,1)          | (9,7)          |
| (2,8)          | (8,7)          | (0,3)          | (6,2)          | (8,7)          |
| (2,7)          | (7,7)          | (0,4)          | (6,3)          | (7,7)          |
| (3,7)          | (7,6)          | (0,5)          | (5,3)          | (7,6)          |
| (4,7)          | (7,5)          | (0,6)          | (4,3)          | (7,5)          |
| (5,7)          | (6,5)          | (0,7)          | (3,3)          | (6,5)          |
| (5,6)          | (5,5)          | (0,8)          | (2,3)          | (5,5)          |
| (5,5)          | (5,6)          | (1,8)          | (2,4)          | (5,6)          |
| (6,5)          | (5,7)          | (2,8)          | (2,5)          | (5,7)          |
| (7,5)          | (4,7)          | (2,7)          | (2,6)          | (4,7)          |
| (7,6)          | (3,7)          | (2,6)          | (2,7)          | (3,7)          |
| (7,7)          | (2,7)          | (2,5)          | (2,8)          | (2,7)          |
| (8,7)          | (2,8)          | (2,4)          | (2,9)          | (2,8)          |
| (9,7)          | (1,8)          | (2,3)          | (3,9)          | (1,8)          |
| (9,6)          | (0,8)          | (3,3)          | (4,9)          | (0,8)          |
| (9,5)          | (0,9)          | (4,3)          | (5,9)          | (0,7)          |
|                |                | (5,3)          | (6,9)          | (0,6)          |
|                |                | (6,3)          |                | (0,5)          |
|                |                | (6,2)          |                | (0,4)          |
|                |                | (6,1)          |                | (0,3)          |
|                |                | (7,1)          |                | (0,2)          |
|                |                | (7,0)          |                | (0,1)          |
|                |                |                |                | (0,0)          |
              


## Conclusão

Ambas a busca em profundidade iterativa e a busca em largura são abordagens eficientes para resolver o problema do labirinto, cada uma com suas próprias vantagens. A busca em profundidade iterativa utiliza uma abordagem baseada em pilha, evitando os custos associados à recursão, enquanto a busca em largura garante encontrar o caminho mais curto primeiro. Ambos os algoritmos têm complexidade de tempo O(|V| + |E|), onde |V| é o número de células no labirinto e |E| é o número de movimentos possíveis. Portanto, a escolha entre essas abordagens depende das características específicas do problema e dos requisitos do usuário.