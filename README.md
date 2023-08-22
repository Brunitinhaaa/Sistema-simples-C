# Sistema-simples-C

<h1>Academia 42 - Sistema de Gerenciamento</h1>

O **Academia 42** é um sistema de gerenciamento de uma academia, desenvolvido em linguagem C. Ele oferece funcionalidades para cadastro de alunos, conferência de planos disponíveis, exibição da lista de alunos cadastrados, consulta do total em caixa e consulta da faixa etária dos alunos. O sistema permite cadastrar até 5 alunos, armazenando informações como nome, plano, peso, altura e idade.

## Funcionalidades

1. **Conferir Planos**
   Ao selecionar essa opção, o sistema exibe os planos disponíveis na academia, juntamente com suas características e preços.

2. **Cadastro de Alunos**
   Nessa opção, você pode cadastrar até 5 alunos, inserindo informações como nome, plano escolhido, peso, altura e idade. Certifique-se de utilizar as opções de planos corretamente ("basic", "plus" ou "extreme").

3. **Checar Alunos Cadastrados**
   O sistema exibirá a lista de alunos cadastrados, mostrando detalhes como nome, plano, peso, altura e idade. Além disso, calculará o valor total em caixa, somando os preços dos planos escolhidos pelos alunos.

4. **Consulta da Faixa Etária**
   Aqui, você poderá conferir o número de alunos em diferentes faixas etárias, incluindo adolescentes, adultos e idosos.

5. **Consulta do Caixa**
   Essa opção exibirá o valor total em caixa, representando a soma dos valores dos planos escolhidos pelos alunos.

## Compilação e Execução

1. Certifique-se de que você possui um compilador C instalado em sua máquina.
2. Copie o código-fonte disponibilizado e salve-o em um arquivo com a extensão `.c`, por exemplo, `academia42.c`.
3. Abra um terminal ou prompt de comando e navegue até o diretório onde você salvou o arquivo.
4. Compile o código digitando o seguinte comando e pressionando Enter:
gcc -o academia42 academia42.c
Execute o programa com o comando:
./academia42
