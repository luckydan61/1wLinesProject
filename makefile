1wLines:TestMain.o TestBubbleSort.o bubbleSort.o TestInsertSort.o insertSort.o
	gcc -fprofile-arcs -ftest-coverage -o 1wLines TestMain.o TestBubbleSort.o bubbleSort.o TestInsertSort.o insertSort.o

TestMain.o:TestMain.c
	gcc -fprofile-arcs -ftest-coverage -c TestMain.c

TestBubbleSort.o: TestBubbleSort.c
	gcc -fprofile-arcs -ftest-coverage -c TestBubbleSort.c

bubbleSort.o: bubbleSort.c
	gcc -fprofile-arcs -ftest-coverage -c bubbleSort.c

TestInsertSort.o: TestInsertSort.c
	gcc -fprofile-arcs -ftest-coverage -c TestInsertSort.c

insertSort.o: insertSort.c
	gcc -fprofile-arcs -ftest-coverage -c insertSort.c

.PHONY: 
clean:
	@rm *.gcda
	@rm *.gcno
	@rm *.o
	@rm 1wLines
