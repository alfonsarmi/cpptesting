// C program to illustrate file inclusion
// <> used to import system header file
#include <stdio.h>
#include <iostream>
#include <list>
#include <vector>
#include "string"
#include <math.h>
#include <conio.h>
#include "testHeaderFile.h"
/*
holi
soy un comentario
*/
// " " used to import user-defined file
#include "process.h"
using namespace std;

// main function
int main()
{
	// add function defined in process.h
	add(10, 20);
	// mult function defined in process.h
	multiply(10, 20);
	// printf defined in stdio.h
	printf("Process completed");
	int a = 1;
	if (a == 1)
	{
		printf("Holi");
		if (a == 1)
		{
			printf("Holi2");
			//This is a comment
			int a = 2 + 2;
		}
		else if (c == 2)
		{
			printf("Adios");
		}
	}
	return 0;
}