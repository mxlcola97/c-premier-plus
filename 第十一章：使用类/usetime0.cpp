#include<iostream>
#include "mytime0.h"
using namespace std;
int main(){
    Time coding(2,40);
    Time fixing(5,55);
    Time total;

    cout << "coding time = ";
    coding.show();

    cout << "fixing time = ";
    fixing.show();

    total = coding.Sum(fixing);
    total.show();
    return 0;
}