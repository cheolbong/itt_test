Target=hello.exe
Sources=hello.c
CC=gcc

$(Target): $(Sources)
		$(CC) -o $(Target) $(Sources)

clean:
		rm -f *.o *.exe