// sum = n * (n+1)/2

#include<iostream>
using namespace std;

int main(){
    int sum, n;
    cout <<"Sum of First N natural number\n";
    cout<<"Enter the N ";
    cin>>n;
    sum = n * (n+1)/2;
    cout<<"Sum is "<<sum;
    return 0;
}