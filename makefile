1wLines:TestMain.o TestBubbleSort.o bubbleSort.o
	gcc -fprofile-arcs -ftest-coverage -o 1wLines TestMain.o TestBubbleSort.o bubbleSort.o

TestMain.o:TestMain.c
	gcc -fprofile-arcs -ftest-coverage -c TestMain.c

TestBubbleSort.o: TestBubbleSort.c
	gcc -fprofile-arcs -ftest-coverage -c TestBubbleSort.c

bubbleSort.o: bubbleSort.c
	gcc -fprofile-arcs -ftest-coverage -c bubbleSort.c
