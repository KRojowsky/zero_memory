#include <iostream>
#include <windows.h>
using namespace std;

bool czy(int sum);

int main() 
{
	int tab[3];
	tab[0] = 1;
	
	ZeroMemory(tab, sizeof(tab));
	
	cout<<tab[0];
}
