CC   = gcc
GCOV = -fprofile-arcs -ftest-coverage
SRC  = $(wildcard *.c)
OBJS = $(SRC:.c=.o)
EXEC = 1wLines

$(EXEC):$(OBJS)
	$(CC) $(GCOV) -o $(EXEC) $(OBJS)

%.o: %.c
	$(CC) $(GCOV) -c $^
.PHONY:
clean:
	@rm -rf *.gcov
	@rm -rf *.gcda
	@rm -rf *.gcno
	@rm -rf *.o
	@rm -rf 1wLines


exec:
	./$(EXEC)

