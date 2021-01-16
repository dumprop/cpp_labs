#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text[] = {"","one","two","three","four","five","six","seven","eight","nine"};

    cout<<"enter number ";
    int num;
    cin>>num;
    int c0 = num % 10;
    int c1=(num/10)%10;
    int c2=(num/10)%100/10;
    int c3=(num/10)%1000/100;

    cout<<text[c3]<<" thousands "<<text[c2]<<" hundred "<<text[c1]<<" decade "<<text[c0];

    return 0;
}
