# Compiler
CXX = c++
CXXFLAGS = -Wall -Wextra -std=c++98

# Directories
SRC_DIR = .
OBJ_DIR = obj
BIN_DIR = .

# Executable
TARGET = $(BIN_DIR)/ClapTrap

# Source and Object Files
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))

# Default target
all: $(TARGET)

# Target rules
$(TARGET): $(OBJ_DIR) $(OBJS)
	@echo "Compiling files.."
	@$(CXX) $(CXXFLAGS) -o $@ $(OBJS)
	@echo "Executable created !"

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up
clean:
	@echo "Cleaning up..."
	@rm -rf $(OBJ_DIR)
	@echo "Cleaned up!"

fclean: clean
	@rm -rf $(TARGET)

re: fclean all

# Phony targets
.PHONY: all clean fclean re
