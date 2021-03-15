.PHONY: all clean

CPP = g++
CPP_FLAGS = -std=c++17 -O2 

# create build directory
CREATE_DIR : $(shell mkdir -p ./build)

# compile /examples dir with options to compile single
%: $(CREATE_DIR) %.cpp
	@# @echo compiling $@.cpp
	@$(CPP) $^ $(CPP_FLAGS) -o ./build/$@
	@echo executable ./build/$@ created.


# or all files
all: $(patsubst %.cpp, %, $(wildcard *.cpp))

clean:
	rm -rf ./build
	@echo built binaries cleared.