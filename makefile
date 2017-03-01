GCOV = -fprofile-arcs -ftest-coverage

1wLines:TestMain.o TestBubbleSort.o bubbleSort.o TestInsertSort.o insertSort.o
	gcc $(GCOV) -o 1wLines TestMain.o TestBubbleSort.o bubbleSort.o TestInsertSort.o insertSort.o

%.o: %.c
	gcc $(GCOV) -c $^
.PHONY:
clean:
	@rm -rf *.gcov
	@rm -rf *.gcda
	@rm -rf *.gcno
	@rm -rf *.o
	@rm -rf 1wLines
