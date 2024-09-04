## Gerenciador de Tombamentos de Informática

Este é um programa simples em C que permite gerenciar um registro de tombamentos de equipamentos de informática. O programa possui duas principais funcionalidades: adicionar e ler tombamentos.

### Funcionalidades

1. **Adicionar Tombamentos**: 
   - Permite ao usuário inserir uma lista de tombamentos, que são então salvos em um arquivo de texto (`tombamentos.txt`).
   - O usuário pode definir a quantidade de tombamentos que deseja inserir e fornecer os valores para cada um deles.

2. **Ler Tombamentos**:
   - Lê os tombamentos registrados no arquivo de texto e exibe-os no console.
  
3. **Data e Hora da Inserção**
   - Automaticamente insere a data e hora após o inserimento do tombamento.

### Como Funciona

1. Ao iniciar o programa, o usuário é apresentado com um menu para selecionar entre adicionar tombamentos ou ler tombamentos existentes.
2. Se o usuário escolher adicionar, o programa solicita o número de tombamentos a serem inseridos, coleta os dados e os salva em `tombamentos.txt`.
3. Se o usuário escolher ler, o programa abre o arquivo `tombamentos.txt`, lê os dados e os exibe na tela.
4. Após realizar a leitura, o usuário pode optar por voltar ao menu principal ou fechar o programa.

### Requisitos

- Ambiente de desenvolvimento C (ex.: GCC).
- Sistema operacional que suporte os comandos de terminal utilizados (`system("cls")` para Windows).

### Como Compilar e Executar

1. Compile o programa usando o compilador GCC:
   ```bash
   gcc -o gerenciador_tombamentos gerenciador_tombamentos.c
   ```
2. Execute o programa:
   ```bash
   ./gerenciador_tombamentos
   ```

### Observações

- O programa utiliza a função `system("cls")` para limpar a tela no Windows. Para ambientes Unix/Linux, você pode alterar `cls` para `clear`.
- Certifique-se de que o arquivo `tombamentos.txt` tenha permissões adequadas de leitura e escrita.
