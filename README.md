# Jogo da Velha em C

Jogo da velha para dois jogadores, feito em linguagem C e executado no terminal.

## Como jogar

- O Jogador 1 usa **X** e o Jogador 2 usa **O**, alternando as jogadas.
- Em cada turno, digite o número da **linha** e da **coluna** (de 0 a 2) da posição desejada.
- Se a posição já estiver ocupada, o jogo avisa e pede uma nova jogada.
- Vence quem completar uma linha, coluna ou diagonal. Se o tabuleiro encher sem vencedor, o jogo termina em empate.
- Ao final, é possível jogar novamente (digite `1` para sim e `0` para não).

## Exemplo de tabuleiro

```
[ X ] [   ] [ O ]
[   ] [ X ] [   ]
[ O ] [   ] [   ]
```

## Como compilar e executar

Requisito: um compilador C, como o [GCC](https://gcc.gnu.org/).

```bash
gcc jogo_da_velha.c -o jogo_da_velha
./jogo_da_velha
```

> O programa usa `system("cls")` para limpar a tela, então foi pensado para o terminal do Windows.

## Funcionalidades

- Tabuleiro 3x3 exibido no terminal
- Dois jogadores alternando as jogadas
- Verificação de vitória (linhas, colunas e diagonais) e de empate
- Aviso de posição ocupada
- Opção de jogar novamente

## Melhorias futuras

- [ ] Modo contra o computador
- [ ] Validação de entradas inválidas (valores fora de 0 a 2 ou letras)
- [ ] Compatibilidade com Linux e macOS

## Tecnologias

- Linguagem C
