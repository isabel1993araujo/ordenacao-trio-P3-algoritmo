# Relatório de Profiling (gprof)

A ferramenta gprof foi utilizada para analisar o desempenho dos algoritmos de ordenação.

## Resultado

O profiling foi executado com sucesso utilizando:

```bash
gcc -pg ...
./programa.exe
gprof programa.exe gmon.out > perfil.txt
```

O arquivo `gmon.out` foi gerado corretamente e o relatório `perfil.txt` também foi criado.

Durante a análise, o gprof indicou:

- Flat profile gerado com sucesso
- No time accumulated

## Análise

Como os testes foram realizados com vetores pequenos (5 elementos), o tempo de execução foi muito baixo para que diferenças significativas entre os algoritmos fossem medidas.

Mesmo assim, foi possível validar corretamente o uso da ferramenta de profiling.
