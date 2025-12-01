#include <iostream>
#include <string>
using namespace std;

void Exemplo_Cout_Cin()
{
    int X;
    X = 10;
    cout << "Valor de X = " << X << endl << "\n" << endl << "Duvida do Tiago \n";
    string Nome;
    Nome = "Zezito";
    cout << "Nome = " << Nome << endl;
    int Z;
    cout << "Int. o valor de Z" << endl;
    //cin >> Z;
    //cout << "Z = " << "\t  ----> " << Z << endl << endl;
}
int NAlgarismos(int N)
{
    if (N == 0) return 0;
    return 1 + NAlgarismos(N / 10);
}
void Histograma(int N)
{
    cout << "Entrei em <" << __FUNCTION__ << "> Falta Terminar!!!" << endl;
    int Nalg = NAlgarismos(N);
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < Nalg; j++)
        {
            cout << "- ";
        }
        cout << endl;
    }
    cout << "Sai de <" << __FUNCTION__ << ">" << endl;
}
int main()
{
    cout << "Bom Dia TP-16_09_2024" << endl;
    Exemplo_Cout_Cin();
    Histograma(14356);
    return 0;
}
