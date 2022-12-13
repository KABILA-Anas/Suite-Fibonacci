#include "Fibonacci.h"
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

///Cette fonction ajoute un elment au vecteur qui est la somme du deux dernier elements
void Fibonacci::add()
{
    v.push_back(*(v.end()-1) + *(v.end()-2));
}

Fibonacci::Fibonacci(int n)
{
    v.push_back(0);
    v.push_back(1);

    ///Ajouter les elements necessaires pour calculer Fibonacci de n
    for(int i = 0; i < (n-2); i++)
        add();

    ///Fibonacci de n egale a la somme de touts les elements du vecteur
    if(!n || n==1)
        cout << "Fibonacci of " << n << " is : " << accumulate(v.begin(), v.end(), 0) << endl;
    else
        cout << "Fibonacci of " << n << " is : " << accumulate(v.begin(), v.end(), 0) + 1 << endl;
}

Fibonacci::~Fibonacci()
{
    //dtor
}




void Fibonacci::afficher()
{
    cout << "[ ";
    for(auto i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "]";
}
