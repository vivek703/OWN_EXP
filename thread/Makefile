IDIR =.
CC=gcc
CFLAGS=-I$(IDIR) -ggdb -O3

ODIR=.
LDIR =.

LIBS=-lm

TARGET=test

_DEPS = .
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = $(TARGET).o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(TARGET) $(ODIR)/*.o *~ core $(INCDIR)/*~ 
