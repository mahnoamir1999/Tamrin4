#include <iostream>

using namespace std;

int main()
{


    int a, b, n1, n2, temp, kmm;
    cout<<"enter a : ";
    cin>>a;
    cout<<"enterb : ";
    cin>>b;
    n1 = a;
    n2 = b;

    while(true){

        if(b == 0) break;

        temp = a%b;
        a = b;
        b = temp;
    }

    kmm = (n1 * n2) / a;


    cout<<"K.M.M:"<<kmm;

    return 0;
}