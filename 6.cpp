#include<iostream>
using namespace std;
int myfunc(int a,int b) {
    int sum;
    sum=a*b;
    return sum;
}
int main() {
    int a,b,sum;
    cout<<"one number: "<<endl;
    cin>>a;
    cout<<"two number: "<<endl;
    cin>>b;
    sum = myfunc(a,b);
    cout<<sum<<endl;    
    system ("pause");
    return 0;
}
