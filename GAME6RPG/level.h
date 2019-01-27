#pragma once

#include "consoleColor.h"


const int rowsCount = 15;
const int columsCount = 40;

const unsigned char CellSymbol_Empty    = ' ';
const unsigned char CellSymbol_Wall     = '#';
const unsigned char CellSymbol_Hero     = 'H';
const unsigned char CellSymbol_Exit     = 'E';
const unsigned char CellSymbol_Orc      = 'O';
const unsigned char CellSymbol_Skeleton = 'S';
const unsigned char CellSymbol_Stick    = '1';
const unsigned char CellSymbol_Club     = '2';
const unsigned char CellSymbol_Spear    = '3';
const unsigned char CellSymbol_Saber    = '4';

const unsigned char levelData0[rowsCount][columsCount + 1] = {
	"########################################",
	"#H   ######O           S              1#",
	"#  #   #        ########           #####",
	"##        ######3               ########",
	"#                                     4#",
	"# ##    S          S   ####           ##",
	"#   #########     S             ########",
	"###       ###                       ####", 
	"#                   #########2     O####",
	"#######     ############################",
	"                           #############",
	"###     ####                        ####",
	"###     ######              ############",
	"###  O           S                    E#",
	"########################################",
};

unsigned char getRenderCellSymbol(unsigned char cellSymbol) 
{
	switch (cellSymbol) {
		case  CellSymbol_Empty:		return ' ';
		case  CellSymbol_Wall:		return 177;
		case  CellSymbol_Hero:		return 2;
		case  CellSymbol_Orc:		return 2;
		case  CellSymbol_Skeleton:  return 2;
		case  CellSymbol_Stick:		return 47;
		case  CellSymbol_Club:		return 33;
		case  CellSymbol_Spear:		return 24;
		case  CellSymbol_Saber:		return 108;
		case  CellSymbol_Exit:		return 178;
	}

	return '?';
}