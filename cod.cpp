
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
void main() {
	int i=0;
	char name[20];
	char upr[20];
	cout << "enter your favourite subject " << endl;
		cin.getline(name, 20);
		while (name[i] != '\0') {
			upr[i] = name[i];
			i++;
}
		upr[i] = '\0';
	
	for (int j = 0; j < 20; j++) {
		if (int(upr[j]) >= 97 && int(upr[j]) <= 122) {
			upr[j]=upr[j] - 32;
		}

	}cout << "Toggel case is   "<< upr << endl;
	_getch();
}
