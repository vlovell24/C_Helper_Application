all: compile_me

compile_me: 
	@gcc main.c -Wall -pedantic -std=c99 -o main
	@echo Your program was successfully compiled on: %date%
	@main.exe