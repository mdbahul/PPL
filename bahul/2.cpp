#include <bits/stdc++.h>
using namespace std;

class A{
    public:
        string s1;
        A(string s) :s1(s) {};
};

class B{
    public:
        string s2;
        B(string s) :s2(s) {};
};

class C: public A, public B{
    public:
    string concat;
    C(string s1, string s2) :A(s1), B(s2) {
        concat = s1 + s2;
    }
    void Concat(){
        cout << "Concatinated string : "<< concat << endl;
    }
};

class D:public C{
    public:
    D(string s1, string s2) :C(s1,s2) {}
    void palindrome(){
        string r = concat;
        reverse(r.begin(),r.end());
        if(r==concat) {
            cout << "Palindrome" << endl;
        }
        else {
            cout << "Not a palindrome" << endl;
        }
        
    }
};

int main() {
    D d("Hello", "olleH");
    d.Concat();
    d.palindrome();
}