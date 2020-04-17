/*
Authors: Alex Gonzalez, Juan Pina-Sanz, Mikhail Mineev, Mark Khoury
Users: cssc1967, cssc1923, cssc1921, cssc1964
Class: CS 530, Spring 2020
Assignment 2, XE Dissasembler
Filename: dxe.h
*/

#include <iostream>
#include <iomanip>
#include <vector>
#include "opcode.h"

class dxe
{
    public:
        void openF(char *file);

    private:
        void storeVector();
        void opCodeMap();
        void recordFinder();
        void headerReader(int);
        vector<string> objVector;
        vector<string> symVector;

        unsigned int programLength;
        unsigned int currAddress;
        unsigned int baseAddress;

};