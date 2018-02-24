//============================================================================
// Group: Justin Schnee, Shawn Egan
// Date : 02/25/2018
// Lab: Two
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

void functOne();
void functTwo(int x);
int functThree();
void functFour(int *y);
void functFive(int &z);
void functSix(int *a, int *b);
void functSeven(char *c, char &d, char e, char *f, char &g);
void functEight(int len, int *add);
void functNine(int len, int &nineOne, int &nineTwo);
void functTen(int tenOne);
void functEleven(int elevenOne, int elevenTwo);

int main() {
	cout << "Problem 1" << endl;
	functOne();
	cout << "***********************************" << endl;

	cout << "Problem 2" << endl;
	int x = 5;
	cout << "Value is: " << x << endl;
	cout << "Address is: " << &x << endl;
	cout << "***********************************" << endl;

	cout << "Problem 3" << endl;
	int y = functThree();
	cout << "Value is: " << y << endl;
	cout << "Address is: " << &y << endl;
	cout << "***********************************" << endl;

	cout << "Problem 4" << endl;
	int z = 2;
	cout << "Value is: " << z << endl;
	cout << "Address is: " << &z << endl;
	functFour(&z); //call by pointer
	cout << "***********************************" << endl;

	cout << "Problem 5" << endl;
	int a = 4;
	cout << "Value is: " << z << endl;
	cout << "Address is: " << &a << endl;
	functFive(a); //call by reference
	cout << "***********************************" << endl;

	cout << "Problem 6" << endl;
	int b = 10;
	int c = 20;
	functSix(&b, &c);
	cout << "Value in b: " << b << endl;
	cout << "Value in c: " << c << endl;
	cout << "***********************************" << endl;

	cout << "Problem 7" << endl;
	char q = 'L';
	char r = 'G';
	char p = 'S';
	char w = 'E';
	char s = 'A';
	char t = 'J';
	char u = 'I';
	cout << w << s << r << q << w << p << endl;
	functSeven(&q, r, s, &t, u);
	cout << r << q << s << u << t << p << endl;
	cout << "***********************************" << endl;

	cout << "Problem 8" << endl;
	int eightOne = -1;
	int eightTwo = 15;
	functEight(eightTwo, &eightOne);
	cout << eightOne << endl;
	functEight(eightTwo, &eightOne);
	cout << eightOne << endl;
	functEight(eightTwo, &eightOne);
	cout << eightOne << endl;
	cout << "***********************************" << endl;

	cout << "Problem 9" << endl;
	int nineOne = -1;
	int nineTwo = -1;
	functNine(10, nineOne, nineTwo);
	cout << "Smallest Value: " << nineOne << endl;
	cout << "Index of value: " << nineTwo << endl;
	cout << "***********************************" << endl;

	cout << "Problem 10" << endl;
	functTen(10);
	functTen(5);
	functTen(20);
	cout << "***********************************" << endl;

	cout << "Problem 11" << endl;
	functEleven(10, 100);
	functEleven(15, 50);
	functEleven(17, 20);
	cout << "***********************************" << endl;
	return 0;
}

//this function has no input parameters and returns nothing
//it prints the value and address of an integer variable
//that is initialized inside the function
void functOne() {
	int x = 10;
	cout << "Value is: " << x << endl;
	cout << "Address is: " << &x << endl;
}

//this function takes an integer as input and returns nothing
//it adds four to the value inside the function, and prints
//the value and address of the input integer
void functTwo(int x) {
	x += 4;
	cout << "Value is: " << x << endl;
	cout << "Address is: " << &x << endl;
}

//this function takes no input and returns an integer
//it generates a random integer between 0 and 50, and
//prints the value and address of the integer
//the function returns the random integer
int functThree() {
	int x;
	srand(time(NULL));
	x = rand() % 50;
	cout << "Value is: " << x << endl;
	cout << "Address is: " << &x << endl;
	return x;
}

//this function takes a pointer for an integer as input
//and returns nothing. The function cubes the value at the
//address held by the pointer, then prints the value at the address,
//the address of the value, and the address of the pointer.
void functFour(int *y) {
	*y = pow(*y, 3);
	cout << "Value is: " << *y << endl;
	cout << "Address in y: " << y << endl;
	cout << "Address of y: " << &y << endl;
}

