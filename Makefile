CC = gcc
CCFLAGS = -Wall -O2 -Wextra -pedantic
SRCS := webserver1.c webserver2.c webserver3.c
EXECS := $(SRCS:.c=)

.PHONY: all clean web1

clean:
	rm -f $(EXECS)

all: $(EXECS)

%: %.c
	$(CC) $(CCFLAGS) -o $@ $<

web1: webserver1

