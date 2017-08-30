CC   = gcc
GCOV = -fprofile-arcs -ftest-coverage
SRC_DIR = ../source
CASE_DIR = ../case/source

SRC  = ../source/bubbleSort.c \
       ../source/countSort.c \
       ../source/insertSort.c \
       ../source/mergeSort.c \
       ../source/num2Chinese.c \
       ../source/quickSort.c \
       ../source/radixSort.c \
       ../source/selectSort.c

SRC += ../case/source/TestBubbleSort.c \
       ../case/source/TestCountSort.c \
       ../case/source/TestInsertSort.c \
       ../case/source/TestMergeSort.c \
       ../case/source/TestQuickSort.c \
       ../case/source/TestRadixSort.c \
       ../case/source/TestSelectSort.c \
       ../case/source/testNum2Chinese.c \
       ../case/source/TestMain.c
       

INC  = -I../include \
       -I../case/include

OBJS = $(patsubst %c, %o, $(notdir $(SRC)))
#OBJS = $(SRC:%.c=$(OBJ_DIR)/%.o)
EXEC = 1wLines

$(EXEC):$(OBJS)
	echo $(OBJS)
	$(CC) $(GCOV) -o $@ $^

%.o: $(SRC_DIR)/%.c
	$(CC) $(GCOV) $(INC) -c $^

%.o: $(CASE_DIR)/%.c
	$(CC) $(GCOV) $(INC) -c $^

.PHONY:
clean:
	@rm -rf *.gcov
	@rm -rf *.gcda
	@rm -rf *.gcno
	@rm -rf *.o
	@rm -rf 1wLines


exec:
	./$(EXEC)

