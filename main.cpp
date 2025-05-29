#include <iostream>
using namespace std;

// Calculadora simples
int main (){
      float a, b;
    char op;

    cout << "Digite o primeiro número: ";
    cin >> a;

    cout << "Digite o operador (+ - * /): ";
    cin >> op;

    cout << "Digite o segundo número: ";
    cin >> b;

    if (op == '+') cout << "Resultado: " << a + b << endl;
    else if (op == '-') cout << "Resultado: " << a - b << endl;
    else if (op == '*') cout << "Resultado: " << a * b << endl;
    else if (op == '/') {
        if (b != 0) cout << "Resultado: " << a / b << endl;
        else cout << "Não é possível dividir por zero!" << endl;
    }
    else cout << "Operador inválido!" << endl;
    
    return 0;
}