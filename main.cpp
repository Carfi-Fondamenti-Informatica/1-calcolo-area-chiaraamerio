#include <iostream>
using namespace std;

int main(){
  
float a=0, b=0, c=0, area_triangolo=0, area_quadrato=0, area_rettangolo=0, area_trapezio=0;
cout<<"inserire tre valori reali"<< endl;
  
cin >> a >> b >> c;

    area_triangolo = (a*b)/2;
    area_quadrato = a*a;
    area_rettangolo = a*b;
    area_trapezio = ((a+b)*c)/2;


    cout<<area_triangolo<< endl;
    cout<<area_quadrato<< endl;
    cout<<area_rettangolo<< endl;
    cout<<area_trapezio<< endl;


return 0; 
}
