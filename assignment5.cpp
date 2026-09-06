#include <iostream>
using namespace std;
int opr(int a, int b)
{
    return (a-b);
}
float opr(float m, float n, float l)
{
    return (m*n/l);
}
int opr(int g, int i, float v, int e, float r)
{
    return (g+i*v/e-r);
}
int main()
{
    int a,b,g,i,e;
    float m,n,l,v,r;
    cout<<"Enter all numbers sequentially(a,b,m,n,l,g,i,v,e,r): "<<endl;
    cin>>a>>b>>m>>n>>l>>g>>i>>v>>e>>r;
    cout<<"Subtraction of 2 integers is: "<<opr(a,b)<<endl;
    cout<<"1st Expression gives answer as: "<<opr(m,n,l)<<endl;
    cout<<"2nd Expression gives answer as: "<<opr(g,i,v,e,r)<<endl;
    return 0;
}