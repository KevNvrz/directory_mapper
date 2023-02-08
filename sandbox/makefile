
MAKEFILE_PATH=$(shell pwd)

SRC= main.cpp

all:
	mkdir -p ./bin
	g++ $(SRC) -o ./bin/ipc_tester
	echo "$(MAKEFILE_PATH)"
	

clean:
	rm -rf $(MAKEFILE_PATH)/bin
	