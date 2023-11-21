//Find Nature of Quadratic Root
//Quadric Equation
//ax² + bx + c = 0
//x = (-b ± √ (b2 - 4ac) )/2a. Discriminant is, D = b2 - 4ac. If D > 0, then the equation has two real and distinct roots.


#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float a,b,c,d,r1,r2;
    cout<<"Enter a,b and c"<<endl;
    cin>>a>>b>>c;
    d = b *b -4*a*c;

    if(d == 0){
        cout<<"root are real and equal"<<endl;
        cout<<endl<<(-b/(2*a));
    }else if(d>0){
        cout<<"roots are real and unequal"<<endl;
        cout<<endl<<(-b+sqrt(d))/(2*a);
    }else{
        cout<<"Imaginary";
    }

    return 0;
}