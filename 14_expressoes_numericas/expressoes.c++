#include<iostream>
#include<math.h>
using namespace std;

int main() {
    
    int t1,t2,t3,t4,t5,t6,t7;
    
    
    cout<<"Teste 1"<<endl;
    t1=1+3;
    cout<<t1<<endl;
    
    cout<<"Teste 2"<<endl;
    t2=2-3*2;
    cout<<t2<<endl;
    
    cout<<"Teste 3"<<endl;
    t3=(pow(2,3) / 4);
    cout<<t3<<endl;
    
    cout<<"Teste 4"<<endl;
    t4=0*5*(4+1);
    cout<<t4<<endl;
    
    cout<<"Teste 5"<<endl;
    int a=0;
    t5=5+5/a;
    if(a==0){
        return "ERR DISBYZERO";
    }else{
        cout<<t5<<endl;
    }
    
    cout<<"Teste 6"<<endl;
    t6=5++1;
    if(ERR){
        return "ERR DISBYZERO";
    }else{
        cout<<t6<<endl;
    }
    
    cout<<"Teste 7"<<endl;
    t7=5+(465+1;
    if(ERR){
        return "ERR SYNTAX";
    }else{
        cout<<t7<<endl;
    }
    
    return 0;
}