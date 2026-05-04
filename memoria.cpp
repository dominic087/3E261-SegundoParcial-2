#include<istream>
using namespace std;
int main()
{
    int a 
    cout<<&a<<endl; 
    cout<<"int"<<sizeof(int)<<endl;
    cour<<"char"<<sizeof(char)<<endl;
    cout<<"float"<<sizeof(float)<<endl; 
    cout<<"bool"<<sizeof(bool)<<endl;
    cout<<"double"<<sizeof(bool)<<endl;

    int a;
    a=5;
    cout<<&a<<endl;
    cout<<a<<endl;
    cout<<*(&a)<<endl;
   
    cout<<"*: ";

     cout<<sizeof(int*)<<endl;
     cout<<sizeof(float*)<<endl;
     cout<<sizeof(bool*)<<endl;
     cout<<sizeof(char*)<<endl;
     cout<<sizeof(double*)<<endl;

     int* direccion;
     cout<<direccion<<endl;
     cout<<&direccion<<endl;
     cout<<*direccion<<endl;
}
 return0;