CC := gcc -std=c11
TARGET_EXEC := out
CFLAGS  := -Wall
SRCS := DataTypeSize.c Range_signed.c
OBJS=$(SRCS:.c=.o)


$(TARGET_EXEC): $(OBJS)
	$(CC) $^ -o $@
%.o: %.c
	$(CC) -c $< -o $@
clean:
	rm $(OBJS) $(TARGET_EXEC) *~
run:
	@./$(TARGET_EXEC)
