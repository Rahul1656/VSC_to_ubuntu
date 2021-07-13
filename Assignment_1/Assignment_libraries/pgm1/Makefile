SRC = test.c\
src/factorial.c\
src/set.c\
src/string.c

BUILD_DIR = Build

PROJECT_NAME = ASSIGNMENT_LIBRARIES

TEST_OUTPUT = $(BUILD)/TEST_$(PROJECT_NAME).out

OBJ = test.o\
factorial.o\
set.o\
string.o

INC = include
#/bitmask.h\
#include/mystring.h\
#include/myutils.h

all.out : $(SRC)
	gcc $^ -I$(INC) -o $@


#target :  $(SRC) $(INC)
#	gcc $(SRC) -o all.out



.PHONY: run clean test doc all

all: $(OBJ)
	 	gcc $^ -I$(INC)	-o all.$(EXEC)

createobj: $(SRC)
		gcc test.c -c
		gcc src/set.c -c
		gcc src/factorial.c -c
		gcc src/string.c -c


#libmystr.a with string functions
 # * libmyutils.a with utility functions
  #* libmasking.a with bit introspection functions



createstatlib: $(SRC)
		ar rc libstatmystr.a string.o
		ar rc libstatmyutils.a factorial.o
		ar rc libstatmasking.a set.o

linkstatlib: $(SRC) createstatlib
		gcc test.o -L. -lstatmystr -lstatmyutils -lstatmasking -o s1.out -static


createdynlib: $(SRC)
	gcc -shared -o libdynmystr.so string.o
	gcc -shared -o libdynmyutils.so factorial.o
	gcc -shared -o libdynmasking.so set.o


linkdynlib: $(SRC) createdynlib
		gcc test.o -L. -ldynmystr -ldynmyutils -ldynmasking -o d1.out
		LD_LIBRARY_PATH=. ./d1.out


run : all.out
	./all.out

clean :
	rm all.out