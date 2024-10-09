#include<iostream>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

float max(float a, float b) {
    return (a > b) ? a : b;
}

int max(int a,int b,int c){
    return max(a,max(b,c));
}

float max(float a,float b,float c){
    return max(a,max(b,c));
}

int main() {
    int a,b,c;
    float d,e,f;
    cout<<"Enter three integers: ";
    cin>>a>>b>>c;
    cout<<"Enter three floats: ";
    cin>>d>>e>>f;
    cout<<"Maximum of two integers: "<<max(a,b)<<endl;
    cout<<"Maximum of two floats: "<<max(d,e)<<endl;
    cout<<"Maximum of three integers: "<<max(a,b,c)<<endl;
    cout<<"Maximum of three floats: "<<max(d,e,f)<<endl;

}