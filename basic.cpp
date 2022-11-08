#include<bits/stdc++.h>
using namespace std;

int sum(int x ,  int y){
    cout<<x<<" # "<<y<<endl;
    int data =x+y;
    return data;
}

int multiply(int x, int y){
    cout<<x<<" & "<<y<<endl;
    int data =x*y;
    return data;
}

int main(){
    float a,b;
    cout<<"addition of two number"<<endl;
    cout<<"enter two number"<<endl;
    cin>>a>>b;
    int cal =multiply(a,b);
    int result =sum(a , b );
     cout<<cal<<endl;
    cout<<result<<endl;
}
// 