CC = g++
MT = ./test/main_test.cpp
WT = ./test/prov_test.cpp
MTO = ./build/main_test.o
WTO = ./build/prov_test.o
FF = -o

all: test

test: $(MTO) $(WTO)
	$(CC) $(MTO) $(WTO) $(FF) ./bin/sudoky_test

$(MTO): $(MT)
	$(CC) -c $(MT) $(FF) $(MTO)

$(WTO): $(WT)
	$(CC) -c $(WT) $(FF) $(WTO)

clean:
	rm ./build/*.o
