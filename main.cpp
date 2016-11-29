#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int A,B,C,D;
    cout<<"A=";
    cin>>A;
    cout<<"B=";
    cin>>B;
    cout<<"C=";
    cin>>C;
    D=A;
    A=B;
    B=C;
    C=D;
    cout<<"A="<<A<<endl;
    cout<<"B="<<B<<endl;
    cout<<"C="<<C<<endl;
    return 0;
}
