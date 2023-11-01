#include <iostream>
using namespace std;
int main() {
    int a,b,c,d,e,sum=0,avg;
    cout<<"Enter the 5 nums:\n";
    cin>>a>>b>>c>>d>>e;
    
    sum=a+b+c+d+e;
    cout<<"Sum of 5 nums is: "<<sum<<endl;
    avg=sum/5;
    cout<<"Average of 5 nums is: "<<avg;
    return 0;
}
