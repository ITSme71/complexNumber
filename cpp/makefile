# Project: pmu
# Usage:
# make => compile all libraries
# make clean => remove all binaries and objects

IDIR	 =./inc
ODIR 	 =obj
CPP      =g++
CFLAGS 	 =-I$(IDIR)
_DEPS	 = complex.h 
DEPS	 = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ     = complex.o example.o 
OBJ      = $(patsubst %,$(ODIR)/%,$(_OBJ))

LIBS	 =-lm
BIN      = niam
RM       = rm -f

.PHONY: all clean init
 
$(ODIR)/%.o: %.cpp $(DEPS)
#	@echo "compiling object files..."
	@$(CPP) -c -o $@ $< $(CFLAGS)

$(BIN): $(OBJ) $(DEPS)
#	@echo "creating "$(BIN)" as executable..."
	@$(CPP) -o $@ $^ $(CFLAGS) $(LIBS)
	
clean:
	$(RM) $(OBJ) $(BIN)

init:
	mkdir obj inc

