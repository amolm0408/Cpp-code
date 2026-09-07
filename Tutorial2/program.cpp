#include<iostream>
using namespace std;

int main(){
    int ES = 0;

    for(int m=1; m<=50; m++){

        if (m%2 == 0)
            ES += m;
    }

    cout<<"The sum of even numbers from 1 to 50 is- "<< ES << endl;

    return 0;
}
