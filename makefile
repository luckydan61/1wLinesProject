GCOV = -fprofile-arcs -ftest-coverage

1wLines:TestMain.o TestBubbleSort.o bubbleSort.o TestInsertSort.o insertSort.o
	gcc $(GCOV) -o 1wLines TestMain.o TestBubbleSort.o bubbleSort.o TestInsertSort.o insertSort.o

TestMain.o:TestMain.c
	gcc $(GCOV) -c TestMain.c

TestBubbleSort.o: TestBubbleSort.c
	gcc $(GCOV) -c TestBubbleSort.c

bubbleSort.o: bubbleSort.c
	gcc $(GCOV) -c bubbleSort.c

TestInsertSort.o: TestInsertSort.c
	gcc $(GCOV) -c TestInsertSort.c

insertSort.o: insertSort.c
	gcc $(GCOV) -c insertSort.c

.PHONY: 
clean:
	@rm *.gcov
	@rm *.gcda
	@rm *.gcno
	@rm *.o
	@rm 1wLines