//this function takes an alias for an integer as input,
//and returns nothing. The function generates a random integer
//between 0 and 50, and adds that random integer to the value
//that the variable that was input holds. The random number,
//the new value of the input integer, and the address of
//the input integer are printed out.
void functFive(int &z) {
	int x = rand() % 50;
	z += x;
	cout << "Random number: " << x << endl;
	cout << "New value: " << z << endl;
	cout << "Address: " << &z << endl;
}

//this function takes two pointers for integers as input, creates a
//new pointer inside the function, then sets the new pointer
//to the first input address. Then, the value of the new pointer
//is set to 32 (thereby setting the first input integer value
//to 32 also). The new pointer then points to the same address
//as the second input, and the value of the new pointer is then
//changed to 42 (thereby changing the value of the second input).
void functSix(int *a, int *b) {
	int *c;
	c = a;
	*c = 32;
	c = b;
	*c = 42;
}

//this function takes two pointers for characters, two aliases for
//characters, and a character for input. The function returns nothing.
//The function modifies the values of the input characters by using
//call by reference, call by value, and call by pointer.
void functSeven(char *c, char &d, char e, char *f, char &g) {
	*c = 'H';
	d = 'C';
	e = 'Z';
	*f = 'P';
	g = 'M';
}

//this function takes in an integer value and a pointer, and returns nothing.
//an integer array of length of the input integer is created
//from random integers between 0 and 500. The array is printed, and
//the largest value in the array is stored at the input address.
void functEight(int len, int *add) {
	int eightArray[len];
	for (int i = 0; i < len; i++) {
		eightArray[i] = rand() % 500;
	}
	int largest = 0;
	for (int j = 0; j < len; j++) {
		if (eightArray[j] > largest) {
			largest = eightArray[j];
		}
		cout << eightArray[j] << ", ";
	}
	cout << endl;
	*add = largest;
}

//this function takes an integer and two aliases as input and returns nothing.
//an integer array of length of the input integer is created
//from random integers between 100 and 300. the smallest integer in the array
//is stored in the first alias, and the index of that integer is stored in
//the second alias.
void functNine(int len, int &nineOne, int &nineTwo) {
	int nineArray[len];
	for (int i = 0; i < len; i++) {
		nineArray[i] = rand() % 200 + 100;
	}
	int smallest = 301;
	int index = 301;
	for (int j = 0; j < len; j++) {
		if (nineArray[j] < smallest) {
			smallest = nineArray[j];
			index = j;
		}
	}
	nineOne = smallest;
	nineTwo = index;
}

//this function takes an integer as input and returns nothing.
//an integer array of length of the input integers is created,
//from random numbers between 0 and 50. the array is then printed
//the array is then reversed and printed again.
void functTen(int tenOne) {
	int tenArray[tenOne];
	for (int i = 0; i < tenOne; i++) {
		tenArray[i] = rand() % 50;
	}
	for (int j = 0; j < tenOne; j++) {
		cout << tenArray[j] << ", ";
	}
	cout << endl;
	//TODO : reverse the array and print it
}

//this function takes two integers as input and returns nothing.
//an integer array of length of the first integer is created from
//numbers between 0 and the second integer. the array is then searched
//through for the smallest integer, and that integer is printed. this
//is repeated until all of the integers in the array are printed in ascending
//order.
void functEleven(int elevenOne, int elevenTwo) {
	int elevenArray[elevenOne];
	for (int i = 0; i < elevenOne; i++) {
		elevenArray[i] = rand() % elevenTwo;
	}

	for (int k = 0; k < elevenOne; k++) {
		int smallest = elevenTwo;
		int index = -1;
		for (int j = 0; j < elevenOne; j++) {
			if (elevenArray[j] < smallest) {
				smallest = elevenArray[j];
				index = j;
			}
		}
		elevenArray[index] = elevenTwo + 1;
		cout << smallest << ", ";
	}
	cout << endl;
}
