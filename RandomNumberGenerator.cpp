#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int n;
    cout<<"Enter a no. between which you want to generate a random number(starting from 1 to n): ";
    cin>>n;
    int randomNo =  rand() % n + 1;
    cout<<"Random No.: "<<randomNo;
    return 0;
}