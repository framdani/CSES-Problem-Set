#include <iostream>
#include <map>
int main()
{
    int t;
    std::string line;
    unsigned long y,x;

    std::cin>>t;
    std::cout << t<<std::endl;
    std::map<int, int>m;
    for (int i = 0; i <t*2 ;i+=2)
    {
        std::cin>>x;
        std::cin>>y;
        m[x] = y;
    }
    
    
}