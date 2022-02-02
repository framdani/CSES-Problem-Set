#include <iostream>

int ft_max(int a, int b, int c, int d)
{
    int max = std::max(a, b);
    max = std::max(max, c);
    max = std::max(max, d);
    return max;
}

int main()
{
    std::string input;

    std::cin>>input;

    int i=0,max= 0;
    int countA ,countC, countG, countT;
    
    while (input[i])
    {
        countA=countC=countG=countT=0;
        if (input[i] == 'A')
        {
            while (input[i] && input[i] == 'A')
            {countA++;i++;}
        }
        else if (input[i] == 'C')
        {
            while (input[i] && input[i] == 'C')
            {countC++;i++;}
        }
        else if (input[i] == 'G')
        {
            while (input[i] && input[i] == 'G')
            {countG++;i++;}
        }
        else
        {
            while (input[i] && input[i] == 'T')
            {countT++;i++;}
        }
        max = std::max(max, ft_max(countC, countG, countA, countT));
    }
    std::cout<<max<<std::endl;
}