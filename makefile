#---------------------------Variáveis da Main------------------------------------
CC = gcc
MAIN_SRC = Geral/Src/main.c Geral/Src/leitura.c TarefaB/Src/cifra.c
MAIN_OUT = Out/exe
EXEC_MAIN = ./$(MAIN_OUT)

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
