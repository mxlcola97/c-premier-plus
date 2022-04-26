#include<iostream>
using namespace std;

class Num
{
    public://数据成员不推荐改成public
        int n;
    public:
        Num();
        Num(int m);
        void show() const;

};

Num::Num(){
    n = 0;
}

Num::Num(int m)
{
    n = m;
}

Num operator+(const Num&m,const Num&l) //const 注意非成员函数后面不需要const
{
    Num temp;
    temp.n = m.n + l.n;
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