#include<iostream>
#include<math.h>
using namespace std;
int n, nn, f, ff, qt, qtt;
float lado, aq, base, alt, ar, baset, altt, at, raio, ac, pq, pr, ladoa, ladob, ladoc, pc;

void qual() {
	n = 0;
	nn = 0;
	do {
		cout << "qual dos seguintes voce quer calcular?\n";
		cout << "-------------------------------------\nnumero 1 -> area\nnumero 2 -> perimetro\n";
		cout << "introduza a sua escolha: ";
		cin >> nn;
		if (nn != 1 && nn != 2) {
			cout << "voce nao fez uma escolha valida, tente novamente!\n";
		} else if (nn > 0) {
			n = nn;
		}
	} while (n < 1 || n > 2);
	switch (nn) {
	case 1: cout << "voce escolheu area\n";
		break;
	case 2: cout << "voce escolheu perimetro\n";
	}
	return;
}

void figura() {
	f = 0;
	ff = 0;
	do {
		cout << "qual das seguintes figuras geometricas voce quer usar?\n";
	cout << "-------------------------------------\nnumero 1 -> quadrado\nnumero 2 -> retangulo\nnumero 3 -> triangulo\nnumero 4 -> circulo\n";
	cout << "introduza a sua escolha: ";
	cin >> ff;
	if (ff < 1 || ff > 4) {
		cout << "voce nao fez uma escolha valida, tente novamente!\n";
	}
	else if (ff > 0) {
		f = f + ff;
		}
	} while (f < 1 || f > 4);
	switch (ff) {
	case 1: cout << "voce escolheu quadrado\n";
		break;
	case 2: cout << "voce escolheu retangulo\n";
		break;
	case 3: cout << "voce escolheu triangulo\n";
		break;
	case 4: cout << "voce escolheu circulo\n";
	}
	return;
}

void aquadrado() {
	lado = 0;
	aq = 0;
	cout << "vamos calcular a area de um quadrado!\n"; 
	do {
		cout << "introduza o valor do lado do seu quadrado em cm: ";
		cin >> lado;
		if (lado > 0) {
			aq = aq + lado;
		}
		else {
			cout << "o valor introduzido nao e valido, tente novamente!\n";
		}
	} while (aq == 0);
	cout << "a area do seu quadrado e de: " << lado * lado << " cm cubicos\n";
}

void aretangulo() {
	base = 0;
	alt = 0;
	ar = 0;
	cout << "vamos calcular a area de um retangulo!\n"; 
	do {
		do {
			do {
				cout << "introduza a base do seu retangulo em cm: ";
				cin >> base;
				if (base > 0) {
					ar++;
				}
				else if (base <= 0) {
					cout << "valor invalido, tente novamente\n";
				}
			} while (base <= 0);
			do {
				cout << "introduza a altura do seu retangulo em cm: ";
				cin >> alt;
				if (alt > 0) {
					ar++;
				}
				else if (alt <= 0) {
					cout << "valor invalido, tente novamente\n";
				}
			} while (alt <= 0);
		} while (base == 0 || alt == 0);
	} while (ar != 2);
	cout << "a area do seu retangulo e de: " << base * alt << " cm cubicos\n";
	return;
}

void atriangulo() {
	baset = 0;
	altt = 0;
	at = 0;
	cout << "vamos calcular a area de um triangulo!\n";
	do {
		do {
			do {
				cout << "introduza a base do seu triangulo em cm: ";
				cin >> baset;
				if (baset > 0) {
					at++;
				}
				else if (baset <= 0) {
					cout << "valor invalido, tente novamente\n";
				}
			} while (baset <= 0);
			do {
				cout << "introduza a altura do seu triangulo em cm: ";
				cin >> altt;
				if (altt > 0) {
					at++;
				}
				else if (altt <= 0) {
					cout << "valor invalido, tente novamente\n";
				}
			} while (altt <= 0);
		} while (baset == 0 || altt == 0);
	} while (at != 2);
	cout << "a area do seu triangulo e de: " << baset * altt / 2 << " cm cubicos\n";
	return;
}

void acirculo() {
	raio = 0;
	ac = 0;
	cout << "vamos calcular a area de um circulo!\n";
	do {
		cout << "introduza o raio do seu circulo em cm: ";
		cin >> raio;
		if (raio > 0) {
			ac++;
		}
		else {
			cout << "valor invalido, tente novamente\n";
		}
	} while (ac != 1);
	cout << "a area do seu circulo e de: " << 3.14 * pow(raio, 2) << " cm cubicos\n";
}

