/* file hellop.c */
#include <stdio.h>
#include <windows.h>

void HelloProc(char * pszString)
{
	printf("%s\n", pszString);
}

void Shutdown() {
	exit(0);
}