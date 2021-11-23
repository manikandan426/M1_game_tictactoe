# Name of the project
PROJECT_NAME = Tic_Tac_Toe

# Output directory
BUILD = build

# All source code files
SRC = src/player.c src/checkwin.c src/board.c\

# All test source files

TEST_SRC = src/player.c src/checkwin.c src/board.c\
test/test.c\
unity/unity.c\

TEST_PROJ_NAME = test_$(PROJECT_NAME)

# All include folders with header files
INC	= -I inc\

INC_T = -I unity\



# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).exe



# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc main.c $(SRC) $(INC) -o $(PROJECT_OUTPUT)

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT)

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) $(INC_T) -o $(BUILD)/$(TEST_PROJ_NAME).exe
	./$(BUILD)/$(TEST_PROJ_NAME).exe

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) *.exe


# Create new build folder if not present
$(BUILD):
	mkdir build
