#ifndef FIBONACCI_H
#define FIBONACCI_H
#include <vector>

using namespace std;

class Fibonacci
{
    public:
        Fibonacci(int);
        virtual ~Fibonacci();
        void add();
        void afficher();

    private:
        vector<int> v;
};

#endif // FIBONACCI_H
