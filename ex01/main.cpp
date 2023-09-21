#include <iostream>
#include "iter.hpp"

#define MAX_VAL 3

// int main(int, char**)
// {
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         mirror[i] = value;
//     }
// 	iter(mirror, MAX_VAL, foo);
//     delete [] mirror;//
//     return 0;
// }

int main() 
{
	int tab[] = { 0, 1, 2, 3, 4 }; 
	Awesome tab2[5];
	iter( tab, 5, print);
	iter( tab2, 5, print);
	return 0;
}