#include<bits/stdc++.h>
using namespace std;

class A{
    public:
        int x;
        int y;
        A(int a, int b) {
            x = a;
            y = b;
        }
        int sum(){
            return x+y;
        }
};

class B{
    public:
        int x;
        int y;
        B(int a, int b) {
            x = a;
            y = b;
        }
        int diff(){
            return x-y;
        }
};

class C:public A,public B {
    public:
    C(int a, int b):A(a,b),B(a,b){}
    int product(){
        return diff()*sum();
    }
};

class D:public C {
    public:
    D(int a, int b):C(a,b){}
    int square(){
        return product()*product();
    }
};

class E:public C {
    public:
    E(int a, int b):C(a,b){}
    int cube(){
        return product()*product()*product();
    }
};

int main() {
    D d(3,4);
    cout<<"Square of product of diff and sum is "<<d.square()<<endl;
    E e(4,3);
    cout<<"Cube of square of product of diff and sum is "<<e.cube()<<endl;
}