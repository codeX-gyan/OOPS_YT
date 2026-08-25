//----POINTERS RECAP-----
#include<iostream>
using namespace std;
int main() {
    int x = 4;
    cout<<x<<endl;        // x ki val print hogi
    cout<<&x<<endl;       // x ki address print hogi
    int* p = &x;          // p me x ki address store hogyi
    cout<<p<<endl;        // p ke ander jo address store hui thi wo adrs print hogi
    cout<<*p<<endl;       // p ke andr wali adrs ki value print hogi i.e X ki val
    *p = 8;               // changing the value of x using pointers
    cout<<x<<endl;
}