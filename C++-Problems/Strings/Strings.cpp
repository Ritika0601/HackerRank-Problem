#include <iostream>
#include <string>
using namespace std;

int main() {
    char t;
    std::string a,b;
    std::cin>>a;
    std::cin>>b;
     int len1=a.size();
     int len2=b.size();
    std::cout<<len1<<" "<<len2<<"\n";
    std::string c= a+b;
    std::cout<<c;
    t=a[0];
    a[0]=b[0];
    b[0]=t;
    std::cout<<"\n"<<a<<" "<<b; 
    return 0;
}
