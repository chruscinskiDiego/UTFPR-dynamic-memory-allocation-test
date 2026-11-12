# Alocação dinâmica de memória em C

Exercício acadêmico da UTFPR que utiliza o cadastro de funcionários para praticar estruturas, ponteiros e alocação dinâmica.

## Funcionalidades do exercício

- Menu de cadastro, remoção e listagem de funcionários.
- Associação de dados de nome, cargo, vínculo e data.
- Funções para liberação de memória.

## Organização

- `empresa.h`: tipos e interface.
- `empresa.c`: operações sobre os dados.
- `main.c`: fluxo de interação.

## Compilar

```bash
gcc -Wall -Wextra main.c empresa.c -o funcionarios
```

## Escopo

Código histórico de avaliação acadêmica. A compilação e execução não foram validadas nesta revisão; revise os fluxos de entrada e a vida útil dos ponteiros antes de usar. Os dados são mantidos em memória.
