CC := gcc -std=c11
TARGET_EXEC := out
LFLAGS  = -lm
SRCS := main.c strend.c
OBJS=$(SRCS:.c=.o)

$(TARGET_EXEC): $(OBJS)
	$(CC) $^ -o $@ $(LFLAGS)
%.o: %.c
	$(CC) -c $< -o $@
clean:
	rm $(OBJS) $(TARGET_EXEC) *~
run:
	@./$(TARGET_EXEC)
