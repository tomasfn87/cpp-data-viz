g++ -std=c++20 -fmodules-ts -c DataLoader.cpp;
g++ -std=c++20 -fmodules-ts -c FileLoader.cpp;
g++ -std=c++20 -fmodules-ts main.cpp DataLoader.o FileLoader.o -o main;