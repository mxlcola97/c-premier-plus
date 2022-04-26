#include<iostream>
using namespace std;

class Num
{
    private:
        int n;
    public:
        Num();
        Num(int m);
        Num operator+(const Num& t) const;
        void show() const;

};

Num::Num(){
    n = 0;
}

Num::Num(int m)
{
    n = m;
}

Num Num::operator+(const Num&t) const
{
    Num temp;
    temp.n = n + t.n;
    return temp;
}

void Num::show() const{
    cout << "n = "<< n << endl;
}

int main(){
    Num a(10);
    a.show();

    Num b(20);
    b.show();

    Num c;
    c = a + b;
    c.show();
    return 0;
}