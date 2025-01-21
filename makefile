#---------------------------Variáveis da Main------------------------------------
CC = gcc
MAIN_SRC = Geral/Src/main.c Geral/Src/leitura.c TarefaB/Src/cifra.c
MAIN_OUT = Out/exe
EXEC_MAIN = ./$(MAIN_OUT)

#---------------------------Variáveis da Tarefa A---------------------------------
CC = gcc
MAIN_TAREFA_A = Geral/Src/casamentopalavras.c Geral/Src/leitura.c TarefaA/Algoritmos.h TarefaA/Algoritmos.c
MAIN_OUT_TAREFA_A = Out/exe_tarefa_a
EXEC_MAIN_TAREFA_A = ./$(MAIN_OUT_TAREFA_A)

#----------------------------Regras Auxiliares-----------------------------------
#vai criar a pasta Out caso ela não exista
create_out_dir:
	mkdir -p Out

#------------------------------Rules Principais----------------------------------
compile: create_out_dir
	$(CC) $(MAIN_SRC) -o $(MAIN_OUT)

run: compile
	$(EXEC_MAIN)

all: compile run
