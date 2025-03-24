#include <iostream>
#include "Name.h"
using namespace std;

class Ludmila: public Name
{
	public:
		Ludmila(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
		
	private:
		string name;
		
};
