#include<iostream>
using namespace std;
int main(){

    //case 1- using static memory - stack
while (true)
{
    int i = 5;
    cout << i;
}

//case2-using dynamic allocation--stack+heap
while(true){
    //creating new variable in heap
    int *ptr = new int;
    cout << "hell";
}

return 0;
}