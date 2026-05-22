#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

string passwordGenerator(int length){

    srand(time(0));

    string password;
    string data = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*(){}[]:<>/?";

    for (int i=1; i <= 16; i++){
        password = password + data[rand() % data.length()];
    }

    return password;
    
}
