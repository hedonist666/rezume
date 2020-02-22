#!/bin/bash


g++ deque.cxx -fconcepts -std=c++17 -o deque && valgrind ./deque
g++ vector.cxx -fconcepts -std=c++17 -o vector && valgrind ./vector
