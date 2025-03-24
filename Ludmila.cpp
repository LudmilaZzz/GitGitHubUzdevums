#include <iostream>
#include "Name.h"
#include "Ludmila.h"

using namespace std;

Ludmila::Ludmila(string n)
{
	name=n;
}

void Ludmila::setName(string n)
{
	name=n;
}

void Ludmila::Print() const
{
	cout << name << endl;
}

