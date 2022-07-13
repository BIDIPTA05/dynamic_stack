#include<iostream>
using namespace std;
int main(){

    int i = 90;
    int &z = i;
    z++;
    cout << i;

    return 0;
}   