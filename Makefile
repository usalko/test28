CC = gcc
CFLAGS = -Iinclude -Wall
LIBS = -lcunit
SRCS = $(wildcard src/*.c)
TESTS = $(wildcard tests/*.c)
OBJS = $(SRCS:.c=.o)
TEST_OBJS = $(filter-out tests/test_runner.o, $(TESTS:.c=.o))

all: test_runner

test_runner: $(OBJS) tests/test_runner.o $(TEST_OBJS)
    $(CC) -o $@ $^ $(LIBS)

%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

test: test_runner
    ./test_runner

clean:
    rm -f src/*.o tests/*.o test_runner
