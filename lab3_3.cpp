#include<iostream> 
using namespace std;

int main(){
    float n = 6 , sum = 0; 
    while(n <= 19){
        sum += 1/n;
        n++;
    }
    cout << sum ;
}