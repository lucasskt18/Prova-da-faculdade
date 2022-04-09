#include <iostream>
using namespace std;

int main (){

     float tanque, consumo, distancia, gasolina;
	
	cout << "Informe o tamanho do tanque: ";
	cin >> tanque;
	
	cout << "Informe o consumo medio de carro: ";
	cin >> consumo;
	
	cout << "Informe a distancia que sera percorrida: ";
	cin >> distancia;
	
	cout << " Informe o valor da gasolina: ";
	cin >> gasolina;
	
	cout << "Total de litros usados: " << distancia/consumo;
	
	cout << "\nQuantidade de reabastecimentos necessarios: " << (distancia/consumo)/tanque;
	
	cout << "\nValor total gasto com combustivel: " << (distancia/consumo)*gasolina;

 }