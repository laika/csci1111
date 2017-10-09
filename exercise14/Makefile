all: exercise14

clean:
	$(RM) *.o
	$(RM) *.exe
	$(RM) *.out
	$(RM) exercise14

main.o:
	$(CC) -c main.c -o main.o

doubler.o:
	$(CC) -c doubler.c -o doubler.o

exercise14: main.o doubler.o
	$(CC) -o exercise14 main.o doubler.o
