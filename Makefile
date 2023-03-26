# Compiler
CXX = g++

# Compiler Flags
CXXFLAGS = -std=c++11 -Wall -Wextra -pedantic

# Libraries
LIBS = -lsfml-graphics -lsfml-window -lsfml-system

# Object files
OBJ = main.o Enemies.o ZombieEnemy.o

# Target
MonsterRoom: $(OBJ)
	$(CXX) $(CXXFLAGS) -o MonsterRoom $(OBJ) $(LIBS)

main.o: main.cpp Enemies.hpp ZombieEnemy.hpp TextureResourceManager.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

ZombieEnemy.o: ZombieEnemy.cpp ZombieEnemy.hpp Enemies.hpp TextureResourceManager.hpp
	$(CXX) $(CXXFLAGS) -c ZombieEnemy.cpp

Enemy.o: Enemies.cpp Enemies.hpp TextureResourceManager.hpp
	$(CXX) $(CXXFLAGS) -c Enemies.cpp

clean:
	rm $(OBJ) MonsterRoom

