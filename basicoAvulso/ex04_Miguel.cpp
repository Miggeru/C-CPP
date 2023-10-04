//Essa não consegui fazer sozinho, seria interessante dar um revisada em sala nessa.

#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	
	char string[3][50];
	int tamanho[3] = {0};
	
	for(int i = 0; i < 3; i++){
		cout << "Digite a string " << i + 1 << endl;
		cin >> string[i];
	}
	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; string[i][j] != '\0'; j++) {
			tamanho[i] += 1;
		}
	}
	
	sort(tamanho, tamanho + 3, greater<int>());
	
	for(int i = 0; i < 3; i++) {
		cout << "tamanho " << i + 1 << ": " << tamanho[i] << endl;
	}
	return 0;
}