void pquadrado() {
	lado = 0;
	pq = 0;
	cout << "vamos calcular o perimetro de um quadrado!\n";
	do {
		cout << "introduza o valor do lado do seu quadrado em cm: ";
		cin >> lado;
		if (lado > 0) {
			pq++;
		}
		else {
			cout << "valor invalido, tente novamente\n";
		}
	} while (pq != 1);
	cout << "o perimetro do seu quadrado e de: " << lado * 4 << " cm\n";
	return;
}

void pretangulo() {
	base = 0;
	alt = 0;
	pr = 0;
	cout << "vamos calcular o perimetro de um retangulo!\n";
	do {
		do {
			do {
				cout << "introduza a base do seu retangulo em cm: ";
				cin >> base;
				if (base > 0) {
					pr++;
				}
				else if (base <= 0) {
					cout << "valor invalido, tente novamente\n";
				}
			} while (base <= 0);
			do {
				cout << "introduza a altura do seu retangulo em cm: ";
				cin >> alt;
				if (alt > 0) {
					pr++;
				}
				else if (alt <= 0) {
					cout << "valor invalido, tente novamente\n";
				}
			} while (alt <= 0);
		} while (base == 0 || alt == 0);
	} while (pr != 2);
	cout << "o perimetro do seu retangulo e de: " << base * 2 + alt * 2 << " cm\n";
	return;
}

void ptriangulo() {
	ladoa = 0;
	ladob = 0;
	ladoc = 0;
	qt = 0;
	qtt = 0;
	cout << "vamos calcular o perimetro de um triangulo!\n";
	do {
		cout << "que tipo de triangulo queres usar?\n";
		cout << "-------------------------------------\nnumero 1 -> equilatero\nnumero 2 -> isosceles\nnumero 3 -> escaleno\n";
		cout << "introduza a sua escolha: ";
		cin >> qt;
		if (qt >= 1 && qt <= 3) {
			qtt++;
		}
		else {
			cout << "escolha invalida, tenta novamente!\n";
		}
	} while (qtt != 1);
	switch (qt) {
	case 1: cout << "introduza o valor de um dos lados do seu triangulo: ";
		cin >> ladoa;
		cout << "o perimetro do seu triangulo e de: " << ladoa * 3 << " cm\n";
		break;
	case 2: cout << "introduza o valor da base do seu triangulo: ";
		cin >> ladoa;
		cout << "introduza o valor de um dos outros lados do triangulo: ";
		cin >> ladob;
		cout << "o perimetro do seu triangulo e de: " << ladoa + ladob * 2 << " cm\n";
		break;
	case 3: cout << "introduza o primeiro lado do seu triangulo: ";
		cin >> ladoa;
		do {
			cout << "introduza o segundo lado do seu triangulo: ";
			cin >> ladob;
			if (ladob == ladoa) {
				cout << "um triangulo escaleno tem os lados todos diferentes, o valor introduzido e igual a um valor anterior, tente novamente!\n";
			}
		} while (ladob == ladoa);
		do {
			cout << "introduza o valor do terceiro lado do seu triangulo: ";
			cin >> ladoc;
			if (ladoc == ladoa || ladoc == ladob) {
				cout << "um triangulo escaleno tem os lados todos diferentes, o valor introduzido e igual a um valor anterior, tente novamente!\n";
			}
		} while (ladoc == ladoa || ladoc == ladob);
		cout << "o perimetro do seu triangulo é de: " << ladoa + ladob + ladoc << " cm\n";
	}
	return;
}

void pcirculo() {
	raio = 0;
	pc = 0;
	do {
		cout << "vamos calcular o perimetro de um circulo\n";
		cout << "introduza o valor do raio do circulo em cm: ";
		cin >> raio;
		if (raio > 0) {
			pc++;
		}
		else {
			cout << "valor invalido, tenta novamente\n";
		}
	} while (pc != 1);
	cout << "o perimero do circulo e de: " << 2 * 3.14 * raio << " cm\n";
	return;
}

int main() {
	//qual();
	//figura();
	//aquadrado();
	//aretangulo();
	//atriangulo();
	//acirculo();
	//pquadrado();
	//pretangulo();
	//ptriangulo();
	//pcirculo();

	qual();
	figura();
	switch (nn) {
	case 1: switch (ff) {
	case 1: aquadrado();
		break;
	case 2: aretangulo();
		break;
	case 3: atriangulo();
		break;
	case 4: acirculo();
		break;
	}
	case 2: switch (ff) {
	case 1: aquadrado();
		break;
	case 2: aretangulo();
		break;
	case 3: atriangulo();
		break;
	case 4: acirculo();
		break;
	}
	}
}