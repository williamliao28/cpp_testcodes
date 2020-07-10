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
CCFLAGS		= -O3 -m64 -std=c++11 -fopenmp

#c_obj = ntd2eu.o
	  
#cpp_obj = ntd2eu.o

INCS = -I include

.PHONY: all clean

all: MakeExe


%.o: %.c
	$(CC)

#%.o: src/cpp/%.cpp
#	$(CXX) $(CCFLAGS)


MakeExe: ntd2eu.out

ntd2eu.out: ntd2eu.o
	$(LOADER) $(CCFLAGS) -o $@

#surfpara.out: surfpara.o $(surfpara_obj)
#	$(LOADER) $(CCFLAGS) -o $@ $< $(surfpara_obj) $(MKLLNKS) $(CUDALNKS)

#surfpara_magma.out: surfpara.o $(surfpara_magma_obj)
#	$(LOADER) $(CCFLAGS) -o $@ $< $(surfpara_magma_obj) $(MKLLIBS) $(CUDALIBS) $(MAGMALIBS) $(MKLLNKS) $(CUDALNKS) $(MAGMALNKS)

clean:
	-rm *.o -f
	-rm *.out -f