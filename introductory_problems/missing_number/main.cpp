#include <iostream>
#include <vector>

int main()
{
    unsigned long max;
    unsigned long i = 0;
    unsigned long input;

    std::cin>>max;
    unsigned long tab[max];
    while (i < max)
        tab[i++] = 0;
    i=0;
    while(i < max-1)
    {
        std::cin>>input;
        tab[input - 1] = input;
        i++;
    }
    i = 0;
    while (tab[i] !=0)
        i++;
    std::cout<<i+1<<std::endl;
}