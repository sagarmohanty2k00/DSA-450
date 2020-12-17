#include <iostream>
using namespace std;

int main(){

	char character;
	cout << "Enter a character : ";cin >> character;

	switch(character){
	
		case 'a' :
			cout << "a : Hello\n";
			break;
		case 'b':
			cout << "b : Hola\n";
			break;
		default :
			cout << "I only know 2 languages\n";
			break;
	}
}
