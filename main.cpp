#include <iostream>
#include <Fibonacci.h>

using namespace std;

int main()
{
    Fibonacci F(20);
    cout << endl;
    cout << "C'est la somme de ces elements : ";
    F.afficher();
    cout << endl;

    return 0;
}
