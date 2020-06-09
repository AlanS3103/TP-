#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char continuar;
    double n1, n2;
    int opcao;
    do{
    system("cls");
    cout<<"\n-----------------------------------";
    cout<<"\n(1) Soma";
    cout<<"\n(2) Subtração";
    cout<<"\n(3) Multiplicação";
    cout<<"\n(4) Divisão";
    cout<<"\n(5) Potência";
    cout<<"\n(6) Euler(exponencial)";
    cout<<"\n-----------------------------------";
    cout<<"\n Digite a opção desejada:";
    cin>>opcao;
    switch (opcao)
    {
    case 1:
        cout<<"Digite um número:";
        cin>>n1;
        cout<<"Digite outro número:";
        cin>>n2;
        cout<<"\n";
        cout<<"A soma é igual a:"<< n1+n2;
        break;
    case 2:
        cout<<"Digite um número:";
        cin>>n1;
        cout<<"Digite outro número:";
        cin>>n2;
        cout<<"\n";
        cout<<"A subtração é igual a:"<< n1-n2;
        break;
    case 3:
        cout<<"Digite um número:";
        cin>>n1;
        cout<<"Digite outro número:";
        cin>>n2;
        cout<<"\n";
        cout<<"A multiplicação é igual a:"<< n1*n2;
        break;
    case 4:
        cout<<"Digite um número:";
        cin>>n1;
        cout<<"Digite outro número:";
        cin>>n2;
        cout<<"\n";
        cout<<"A divisão é igual a:"<< n1/n2;
        break;
    case 5:
        cout<<"Digite um número:";
        cin>>n1;
        cout<<"Digite outro número:";
        cin>>n2;
        cout<<"\n";
        cout<<"A potência é igual a:"<< pow(n1,n2);
        break;
    case 6:
        cout<<"digite o valor a ser calculado por e:";
        cin>>n1;
        cout<<"\n";
        cout<<"O resultado é igual a:"<<exp(n1);
        break;
    default:
        cout<<"A opção selecionada é inválida!";
        break;
    }
    cout<<"\n Deseja fazer outra conta? (S/N)";
    cin>>continuar;
 }while(continuar=='S' || continuar=='s');
 system("cls");
 return 0;
}
