#################################################
##   Makefile for c test programs              ##
##   Create by Wei-Chien Liao                  ##
##   Date  : 2020/07/09                        ##
##   Update: 2020/07/10                        ##
#################################################

#=======================
# Compiler settings
#=======================
CC          = gcc
LOADER   = $(CC)

ARCH        = ar
ARCHFLAGS   = cr
RANLIB      = ranlib

#=======================
# Flag settings.
#=======================
CCFLAGS		= -O3 -m64

obj = ntd2eu.o datatype.o datarange.o relation.o logical.o
	  
#cpp_obj = ntd2eu.o

INCS = -I include
TARGETS_O	:= $(TARGETS_SRC:.c=.o)

.PHONY: all clean

all: MakeObj MakeExe

MakeObj: $(TARGETS_O)

%.o: %.c
	$(CC) -c $< $(CCFLAGS)

#%.o: src/cpp/%.cpp
#	$(CXX) $(CCFLAGS)

MakeExe: ntd2eu.out datatype.out datarange.out relation.out logical.out

ntd2eu.out: ntd2eu.o
	$(LOADER) $< -o $@ $(CCFLAGS)

datatype.out: datatype.o
	$(LOADER) $< -o $@ $(CCFLAGS)

datarange.out: datarange.o
	$(LOADER) $< -o $@ $(CCFLAGS)

relation.out: relation.o
	$(LOADER) $< -o $@ $(CCFLAGS)

logical.out: logical.o
	$(LOADER) $< -o $@ $(CCFLAGS)

clean:
	-rm *.o -f
	-rm *.out -f