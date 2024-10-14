#include <iostream>

using namespace std;


    int a, b;
    int fib(int n){
        int a, b;
        a=0;
        b=1;
        if(n==0)
            return a ;
        else if(n==1)
            return b;
            else return fib(n-2)+fib(n-1);
        }
 int main(int argc, char ** argv){
    cout << "hello world\n" ;
    cout <<fib(5);
    return 0;
}