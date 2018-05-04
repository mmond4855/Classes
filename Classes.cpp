// Classes.cpp : Defines the entry point for the console application.
//Mario D. Mondelice
//Learning how to make classes in C++

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Pokemon
{
public: //The class variables like in Java.
	string pokemon;
	int pokedex;


	void pokeInfo() //class functions (methods in Java)
	{
		cout << endl << "Pokemon: " << pokemon;
		cout << endl << "Index #: " << pokedex;

	}

	Pokemon()//Example 1: The default constructor. 
	{
		pokemon = "Dinosaur!!!";
		pokedex = -20000;

	}

	Pokemon(string name) //Example 2: Here is a constructor with just one of the variables paramitized in our class.
	{
		pokemon = name;
		pokedex = -4;

	}

	Pokemon(int num) //Example 3: Here is another constructor with the other variable paramitized in our class.
	{
		pokemon = "?????????";
		pokedex = num;
	}

	Pokemon(string name, int num) //Example 4: Now here is a constructor with both parameters inside of it. 
	{
		pokemon = name;
		pokedex = num;


	}

};

class Math
{
private:
	int square; //This is how you would declare a private variable in C++.

public:
	void theNum(int s) //This is how to utilize that private variable because C++ is all funky with how they handle private variables. 
	{
		//This function(method for you Java heads) is going to square the number assigned. 
		square = s;
		int total = square * square;

		cout << endl << "Number is: " << square;
		cout << endl << square << " ^ 2: " << total;


	}


};

int main()
{
	Pokemon bulbasaur; //This is how you create a new class.  In Java it would be Pokemon bulbasaur = new Pokemon();
	Pokemon pikachu; //This is why I prefer C++. Because you have the type the new Pokemon(); part. 
	Pokemon poke; //Example 1: Used for default constructor
	Pokemon birdo("Birdo"); //Example 2: Used for first paramitzed constructor.
	Pokemon mystery(5000000); //Example 3
	Pokemon jigglyPuff("JigglyPuff", 44);

	Math square; //Private class example

	pikachu.pokemon = "Pikachu"; //Since the variables are public, this is how you would declare a class variable.
	pikachu.pokedex = 1;

	bulbasaur.pokemon = "Bulbasaur";
	bulbasaur.pokedex = 2;

	pikachu.pokeInfo(); //Voids out the class attributes.
	cout << endl;

	bulbasaur.pokeInfo(); //Voids out the class attributes. 
	cout << endl;

	poke.pokeInfo(); //Voids out the default class attributes.
	cout << endl;

	birdo.pokeInfo(); //Voids outs a paramitzed class attributes.
	cout << endl;

	mystery.pokeInfo(); //Voids out a paramitzed class attributes.
	cout << endl;

	jigglyPuff.pokeInfo(); //Void out full paramtized class attributes.
	cout << endl;

	square.theNum(5); //Void out private class function.
	cout << endl;

    return 0;
}

