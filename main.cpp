#include<iostream>
using namespace std;

int main(){

    int c3=0;
    int c5=0;

    for(int i=1; i<=100;i++){
        c3++;
        c5++;
        if((c3==3)&&(c5==5)){
            cout<<"FizzBuzz"<<endl;
            c3=0;
            c5=0;
        }else if(c3==3){
            cout<<"Fizz"<<endl;
            c3=0;
        }else if(c5==5){
            cout<<"Buzz"<<endl;
            c5=0;
        }else{
            cout<<i<<endl;
        }
    }

    return 0;
}