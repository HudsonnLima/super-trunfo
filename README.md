# Super Trunfo em C – Tema 2  
Comparação de atributos entre duas cartas de cidades usando estruturas condicionais aninhadas e menu interativo.

## 📘 Descrição
Este projeto é um exercício avançado de programação em C, onde o usuário cadastra duas cartas contendo informações de cidades e depois escolhe, através de um menu interativo, qual atributo deseja comparar.

O programa utiliza:
- Entrada estruturada de dados
- Cálculo de atributos derivados
- `switch-case` para o menu
- `if-else` **aninhados**, conforme exigido pelo desafio
- Impressão formatada dos resultados

---------------------------------------------------------

## ⚙️ Como compilar

No terminal:

```bash
gcc main.c -o supertrunfo

gcc main.c -o supertrunfo.exe

supertrunfo.exe

🃏 Atributos cadastrados

Cada carta registra:

Estado (A–H)

Código da carta (ex: A01)

Nome da cidade

População

Área (km²)

PIB (em bilhões)

Pontos turísticos

Densidade Demográfica (calculado)

PIB per Capita (calculado)

Super Poder (somatório ponderado de atributos)

📊 Atributos disponíveis no menu

O menu apresenta 7 opções para comparação:

===== MENU DE COMPARAÇÃO =====
1 - População
2 - Área
3 - PIB
4 - Pontos Turísticos
5 - Densidade Demográfica
6 - PIB per Capita
7 - Super Poder


Exemplo de uso

Entrada das cartas:

=== Cadastro da Carta 1 ===  
Estado (A-H): A  
Codigo da carta: A01  
Nome da cidade: Cidade 1  
População: 100000  
Área (km2): 129.5  
PIB (em bilhões): 3.2  
Número de pontos turísticos: 5

(Depois repete para a Carta 2)

===== RESULTADO =====
Comparando População:
Cidade 1 -> 100000 habitantes
Cidade 2 -> 12300000 habitantes
Vencedor: Cidade 2


Estruturas utilizadas

switch-case para seleção de atributos

if-else aninhados em cada comparação

fgets() para leitura correta de nomes com espaços

Cálculos matemáticos com float e unsigned long int

