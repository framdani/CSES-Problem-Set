#include<iostream>
//differnce between any two even number is more than 1
#include <vector>
int main()
{
    unsigned long n;
    std::cin>>n ;
    if ( n==2 || n == 3)
    {
        std::cout<<"NO SOLUTION"<<std::endl;
        return 0;
    }
    std::vector<int> v;
    if ( n % 2 == 0)
    {
        for(unsigned int i = 2; i <= n;i=i+2)
            v.push_back(i);
        for (int i = 1; i < n; i+=2)
            v.push_back(i);
    }
    else
    {
        for (unsigned int i = 2; i < n; i=i+2)
            v.push_back(i);
        for (unsigned int i = 1; i<= n; i=i+2)
            v.push_back(i);
    }

    for (int i = 0; i <v.size(); i++)
        std::cout<<v[i]<<" ";
}