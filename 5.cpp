#include<iostream>
using namespace std;
int myfunc(int a, int b, int c,int d,int e,int v,int n,int m,int o,int p,int r,int s,int t) {
    int sum;
    sum=a+b+c+d+e+v+n+m*o*p*r;
    cout<<"Prosto vivod s: "<<s<<endl;
    cout<<"Prosto vivod t: "<<t<<endl;
    return sum;
}
int main() {
    int a,b,c,d,e,v,n,m,o,p,r,s,t,sum;
    cout<<"number1: "<<endl;
    cin>>a;
    cout<<"number2: "<<endl;
    cin>>b;
    cout<<"number3: "<<endl;
    cin>>c;
    cout<<"number4: "<<endl;
    cin>>d;
    cout<<"number5: "<<endl;
    cin>>e;
    cout<<"number6: "<<endl;
    cin>>v;
    cout<<"number7: "<<endl;
    cin>>n;
    cout<<"number8: "<<endl;
    cin>>m;
    cout<<"number9: "<<endl;
    cin>>o;
    cout<<"number10: "<<endl;
    cin>>p;
    cout<<"number11: "<<endl;
    cin>>r;
    cout<<"number12: "<<endl;
    cin>>s;
    cout<<"number13: "<<endl;
    cin>>t;
    sum = myfunc(a,b,c,d,e,v,n,m,o,p,r,s,t);
    cout<<"Vashe chislo: "<<sum<<endl;    
    system ("pause");
    return 0;
}

