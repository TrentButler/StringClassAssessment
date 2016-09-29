#include "String Class Header.h"
#include <cassert>
#include <windows.h>
#include <iostream>
using namespace std;


int main()
{

	cout << "Please enter 2 strings.... \n";
	
	MyString firstString = MyString(firstString.stringInput());
	MyString secondString = MyString(secondString.stringInput());
	system("cls");
	cout << "[=============================================================] \n";
	
	
	cout << "First string entered has " <<firstString.Length()  << " characters... \n \n";
	cout << "Second string entered has " << secondString.Length() << " characters... \n \n";
	
	
	cout << "[~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~] \n";
	cout << "Returns 0 if strings are the same.... \n";
	cout << "Returns 1 if the first string is first.... \n";
	cout << "Returns -1 if the second string is first.... \n \n";
	
	cout <<"Function returned "<< firstString.Compare(secondString) << "\n";



	cout << "[~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~] \n";
	
	cout<<"First string character found was "<<firstString.characterAtIndex(2)<<"\n \n";
	cout << "Second string character found was " << secondString.characterAtIndex(2)<<"\n \n";

	

	cout << "lowercase ~~>> " << secondString.ToLower()<< " <<~~ lowercase " <<"\n \n";
	cout <<"lowercase ~~>> " <<firstString.ToLower()<< " <<~~ lowercase " <<"\n";
	
	cout << "\n";
	
	cout << "UPPERCASE ~~>> " << secondString.ToUpper() << " <<~~ UPPERCASE " << "\n \n";
	cout << "UPPERCASE ~~>> " << firstString.ToUpper() << " <<~~ UPPERCASE " << "\n \n";


	cout << "Append ~~>> " << firstString.Append(secondString) << " <<~~ Append" << "\n";

	cout << "Prepend ~~>> " << secondString.Prepend(firstString) << " <<~~ Prepend" << "\n \n";
	
	
	cout << "[=============================================================] \n";
	cout << "\n";
	system("pause");
	
	
}