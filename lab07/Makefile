targets = main.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src

all: clean prep compile

clean:
	rm -rf dist
prep:
	mkdir dist
compile:
	$(CC) $(C_OPTS) "task1_lab05/src/main.c" -o dist/main1.bin
	$(CC) $(C_OPTS) "task2_lab05/src/main.c" -o dist/main2.bin
	$(CC) $(C_OPTS) "task3_lab05/src/main.c" -o dist/main3.bin
	$(CC) $(C_OPTS) "task4_lab05/src/main.c" -o dist/main4.bin
	$(CC) $(C_OPTS) "task5_lab05/src/main.c" -o dist/main5.bin
	$(CC) $(C_OPTS) "task1_lab06/src/main.c" -o dist/main6.bin
	$(CC) $(C_OPTS) "task2_lab06/src/main.c" -o dist/main7.bin
	$(CC) $(C_OPTS) "task3_lab06/src/main.c" -o dist/main8.bin
	$(CC) $(C_OPTS) "task4_lab06/src/main.c" -o dist/main9.bin
	$(CC) $(C_OPTS) "task5_lab06/src/main.c" -o dist/main10.bin
	$(CC) $(C_OPTS) "task6_lab06/src/main.c" -o dist/main11.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO
