#################################################
##   Makefile for spectral graph partitioning  ##
##   Create by Wei-Chien Liao                  ##
##   Date  : 2020/07/09                        ##
##   Update: 2020/07/10                        ##
#################################################

#=======================
# Compiler settings
#=======================
CC          = gcc
CXX         = g++
LOADER_CC   = $(CC)
LOADER_CXX  = $(CXX)

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


#%.o: src/c/%.c
#	$(CC)

#%.o: src/cpp/%.cpp
#	$(CXX) $(CCFLAGS)


MakeExe: surfpara_magma.out sgp.out

sgp.out: ntd2eu.o
	$(LOADER) $(CCFLAGS) -o $@ $< $(sgp_obj) $(MAGMALIBS) $(MAGMALNKS) $(MKLLNKS) $(CUDALNKS)

surfpara.out: surfpara.o $(surfpara_obj)
	$(LOADER) $(CCFLAGS) -o $@ $< $(surfpara_obj) $(MKLLNKS) $(CUDALNKS)

surfpara_magma.out: surfpara.o $(surfpara_magma_obj)
	$(LOADER) $(CCFLAGS) -o $@ $< $(surfpara_magma_obj) $(MKLLIBS) $(CUDALIBS) $(MAGMALIBS) $(MKLLNKS) $(CUDALNKS) $(MAGMALNKS)

clean:
	-rm *.o -f
	-rm *.out -f