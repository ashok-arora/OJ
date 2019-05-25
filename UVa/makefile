# Usage:
# make        # compile all binary
# make clean  # remove ALL binaries and objects

.PHONY = all clean

CXX = g++                        # compiler to use
CXXFLAGS = -O2 -Wall -Wextra -std=c++14


# SRCS := $(wildcard *.cpp)
# BINS := $(SRCS:%.cpp=%)

all: ${BINS}

%: '%.o'
	@echo "Checking.."
	${CXX}${CXXFLAGS} $< -o $@

%.o: '%.cpp'
	@echo "Creating object.."
	${CXX}${CXXFLAGS} -c $<

clean:
	@echo "Cleaning up..."
	rm -rvf *.o ${BINS}
