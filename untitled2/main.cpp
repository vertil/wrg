#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b;

    cin>>a>>b;
    if(pow(a,b)<pow(b,a)){
        cout<< "<"<<endl;

    }if(pow(a,b)>pow(b,a)){
        cout<< ">"<<endl;
    }if(pow(a,b)==pow(b,a)){
        cout<< "="<<endl;
    }


    return 0;
}
