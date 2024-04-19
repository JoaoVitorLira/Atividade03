#include <iostream>

//1 – Peça para o usuário informar dois números, e veja se um
//é maior que o outro.
//- Se o primeiro número for maior, escreva, “o primeiro
//número é maior”
//- Se o segundo número for maior, escreva, “o segundo
//número é maior”
//- Senão, escreva, “os números são iguais”

//using namespace std;
//
//int main() {
//	int numero1;
//	int numero2;
//
//	cout << "Insira um numero: ";
//	cin >> numero1;
//
//	cout << "Insira outro numero: ";
//	cin >> numero2;
//
//	if (numero1 > numero2) {
//		cout << "o primeiro número é maior";
//	}
//	
//	if (numero2 > numero1) {
//		cout << "O segundo numero é maior";
//	} 
//
//	else {
//		cout << "Os numeros sao iguais";
//	}
//}


//2 – Um mercado solicitou um sistema para avaliar a
//quantidade de produtos no estoque.No sistema, o
//funcionário deve informar a quantidade de produtos que
//tem no estoque.
//- Se o número for maior ou igual a 100, escreva “Quantidade
//suficiente no estoque “
//- Se o número for maior ou igual a 50, escreva “Atenção ao
//estoque”
//- Senão, escreva “Faça um novo pedido e reabasteça o
//estoque”

//using namespace std;
//
//int main() {
//	int quantidade;
//	cout << "Insira um numero: ";
//	cin >> quantidade;
//
//	if (quantidade >= 100) {
//		cout << "Quantidade suficiente no estoque!";
//	}
//
//	else if (quantidade >= 50) {
//		cout << "Atenção ao estoque!";
//	}
//
//	else {
//		cout << "Faça um novo pedido e reabasteça o estoque";
//	}
//}


//3 – Peça para o usuário informar um número e veja onde ele
//se encaixa :
//-Se o número for maior que zero, escreva, “o número é
//positivo”
//- Se o número for menor que zero, escreva, “o número é
//negativo”
//- Senão, escreva, “o número é igual a zero”

using namespace std;

int main() {
	int numero;
	cout << "Insira um numero: ";
	cin >> numero;

	if (numero > 0) {
		cout << "O numero é positivo";
	}

	else if (numero < 0) {
		cout << "O numero é negativo";
	} else {
		cout << "O numero é igual a zero";
	}
}