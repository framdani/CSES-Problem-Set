#include <iostream>

int main()
{
    int n;
    unsigned long long xi;
    unsigned long long moves = 0;
    
    std::cin>>n;
    unsigned long tab[n];
    for ( int i=0; i < n;i++)
        std::cin>>tab[i];
    for (int i = 0; i < n-1; i++)
    {
        if (tab[i] > tab[i+1])
        {
            moves+=(tab[i] - tab[i+1]);
            tab[i+1] = tab[i+1] +(tab[i] - tab[i+1]);
        }
    }
    std::cout<<moves<<std::endl;
}