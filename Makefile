CC = g++
MT = ./test/main_test.c
WT = ./test/workfile_test.c
MTO = ./build/main_test.o
WTO = ./build/workfile_test.o
FF = -g -o

all: test

test: $(MTO) $(WTO)
	$(CC) $(MTO) $(WTO) $(FF) ./bin/sudoky_test

$(MTO): $(MT)
	$(CC) -c $(MT) $(FF) $(MTO)

$(WTO): $(WT)
	$(CC) -c $(WT) $(FF) $(WTO)

clean:
	rm ./build/*.o
