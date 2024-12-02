CC=g++
CFLAGS=-I.

cpu-sim: CPUs.o utils.o riscv.o
	$(CC) -o cpu-sim CPUs.o utils.o riscv.o
