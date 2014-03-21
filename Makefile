
GTKCFLAGS := $(shell pkg-config --cflags gtk+-3.0)
GTKLIBS := $(shell pkg-config --libs gtk+-3.0)

all:
	gcc -O0 -ggdb3 $(GTKCFLAGS) -o zedzpic ./app.c $(GTKLIBS)

