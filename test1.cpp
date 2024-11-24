// Online C++ compiler to run C++ program online
#include <iostream>
#include <math.h>

using namespace std;

void triangle(float a, float b, float c){
    float p, s, h;
    cout<<endl;
    p=3*a;
    h = sqrt(a*a-a*a/4);
    s=a*h/2;
    cout<<"1-perimetri:_"<<p<<endl;
    cout<<"1-yuzasi:_"<<s<<endl;
    cout<<endl;
    a=b;
    p=3*a;
    h = sqrt(a*a-a*a/4);
    s=a*h/2;
    cout<<"2-perimetri:_"<<p<<endl;
    cout<<"2-yuzasi:_"<<s<<endl;
    cout<<endl;
    
    
    a=c;
    p=3*a;
    h = sqrt(a*a-a*a/4);
    s=a*h/2;
    cout<<"3-perimetri:_"<<p<<endl;
    cout<<"3-yuzasi:_"<<s<<endl;
    
}


int main() {
    
    float a, b, c ;
    cout<<"1-uchburchakning tomoni:_"; cin>>a;
    cout<<"2-uchburchakning tomoni:_"; cin>>b;
    cout<<"3-uchburchakning tomoni:_"; cin>>c;
    
    triangle(a, b, c);
    

    return 0;
}
