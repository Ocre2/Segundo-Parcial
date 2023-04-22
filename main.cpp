#include <iostream>
using namespace std;
int main() {
    float salario;
    float Total_Pagar;

    for(int i = 0; i < 10; i++)
    {
        cout << "Trabajador "<< i + 1 <<" digite su salario : " << endl;
        cin >> salario;
        Total_Pagar = salario + Total_Pagar;
    }

    cout << "El total a pagar a los empleados es : "<< Total_Pagar << endl;
    cout << "El promedio es : " << Total_Pagar/10;
    return 0;
}
